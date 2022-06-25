## Exercise 04.09
Show the output produced by the following program fragments. Assume that ```i```, ```j```, and ```k``` are int variables.
```
(a) i = 7; j = 8;
    i *= j + 1;
    printf("%d %d", i, j);
(b) i = j = k = 1;
    i += j += k;
    printf("%d %d %d", i, j, k);
(c) i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d", i, j, k);
(d) i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d", i, j, k);
```


## Answer
(a)   
My answer : 63 8   
Actual answer : 63 8   

(b)   
My answer : 3 2 1   
Actual answer : 3 2 1   

(c)   
My answer : 2 -1 3   
Actual answer : 2 -1 3   

(d)   
My answer : 0 0 0   
Actual answer : 0 0 0   
