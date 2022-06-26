## Exercise 06.13
Rewrite the following loop so that its body is empty:
```C
for (n = 0; m > 0; n++)
    m /= 2;
```

## Answer
My answer
```C
for (n = 0; m > 0; n++, m /= 2);
```

Actual answer
```C
for (n = 0; m > 0; n++, m /= 2)
    ;
```
