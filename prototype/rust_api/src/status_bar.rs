pub struct StatusBar(*mut wx::wxStatusBar);

impl StatusBar {
    /// # Safety
    ///
    /// Safe as long as called with a valid raw status bar
    pub unsafe fn from_raw(status_bar: *mut wx::wxStatusBar) -> Self {
        Self(status_bar)
    }

    pub fn new() -> Self {
        Self(unsafe { wx::create_wxStatusBar() })
    }
}

impl Default for StatusBar {
    fn default() -> Self {
        Self::new()
    }
}

impl Drop for StatusBar {
    fn drop(&mut self) {
        // TODO: What to release? If anything?
    }
}
