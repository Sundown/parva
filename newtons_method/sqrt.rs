fn newton(guess: f64, x: f64, tol: f64) -> f64 {
    if (x - guess.powf(2.0)).abs() < tol {
        guess
    } else {
        newton((guess + x / guess) / 2.0, x, tol)
    }
}

fn main() {
    let ours = newton(1.0, 13.0, 0.01);
    println!("{}\n{}", ours, ours.powf(2.0));
}
