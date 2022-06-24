## Exercise 03.01
What output do the following calls of printf produce?

(a) ```printf("%6d,%4d", 86, 1040);```   
(b) ```printf("%12.5e", 30.253);```   
(c) ```printf("%.4f", 83.162);```   
(d) ```printf("%-6.2g", .0000009979);```   

## Answer
(a)   
My answer	:	****86,1040   
Actual answer :	****86, 1040   

(b)   
My answer	:	**3.0253e+01   
Actual answer :	*3.02530e+01   

(c)   
My answer	:	83.1620   
Actual answer :	83.1620   

(d)   
My answer	:	9.97e-07   
Actual answer :	1e-06   
-> maybe round off / 9.9e-07 + 0.1e-07 = 10.0e-07 = 1e-06
