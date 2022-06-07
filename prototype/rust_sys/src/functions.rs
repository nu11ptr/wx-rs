extern "C" {
    pub fn global_wxEntry(
        argc: std::os::raw::c_int,
        argv: *mut *mut std::os::raw::c_char,
    ) -> std::os::raw::c_int;
}
