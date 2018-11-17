# Practice Problems: Variables, Data Types, Operations

## Problem 1
* LO: (Understand) Students will interpret errors that arise when using variables incorrectly.

This code block from a program is supposed to calculate the difference between two numbers.

```python
difference = a - b
a = 2
b = 4
```

Instead, trying to compile the program generates this error message:

```
Traceback (most recent call last):
  File "python", line 1, in <module>
NameError: name 'a' is not defined
```

Which of these options best explains the error message?

* A. `a` and `b` are identifiers, not variables.
* B. `a` and `b` are variables, which cannot be used to define another variable, `difference`.
* C. `difference` is assigned to a value based on `a` and `b`, but those variables have not yet been declared.
* D. `difference`, `a`, and `b` must all be declared at the same time.

## Problem 2
* LO: (Apply) Students will determine that value of a variable after multiple operations.

Consider this code block from a program:

```python
x = 3
x = x + 6
x = 5
```

What will be the value of `x` after these lines of codes are executed?

* A. `x` = 3
* B. `x` = 5
* C. `x` = 6
* D. `x` = 9
* E. `x` = 14

## Problem 3
* LO: (Apply) Students will determine the effect of mathematical operations on different data types.

Consider this code block from a program:

```java
p = "blueberry"
q = "pancakes"
r = p + q
```

What will be the value of `r` after these lines are executed?

* A. The addition (`+`) operation is not permitted for strings.
* B. `r` = `blueberry`
* C. `r` = `pancakes`
* D. `r` = `blueberrypancakes`
* E. `r` = `blueberry pancakes`

## Problem 4
* LO: (Apply) Determine order of operations for mathematical operations.

Consider this code block from a program:

```python
number = 10 + 12 * 4 + 2 - 1;
```

What will be the value of `number` after this line of code is executed?

* A. 59
* B. 89
* C. 110
* D. 131

## Problem 5
* LO: (Apply) Students will compute a quantity using mathematical operations.

Consider the following blocks of code for calculating the probability of winning a raffle:

**Code Block 1**

```python
winningTickets = int(17)
totalTickets = int(40000)
probability = int(winningTickets / totalTickets)
```

**Code Block 2**

```python
winningTickets = float(17)
totalTickets = float(40000)
probability = float(winningTickets / totalTickets)
```

**Code Block 3**

```python
winningTickets = int(17)
totalTickets = int(40000)
probability = float(winningTickets / totalTickets)
```

**Code Block 4**

```python
winningTickets = 17.0
totalTickets = 40000.0
probability = winningTickets / totalTickets
```

Select all code blocks that correctly calculate the value of `probability`.

- [ ] Code Block 1
- [ ] Code Block 2
- [ ] Code Block 3
- [ ] Code Block 4
- [ ] None of the above

## Problem 6
* LO: (Analyze) Students will refactor a program to use variables.

This code block from a program calculates the area of a triangle that is 50 centimeters wide and 12 centimeters tall.

Rewrite this code block using variables so that it can calculate the area of different-sized triangles. Give all variables clear names.

```python
t = 0.5 * 50 * 12
```
