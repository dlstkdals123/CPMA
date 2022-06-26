## Exercise 06.14
Find the error in the following program fragment and fix it.
```C
if (n % 2 == 0);
    printf("n is even\n");
```

## Answer
My answer
```C
if (n % 2 == 0)
    printf("n is even\n");
```

Actual answer : The problem is the semicolon at the end of the first line. If we remove it, the statement is now correct:
```C
if (n % 2 == 0)
  printf("n is even\n");
```
