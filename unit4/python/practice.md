# Practice Problems: Definite and Indefinite Loops

## Problem 1

* LO: (Remember) Students will recall how to read from standard input.
* LO: (Apply) Students will write loops that iterate as long as a condition is true.

Write a program that reads words from standard input and displays them to standard output. When the word `”end”` is read, print it out and then stop reading input.

```python
def reading_inputs():
    """
    Reads and displays words from standard input until hitting a stop word.
    """


    pass


reading_inputs()
```

## Problem 2

* (Apply) Students will write loops that iterate over every value in a range.

Some marathon organizers are advertising the distances of their races in kilometers. Help them explain the races to participants who are unfamilar with the metric system. Print a line for each length of race that explains approximately how long it is in miles.

The races are organized in increments of 5km. There is a 5km, a 10km, and so on, all the way up to a 40km race. There are approximately 0.621 miles in a kilometer. Miles should be rounded to the nearest whole number. Follow this format:
```
A 5km race is approximately 3 miles long.
```

```python
def conversions():
    """
    Displays how long each race is in kilometers and miles
    """

    pass


conversions()
```

## Problem 3

* LO: (Analyze) Students will choose the type of loop best suited to the task.
* LO: (Remember) Students will locate the start, stop, and step parameters of a loop.

Write a program that counts by 19s from 615 to 900 (inclusive). Print each number.

```python
def loop_practice():
    """
    Counts by 19s from 615 to 900.
    """

    pass


loop_practice()
```

## Problem 4

* LO: (Analyze) Students will fix a loop that runs forever.

This program runs the countdown sequence for a rocket launch. However, it seems to loop infinitely. Fix the program so it counts down and terminates properly.

```python
def countdown():
    """
    Counts down to blastoff, starting from a given number.
    """
    # user to do: integer input
    countdown = int(input())

    while (countdown != 0):
        print((str(countdown)) + '...')
        countdown -= 1
    print('Blast off!')


countdown()
```

## Problem 5

* LO: (Apply) Students will compute a value from multi-dimensional data.
* LO: (Apply) Students will find the optimal value in a collection.


A group of farmers are using drones to gather data about how much corn they have grown in their plots. The plots are organized in rows, where each row has the same number of plots. The rows are numbered starting from row 0, the closest row to the farm house. The plots are also numbered starting from plot 0.

The farmers want to know which row had the highest crop yield (how much corn grew). Write a program to find the row with the highest crop yield. If rows are tied for the highest yield, choose the closest row to the farm house.

These methods will help you access the crop data:

```python
load_crop_data() -> None
get_row_count() -> int
get_row_count() -> int
get_crop_count(row: int, plot: int) -> int
```

- Call load_crop_data() only once, at the start of your program.
- Call get_row_count() to get an integer representing the number of rows in the field.
- Call get_row_length() to get an integer representing the number of plots in each row.
- Call get_crop_count(r, p) to get an integer representing the number of bushels of corn in plot p of row r.


**Note:** Include crops.py in order to access the helper functions.

**Note:** Refer to corn.data for a sample data file. The first value is the number of rows, the second value is the number of plots, and then the remaining values represent the plot yields in row, then plot order.

```python
from crops import (
    load_crop_data,
    get_row_count,
    get_crop_count,
    get_crop_count
)


def main():
    load_crop_data()
    """
    Scans corn field to find the closest row with the largest crop yield.
    """

    pass
```

## Problem 6

* LO: (Apply) Students will write loops that iterate until a condition is met.
* LO: (Analyze) Students will identify edge cases from a problem statement.

In this game of volleyball, two teams compete to be the first team to score 21 points. However, to win the game, a team must also lead by two points.

For example, if team A is tied with team B (20-20) and then scores, they will only be ahead by one point (21-20). Then, if team B scores a point, the game will be tied again (21-21). Then, if either team can score two consecutive points, they will win.

Write a program that reads data about volleyball matches from standard input and then determines the outcome of the game. If the input word is "A" it means that team A scored a point. If the input word is "B" it means that team B scored a point. If the input word is "end" it means that the game ended. Calculate the scores and announce the team that won or that the game was a draw. Display the game result in this format:

```
Team A won! (21-14)
```

```
Game ended as a draw. (21-21)
```

```python
def volleyball():
    """
    Determines the outcome of a volleyball game.
    """

    pass


volleyball()
```