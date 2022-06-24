## Exercise 03.02
Write calls of ```printf``` that display a ```float``` variable ```x``` in the following formats.   

(a) Exponential notation; left-justified in a field of size 8: one digit after the decimal point.   
(b) Exponential notation: right-justified in a field of size 10; six digits after the decimal point.   
(c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.   
(d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.   

## Answer
(a)   
My answer : printf("%8.1e", x);   
Actual answer : printf("%8.1e", x);   

(b)   
My answer : printf("%-10.6e", x);   
Actual answer : printf("%-10.6e", x);   

(c)   
My answer : printf("%8.3f", x);   
Actual answer : printf("%8.3f", x);   

(d)   
My answer : printf("%-6.0f", x);   
Actual answer : printf("%-6.0f", x);   
