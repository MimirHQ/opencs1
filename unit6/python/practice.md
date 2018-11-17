# [Python] Practice Problems - Lists

## Problem 1
* LO: (Understand) Students will determine state of a list after operations are executed. 

What will the value of list[2], the third element in the list, after this code executes?

```python
list = [None] * 4

list[0] = 3
list[2] = list[0]
list[0] += 1
```

* A. 0
* B. 1
* C. 3
* D. 4

## Problem 2
* LO: (Understand) Students will identify the error with a block of code from its stack trace.

Consider the stack trace below from a program that does not compile. Which is the best explanation for what is causing this error?

```python
Traceback (most recent call last):
  File "python", line 3, in <module>
AttributeError: 'list' object has no attribute 'len'
```

* A. list is not a list.
* B. list.len() should be called as a method, not a field.
* C. list does not have a length because it has not been initialized
* D. The loop should stop when i < list.size, not when i <= list.size

## Problem 3
* LO: (Apply) Students will use data represented as arrays.

This program tabulates scores for a figure skating competition that has four parts:
1. The short dance, which is worth 25% of the final score
2. The free skate, which is worth 50% of the final score
3. The partner dance, which is worth 10% of the final score
4. And the original performance, which is worth 15% of the final score.

The list `weights` stores values that represent how much of the final score each of the four parts is worth.

Complete this program to read in each of the four scores at `float` values, multiply each score by its corresponding weight, and then sum up the weighted scores to get the participant's final score as a `float` value.

```python
def figure_skating_scores():
    weights = [0.25, 0.50, 0.10, 0.15]
    total = 0.0

	# Write your code here
	
    print('Final Score: ' + str(total))


figure_skating_scores()
```

## Problem 4
* LO: (Apply) Students will use lists to store data for a computation.

The **mode** of a dataset is the item that appears most frequently.

Write a program to read in numbers between 1 and 100 and then report the mode. If more than one number appears most frequently, choose the highest number. Output a line with the result in this format:

`The most frequent value was 42, appearing 9 times.`

```python
def data_analysis():
	
	# TODO: Write your code here
	
    print('The most frequent value was ' + 50 +
          ', apppearing ' + 0 + ' times.')


data_analysis()
```

## Problem 5
* LO: (Apply) Students will use lists to verify some property of a dataset.

Some students have organized an election to determine the new leaders of their school club. Each member of the club has a unique ID that they can use when they vote. However, the election managers suspect that some members have voted twice.

Write a program to read in member IDs and check if there are any repeated values. If an ID has already been used, output a line in this format: 

`REPEAT: The ID BE45N6 has already been counted!`

Stop reading input after reading the value `"STOP"`. Then output a line showing how many unique members voted in this format:

`After excluding repeats, 45 unique members voted.`

```python
def unique_members():
    
    # TODO: Write your code here
    
    print('REPEAT: The ID ' + id + ' has already been counted!')

    print('After excluding repeats, ' + str(len(unique)) + ' unique members voted.')


unique_members()
```

## Problem 6
* LO: (Apply) Students will use lists to transform data.

Write a program that reads a 4x4 test drawing and rotates it 90 degrees to the right.

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

```python
def transforming_data():
	# TODO: Write your program here


transforming_data()
```