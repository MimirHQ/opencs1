# Practice Problems: Input and Output

## Problem 1
* LO: (Understand) Students will interpret error messages related to writing output.

The program is supposed to print `"Hello, World."`:

```python
print("Hello, World."
```

Instead, trying to compile the program generates this error message: 

```
Traceback (most recent call last):
  File "python", line 1
    print("Hello, World."
                        ^
SyntaxError: unexpected EOF while parsing
```

Which of these options best explains the error message?

* `print` is missing a character to fully parse the line.
* The end the source code was reached before code block with the method `print` was completed.
* `print` needs to be declared with a variable name.
* `print` cannot be used without importing the `print` function.


## Problem 2
* LO: (Understand) Students will understand how input strings are read into boolean variables.

Consider this program that reads input into a boolean variable.

```python
isSunny = bool(input())

print('isSunny = ' + str(isSunny))
```

Select all of the following input springs that would lead to `isSunny` being `True`.

* A. `23`
* B. `0`
* C. `-5`
* D. `2.3`
* E. `hello`
* F. `y`
* G. `true`
* H. `true`

## Problem 3
* LO: (Apply) Students will display a formatted string to standard output.

This program reads in values into variables. Write a program to output the information in this format.

`I found 9 ghosts in the haunted house.`

```python
number = input()
scary_things = input()

# TODO: Write your program here.
 
```

## Problem 4
* LO: (Understand) Students will choose the best data type to use for a problem.
* LO: (Apply) Students will set precision when displaying a numerical value.

Read in two numbers and display the ratio between the second value and the first value. Match this format:

`The second number is 5.0 times the value of the first number.`

`The second number is 2.5 times the value of the first number.`

Only include one value after the decimal point.

```python
# TODO: Write your program here.
 
```

## Problem 5
* LO: (Apply) Students will select an individual character from a string. 

Read in a string and then print out information about the string in this format:

```
String: hoopla
Length: 6
First Letter: h
Last letter: a
```

```python
# TODO: Write your program here.
 
```

## Problem 6
* LO: (Apply) Students will read in values to perform a computation.

Read in three values:
* The name of an item, a single line
* The price of an item, a positive dollar value
* The shipping fee rate, a value between 0.0 (free shipping) and 1.0 (equal to the cost)

Then print the costs of the item in the following format:

```
Costs for Chocolate
Item Price: $20.00
Shipping Fee: $2.50
Total Cost: $$22.50
```

Use two places after the decimal point when displaying the costs.

```python
# TODO: Write your program here.
 
```