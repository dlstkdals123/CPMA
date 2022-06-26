## Exercise 06.10
Show how to replace a ```continue``` statement by an equivalent ```goto``` statement.

## Answer
My answer
```C
while (…) {
    …
    continue;
    …
}
```
is equivalent the following code
```C
while (…) {
    …
    goto loop_end;
    …
    loop_end: ;
}
```

Actual answer
Consider the following while loop:
```C
while (…) {
    …
    continue;
    …
}
```
The equivalent code using goto would have the following appearance:
```C
while (…) {
    …
    goto loop_end;
    …
    loop_end: ;   /* null statement */
}
```
