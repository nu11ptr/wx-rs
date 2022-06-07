struct HelloWorld;

// TODO: Implement this trait using a macro
impl wx::CustomAppOverrides for HelloWorld {
    const OVERRIDES_ON_INIT: bool = true;
}

impl wx::CustomApp<HelloWorld> for HelloWorld {
    fn on_init(app: &mut wx::App<HelloWorld>) -> bool {
        let frame = wx::Frame::from_args(None, -1, "Hello wxWidgets world");
        frame.create_status_bar();
        frame.set_status_text("Hello world");
        frame.show(true);

        app.set_top_window(&frame);
        true
    }
}

fn main() {
    let app = wx::App::new(HelloWorld);
    wx::startup(&app);
}
