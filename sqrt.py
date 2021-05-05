def newton(guess, x, tol):
    return guess if abs(x - guess**2) < tol\
            else newton((guess + x / guess) / 2, x, tol)

if __name__ == "__main__":
    res = newton(1, 13, 0.0000001)
    print("{}\n{}".format(res, res**2))
