## Exercise 07.12
Suppose that ```i``` is a variable of type ```int```, ```f``` is a variable of type ```float```, and ```d``` is a varaible of type ```double```. Explain what conversions take place during the execution of the statement:
```
d = i + f;
```

## Answer
My answer : The value of ```i``` is converted to ```float```. the result is converted to ```double```.
Actual answer : The value of ```i``` is converted to ```float``` and added to ```f```, then the result is converted to ```double``` and stored in ```d```.
