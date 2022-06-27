## Comments
Use ```//``` for comments.
```
// Name : pun.c
// Purpose : Prints a bad pun.
// Author : K. N. King
```

## Macro definition
Use only upper-case letters in macro names.
```
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)
```

## Identifiers
Use an upper-case letter to begin each word withn an identifier
```
symbolTable currentPage nameAndAddress
```

## Layout
Statement can be divided over any number of lines
```
printf("Dimensional weight (pounds) : %d\n",
    (volume + INCHES_PER_POUND -1) / INCHES_PER_POUND);
```

Space between ```tokens```
```
volume = height * length * width;
```

Indentation and Blank lines
```C
int main(void)
{
    float fahrenheit, celsius;
    
    printf("Enter Fahrenheit temperature : ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    
    printf("Celsius equivalent : %.1f\n", celsius);
    
    return 0;
}
```

## Braces
Adding braces to statements
```
if (i > j) {
    if(i > k)
        max = i;
    else
        max = k;
} else {
    if (j > k)
        max = j;
    else
        max = k;
}
```

Use braces in all ```do``` statements
```
do {
    printf("T minus %d and counting\n", i--);
} while (i > 0);
```

Use parentheses in ```sizeof``` expressions.
```
sizeof (i+j)
```

## Conditional Expressions
It's probably best to avoid conditional expressions.   
However, they're tempting in a ```return``` statement, sometimes a ```printf``` function, and macro definitions. 
```
return i > j ? i : j;
printf("%d\n", i > j ? i : j);
```

## Make an empty loop stand out
Some use a ```continue``` statement
```
for (d = 2; d < n && n % d != 0; d++)
    continue;
```

Others use an empty compound statement
```
for (d = 2; d < n && n % d != 0; d++)
    {}
```
