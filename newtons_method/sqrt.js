const newton = (guess, x, tol) => {
        return Math.abs(x - guess*guess) < tol
                ? guess
                : newton((guess + x / guess) / 2, x, tol);
};

const res = newton(1, 13, 0.0000001);
console.log(`${res}\n${res**2}`);
