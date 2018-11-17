# Practice Problems: Input and Output

## Problem 1
* LO: (Understand) Students will interpret error messages related to writing output.

The program is supposed to print `"Hello, World."`:

```java
public class WritingOutputs {

	public static void main(String[] args) {
		println("Hello World.");
	}

}
```

Instead, trying to compile the program generates this error message:

```
Exception in thread "main" java.lang.Error: Unresolved compilation problem: 
	The method println(String) is undefined for the type WritingOutputs

	at WritingOutputs.main(WritingOutputs.java:4)

```
Which of these options best explains the error message?

* `println` is missing a call to the `System` to be able to display the message out to the user.
* `println` is a method and the error message reminds the programmer to declare it.
* `println` is a method that needs to be declared within `WritingOutputs`.
* `println` cannot be used without the line `java util.System;`.

## Problem 2
* LO: (Understand) Students will understand how input strings are read into boolean variables.

Consider this program that reads input into a boolean variable.

```java
import java.util.Scanner;

public class Booleans {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		boolean isSunny = Boolean.valueOf(sc.nextLine());
		
		System.out.println("isSunny = " + isSunny);

	}

}
```
Select all of the following input strings that would lead to `isSunny` being `true`.
* A. `23`
* B. `0`
* C. `-5`
* D. `2.3`
* E. `hello`
* F. `y`
* G `true`
* H. `false`

## Problem 3
* LO: (Apply) Students will display a formatted string to standard output.

This program reads in values into variables. Write a program to output the information in this format.

`I found 9 ghosts in the haunted house.`

```java
import java.util.Scanner;

public class HauntedHouse {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int number = sc.nextInt();
		String scaryThings = sc.nextLine();
		
		// TODO: Write your program here.
	}

}
```

## Problem 4
* LO: (Understand) Students will choose the best data type to use for a problem.
* LO: (Apply) Students will set precision when displaying a numerical value.

Read in two numbers and display the ratio between the second value and the first value. Match this format:

`The second number is 5.0 times the value of the first number.`

`The second number is 2.5 times the value of the first number.`

Only include one value after the decimal point.

```java
public class Ratios {

	public static void main(String[] args) {
		// TODO: Write your program here.
	}

}
```

## Problem 5
* LO: (Apply) Students will select an individual character from a string.

Read in a string and then print out information about the string in this format:

```
String: hoopla
Length: 6
First Letter: h
Last Letter: a
```

```java
public class StringInfo {

	public static void main(String[] args) {
		// TODO: Write your program here.
	}

}
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
Total Cost: $22.50
```

Use two places after the decimal point when displaying the costs.

```java
public class ShoppingOrders {

	public static void main(String[] args) {
		// TODO: Write your program here.
	}

}
```