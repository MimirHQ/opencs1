# Practice Problems: Recursion

## Problem 1
* LO: (Understand) Students will identify the terminating condition of a recursive method.

The **factorial** of a non-negative integer is the product of that integer and all of the non-negative integers less than it. The **factorial** of zero is equal to 1. Factorial is not defined for negative numbers.

Consider this method that defines factorial recursively. Which of the following conditions could fill in this blank and allow the recursive method to terminate correctly?

```python
def factorial(int n):
    terminate = ______
    if (terminate):
        return 1
    return n * factorial(n-1)
```

Select all that apply:

- [ ] n == 0
- [ ] n == 1
- [ ] n < 0
- [ ] n < 1

## Problem 2
* LO: (Understand) Students will determine whether or not a recursive call will terminate. 

Consider the recursive method below:

```python
def funny_function(a, b):
	if (a == b):
	    return 0;
	elif (a > b):
	    return 1 + funny_function(a - 1, b)
	else:
	    return 1 + funny_function(a, b - 1)
```

Will this method terminate always, sometimes, or never?

* A. The recursive method will never terminate.
* B. The recursive method will sometimes terminate, but only if a and b are equal.
* C. The recursive method will something terminate, but only for non-negative values of a and b.
* D. The recursive method will always terminate.

## Problem 3
* LO: (Analyze) Students will fix bugs in a recursive method.

A **palindrome** is a word that is spelled the same both forwards and backwards. Words with only one letter are considered palindromes.

The recursive method below is supposed to accept a string and then return `true` if the string is a palindrome or `false` if it is not a palindrome. Complete the implementation of the recursive method and fix any bugs that arise.

This method uses the slicing. You can learn about that method at [this link](https://docs.python.org/3.6/reference/expressions.html#slicings). 

```python
def is_palindrome(word):
  n = len(word)
  return is_palindrome(word[1:(n-2)])


def main():
def is_palindrome(word):
    n = len(word)
    return is_palindrome(word[1:(n-2)])


def main():
    reading = True

    while (reading):
        word = input()

        print('(' + word + ') -> ' + is_palindrome(word))

        if (word.length() == 1):
            reading = False


main()
```
## Problem 4
* LO: (Apply) Students will implement a recursive function with one parameter

For this exercise, define the strength of a sports team as equal to the sum of the strengths of all of the teams they won against.

Write a method called `get_strength(team)` that accepts an integer representing a team and returns an integer representing that team's strength.

The global variable `matches` a vector of vectors of integers. Each item in `matches` is a vector that holds two integers. The first integer represents the team that won the match and the second integer represents the team that lost the match.

For this exercise, you can assume that if Team A won against team B, then team B never won against team A. If these were not true, this would be a much harder method to write.

You do not need to modify the main method. It will read in the input data and populate `matches`.

```python
matches = []


# TODO: Write your method here


# You do not need to modify the main method
def main():
    teams = int(input())
    total_matches = int(input())

    for m in range(total_matches):
        a_match = []
        match = 1
        winner = int(input())
        loser = int(input())

        for i in range(match):
            a_match.append(winner)
            a_match.append(loser)

        matches.append(a_match)

    for t in range(1,teams+1):
        strength = get_strength(t)
        print('Team ' + str(t) + ': ' + str(strength))


main()
```

## Problem 5
* LO: (Apply) Students will implement a recursive function with multiple parameters.

Write a program to parse some recursive recipes. For example, one recursive recipe for making Key Lime Pie dish requires the following items:

* Crust
* Filling
* Lime Slices

But Crust and Filling are also recursive recipes with their own required items! Your program will print all of the required ingredients out in a nicely-indented list with nested sub-lists.

Write a void method called `display_ingredients_for(dish, indent)` that accepts a string representing a dish to display ingredients for and an integer that keeps track of the current level of indentation.

For example, the output for the Key Lime Pie recipe should look like this:

```
To make Key Lime Pie you need:
- Crust
  - Graham Crackers
  - Butter
  - Cinnamon
- Filling
  - Key Lime Juice
    - Lime Zest
    - Sugar
  - Milk
  - Sour Cream
- Lime Slices
```

The global variable `ingredients` is a vector of vectors of strings. Each item in `ingredients` is a vector that holds two strings. The first string represents a dish and the second string represents an ingredient required to make that dish.

For this exercise, you can assume that there are no cyclic relationships. That is, if a dish requires some ingredient, then that dish that will never be an ingredient for for any of the ingredients it requires. If this were not true, this would be a much harder method to write.

You do not need to modify the main method, it will read in the input data and populate `ingredients`. 

```python
ingredients = []


# TODO: Write your method here


def main():
    items = int(input())
    recipe = input()

    for i in range(items):
        internal_list = 1
        a_list = []

        for j in range(internal_list):
            dish = input()
            ingredient = input()
            a_list.append(dish)
            a_list.append(ingredient)

        ingredients.append(a_list)
        print(ingredients)
    print('To make ' + recipe + ' you need:')
    display_ingredients_for(recipe, 0)


main()
```

## Problem 6
- LO: (Apply) Students will implement a recursive function to identify circular relationships.

A **prerequisite** is a course that must be completed before taking another course.

The worst kind of prerequisite is a circular prerequisite: meaning that the course requires itself.

Implement a method called `hasCircularPrereqs(course)` that accepts an integer course code and returns a boolean indicated whether or not the course has a circular prerequisit.

The global variable `prereqs` is a vector vectors of integers. Each item in `prereqs` is a vector that holds two integers. The first integer represents a course code and the second integer represents the course code for one of its prerequisites. 

You do not need to modify the main method, it will read in the input data and populate `prereqs`.

Based on the XKCD comic:

![](https://www.explainxkcd.com/wiki/images/2/28/dependencies.png)

```python
prereqs = []


# TODO: Write your method here


# You do not need to modify the main method
def main():
    total_courses = int(input())

    for c in range(total_courses):
        a_prereq = []
        course = 1
        courseA = int(input())
        courseB = int(input())

        for i in range(course):
            a_prereq.append(courseA)
            a_prereq.append(courseB)
        prereqs.append(a_prereq)

    code = int(input())

    if has_circular_prereq(code):
        print(str(code) + ' has a circular prerequisite.')
    else:
        print(str(code) + ' does not have a circular prerequisite.')


main()
```