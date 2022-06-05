use std::{ffi::c_void, mem, ptr};

pub struct App<T> {
    app: *mut wx::wxAppSubclass,
    pub bindings: T,
}

impl<T> App<T>
where
    T: CustomAppOverrides + CustomApp<T>,
{
    pub fn new(bindings: T) -> Box<Self> {
        // TODO: How do we not create this on a 1:1 basis?
        let vtable = unsafe { &mut *(wx::create_wxApp_vtable()) };

        if T::OVERRIDES_ON_INIT {
            unsafe extern "C" fn on_init<T: CustomAppOverrides + CustomApp<T>>(
                _arg1: *mut wx::wxAppSubclass,
                arg2: *mut std::os::raw::c_void,
            ) -> wx::bool_ {
                let app = &mut *(arg2 as *mut App<T>);
                mem::transmute(T::on_init(app))
            }

            vtable.on_init = Some(on_init::<T>);
        }

        let mut instance = Box::new(Self {
            app: ptr::null::<wx::wxAppSubclass>() as *mut _,
            bindings,
        });

        let app = {
            let instance_ptr: *mut Self = &mut *instance;
            unsafe { wx::create_wxApp_subclass(vtable, instance_ptr as *mut _ as *mut c_void) }
        };

        instance.app = app;
        instance
    }

    #[inline]
    pub fn on_init(&mut self) -> bool {
        unsafe { wx::wxApp_subclass_OnInit(self.app) != 0 }
    }

    #[inline]
    pub fn set_top_window(&mut self /*, window: &mut Window */) {
        // TODO
    }

    #[inline]
    pub fn set_initializer_function(/* TODO */) {
        // TODO
    }
}

impl<T> Drop for App<T> {
    fn drop(&mut self) {
        // TODO: What to release? If anything?
    }
}

pub trait CustomAppOverrides {
    const OVERRIDES_ON_INIT: bool = false;
}

pub trait CustomApp<T>: CustomAppOverrides {
    fn on_init(_app: &mut App<T>) -> bool {
        unimplemented!();
    }
}
