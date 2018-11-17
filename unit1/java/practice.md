# Practice Problems: Variables, Data Types, Operations

## Problem 1
* LO: (Understand) Students will interpret errors that arise when using variables incorrectly.

This code block from a program is supposed to calculate the difference between two numbers.

```java
int difference = a - b;
int a = 2;
int b = 4;
```

Instead, trying to compile the program generates this error message:

```
Exception in thread "main" java.lang.Error: Unresolved compilation problems: 
	a cannot be resolved to a variable
	b cannot be resolved to a variable

	at operations.Difference.main(Difference.java:6)
```

Which of these options best explains the error message?

* A. `a` and `b` are identifiers, not variables.
* B. `a` and `b` are variables, which cannot be used to define another variable, `difference`.
* C. `difference` is assigned to a value based on `a` and `b`, but those variables have not yet been declared.
* D. `difference`, `a`, and `b` must all be declared at the same time.

## Problem 2
* LO: (Apply) Students will determine that value of a variable after multiple operations.

Consider this code block from a program:

```java
int x = 3;
x = x + 6;
x = 5;
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
String p = "blueberry";
String q = "pancakes";
String r = p + q;
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

```java
int number = 10 + 12 * 4 + 2 - 1;
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

```java
int winningTickets = 17;
int totalTickets = 40000;
int probability = winningTickets / totalTickets;
```

**Code Block 2**

```java
float winningTickets = 17;
float totalTickets = 40000;
float probability = winningTickets / totalTickets;
```

**Code Block 3**

```java
int winningTickets = 17;
int totalTickets = 40000;
float probability = winningTickets / totalTickets;
```

**Code Block 4**

```java
float winningTickets = 17.0f;
float totalTickets = 40000.0f;
float probability = winningTickets / totalTickets;
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

```java
float t = 0.5 * 50 * 12;
```
