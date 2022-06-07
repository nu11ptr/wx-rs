pub trait IsWindow {
    fn raw_window(&self) -> *mut wx::wxWindow;
}

pub struct Window(pub(crate) *mut wx::wxWindow);

impl Window {
    /// # Safety
    ///
    /// Safe as long as called with a valid raw window
    pub unsafe fn from_raw(window: *mut wx::wxWindow) -> Self {
        Self(window)
    }

    pub fn new() -> Self {
        Self(unsafe { wx::create_wxWindow() })
    }
}

impl Default for Window {
    fn default() -> Self {
        Self::new()
    }
}

impl Drop for Window {
    fn drop(&mut self) {
        // TODO: What to release? If anything?
    }
}

impl IsWindow for Window {
    fn raw_window(&self) -> *mut wx::wxWindow {
        self.0
    }
}
