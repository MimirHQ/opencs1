# [Java] Practice Problems - Arrays

## Problem 1
* LO: (Understand) Students will determine state of an array after operations are executed.

What will the value of arr[2], the third element in the array, after this code executes?

```java
public class ArrayPractice {

	public static void main(String[] args) {
		int n = 4;
		int[] arr = new int[n];
		
		arr[0] = 3;
		arr[2] = arr[0];
		arr[0]++;
	}

}

```

* A. 0
* B. 1
* C. 3
* D. 4

## Problem 2
* LO: (Understand) Students will identify the error with a block of code from its stack trace.

Consider the stack trace below from a program that does not compile. Which is the best explanation for what is causing this error?

```java
Exception in thread "main" java.lang.Error: Unresolved compilation problem: 
	The field ArrayList<Integer>.size is not visible

	at arrays.ListError.main(ListError.java:31)
```

* A. The ArrayList<Integer> is not an ArrayList of integers.
* B. The field ArrayList<Integer>.size should be called as a method, not a field.
* C. The ArrayList<Integer> field does not have a size because it has not been initialized.
* D. The field that is trying to access ArrayList<Integer> is private.

## Problem 3
* LO: (Apply) Students will use data represented as arrays.

This program tabulates scores for a figure skating competition that has four parts:
1. The short dance, which is worth 25% of the final score
2. The free skate, which is worth 50% of the final score
3. The partner dance, which is worth 10% of the final score
4. And the original performance, which is worth 15% of the final score

The array `weights` stores values that represent how much of the final score each of the four parts is worth.

Complete this program to read in each of the four scores at `float` values, multiply each score by its corresponding weight, and then sum up the weighted scores to get the participant's final score as a `float` value.

```java
public class FigureSkating {

	public static void main(String[] args) {
		float[] weights = {0.25f, 0.50f, 0.10f, 0.15f};
		float total = 0.0f;
		
		// TODO: Write your code here
		
		System.out.println("Final Score: " + total);
	}

}
```

## Problem 4
* LO: (Apply) Students will use vectors to store data for a computation.

The **mode** of a dataset is the item that appears most frequently.

Write a program to read in numbers between 1 and 100 and then report the mode. If more than one number appears most frequently, choose the highest number. Output a line with the result in this format:

`The most frequent value was 42, appearing 9 times.`

```java
public class DataAnalysis {

	public static void main(String[] args) {
		// TODO: Write your code here
		
		System.out.println("The most frequent value was " + 50 + ", appearing " + 0 + " times.");
	}

}
```

## Problem 5
* LO: (Apply) Students will use arrays to verify some property of a dataset.

Some students have organized an election to determine the new leaders of their school club. Each member of the club has a unique ID that they can use when they vote. However, the election managers suspect that some members have voted twice. 

Write a program to read in member IDs and check if there are any repeated values. If an ID has already been used, output a line in this format: 

`REPEAT: The ID BE45N6 has already been counted!`

Stop reading input after reading the value `"STOP"`. Then output a line showing how many unique members voted in this format:

`After excluding repeats, 45 unique members voted.`

```java
public class UniqueMembers {

	public static void main(String[] args) {
		// TODO: Write your code here
		
		System.out.println("REPEAT: The ID " + "AA00A0" + " has already been counted!");
		
		System.out.println("After excluding repeats, " + 0 + " unique members voted.");
	}

}
```

## Problem 6
* LO: (Apply) Students will use arrays or vectors to transform data.

Write a program that reads a 4x4 text drawing and rotates it 90 degrees to the right.

For example, read in the drawing:

```
I I I I
. I I .
. I I .
I I I I
```

And output the drawing:

```
I . . I
I I I I
I I I I
I . . I
```

The drawing will consist of capital letters A-Z and will always be 4 letters wide and 4 letters tall with a space between each character. 

```java
public class TransformingData {
	
	public static void main(String[] args) {
		// TODO: Write your program here
	}
	
}
```