## Exercise 05.10
What output does the following program fragment produce? (Assume that ```i``` is an integer variable.)
```C
i = 1;
switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}
```
## Answer
My answer : onetwo
Actual answer : The output is ```onetwo``` since there are no break statements after the cases.
