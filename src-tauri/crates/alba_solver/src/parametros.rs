use nalgebra::{Matrix2x4, Matrix4, Vector3, Vector4};
struct ParamSis {
    cat_edif: u32,
    coeff_reduccion: u32,
    fac_zona: f64,
    fac_suelo: f64,
    periodo_tp: f64,
    periodo_tl: f64,
    irre_altura: f64,
    irre_planta: f64,
}

struct ParamSisNorma {
    fac_zona: Vector4<f64>,
    fac_suelo: Matrix4<f64>,
    periodo_tp_tl: Matrix2x4<f64>,
    fac_uso: Vector3<f64>,
    coeff_reduccion: f64,


}
fn hola() {
    let factor_zona = Vector4::new(0.45,0.35,0.25,0.10);
}

enum CategoriaEdificio {
    A,
    B,
    C,
    D,
    E,
}