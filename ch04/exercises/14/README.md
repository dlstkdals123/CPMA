## Exercise 04.14
Supply parentheses to show how a C compiler would interpret each of the following expressions.
```
(a) a * b - c * d + e
(b) a / b % c / d
(c) - a - b + c - + d
(d) a * - b / c - d
```

## Answer
(a)   
My answer : (((a * b) - (c * d)) + e)   
Actual answer : (((a * b) - (c * d)) + e)   

(b)   
My answer : (((a / b) % c) / d)   
Actual answer : (((a / b) % c) / d)   

(c)   
My answer : ((((- a) - b) + c) - (+ d))   
Actual answer : ((((- a) - b) + c) - (+ d))   

(d)   
My answer : (((a * (- b)) / c) - d)   
Actual answer : (((a * (- b)) / c) - d)   
