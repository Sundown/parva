(defn newton [guess x tol]
  (if (< (Math/abs (- x (Math/pow guess 2))) tol)
    (float guess)
    (newton (/ (+ guess (/ x guess)) 2) x tol)))

(def res (newton 1, 13, 0.0000001))
(println res "\n" (Math/pow res 2))
