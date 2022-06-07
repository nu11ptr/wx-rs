//use cmake::Config;

fn main() {
    // NOTE: this seems to try and build in current directory so doesn't work

    // let dest = Config::new("../c_api")
    //     .no_build_target(true)
    //     .very_verbose(true)
    //     .build();

    //println!("cargo:rustc-link-search=native={}", dest.display());
    //println!("cargo:rustc-link-search=../c_api/");
    println!("cargo:rustc-link-search=/home/scott/IdeaProjects/wx-rs/prototype/c_api/");
    println!("cargo:rustc-link-lib=static=wxc");
    println!("cargo:rustc-link-lib=dylib=stdc++");
    println!("cargo:rustc-link-lib=dylib=wx_baseu-3.0");
    println!("cargo:rustc-link-lib=dylib=wx_gtk3u_core-3.0");
}
