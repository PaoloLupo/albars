fn main () {
    cxx_build::bridge("src/api.rs")
        .file("src/ffi.cc")
        .file("src/ETABSv1.cc")
        .compile("ffi");

    println!("cargo:rerun-if-changed=src/api.rs");
    println!("cargo:rerun-if-changed=src/ffi.cc");
    println!("cargo:rerun-if-changed=include/ffi.h");
}