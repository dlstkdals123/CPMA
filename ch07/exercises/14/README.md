## Exercise 07.14
Does the following statement always compute the fractional part of ```f``` correctly (assuming that ```f``` and ```frac_part``` are ```float``` variables)?
```
frac_part = f - (int) f;
```
If not, what's the problem?

## Answer
My answer : idk   
Actual answer : No. Converting ```f``` to ```int``` will fail if the value stored in ```f``` exceeds the largest value of type ```int```.
