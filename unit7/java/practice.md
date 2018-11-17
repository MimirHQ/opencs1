# Practice Problems: Recursion

## Problem 1
* LO: (Understand) Students will identify the terminating condition of a recursive method.

The **factorial** of a non-negative integer is the product of that integer and all of the non-negative integers less than it. The **factorial** of zero is equal to 1. Factorial is not defined by negative numbers.

Consider this method that defines factorial recursively. Which of the following conditions could fill in this blank and allow the recursive method to terminate correctly?

```java
public static int factorial(int n) {
	boolean terminate = ______;
		
	if (terminate) {
		return 1;
	}
		
	return n * factorial(n - 1);
}
```

- [ ] n == 0
- [ ] n == 1
- [ ] n < 0
- [ ] n < 1

## Problem 2
* LO: (Understand) Students will determine whether or not a recursive call will terminate.

Consider the recursive method below:

```java
public static int funnyFunction(int a, int b) {		
	if (a == b) {
		return 0;
	} else if (a > b) {
		return 1 + funnyFunction(a - 1, b);
	} else {
		return 1 + funnyFunction(a, b - 1);
	}
}
```
Will this method terminate always, sometimes or never?

* A. The recursive method will never terminate.
* B. The recursive method will sometimes terminate, only if a and b are equal.
* C. The recursive method will sometimes terminate, but only for non-negative values of a and b.
* D. The recursive methods will always terminate. 

## Problem 3
* LO: (Analyze) Students will fix bugs in a recursive method.

A **palindrome** is a word that is spelled the same both forwards and backwards. Words with only one letter are considered palindromes.

The recursive method below is supposed to accept a string and then return `true` if the string is a palindrome or `false` if it is not a palindrome. Complete the implementation of the recursive method and fix any bugs that arise.

This method uses the string method `str.substring()`. You can learn about that method at [this link](https://docs.oracle.com/javase/7/docs/api/java/lang/String.html#substring(int)). 

```java
import java.util.Scanner;

public class Palindromes {

	private static Boolean isPalindrome(String word) {
		int n = word.length();
		return isPalindrome(word.substring(1, (n - 2)));
	}
	
	public static void main(String[] args) {
		boolean reading = true;
		String word = "";
		
		Scanner sc = new Scanner(System.in);
		
		while (reading) {
			word = sc.nextLine();
			
			System.out.println("(" + word + ") -> " + isPalindrome(word));
		
			if (word.length() == 1) {
				reading = false;
			}
			
		}
		
	}

}
```

## Problem 4
* LO: (Apply) Students will implement a recursive function with one parameter

For this exercise, define the strength of a sports team as equal to the sum of the strengths of all of the teams they won against.

Write a method called `getStrength(team)` that accepts an integer representing a team and returns an integer representing that team's strength.

The global variable `matches` a vector of vectors of integers. Each item in `matches` is a vector that holds two integers. The first integer represents the team that won the match and the second integer represents the team that lost the match.

For this exercise, you can assume that if Team A won against team B, then team B never won against team A. If these were not true, this would be a much harder method to write.

You do not need to modify the main method. It will read in the input data and populate `matches`. 

```java
import java.util.ArrayList;
import java.util.Scanner;

public class TeamStrength {
	static ArrayList<ArrayList<Integer>> matches = new ArrayList<ArrayList<Integer>>();


	// TODO: Write your method here
	
	
	// You do not need to modify the main method
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int teams = sc.nextInt();
		int totalMatches = sc.nextInt();
		
		for (int m = 0; m < totalMatches; m++) {
			int winner = sc.nextInt();
			int loser = sc.nextInt();
			
			matches.get(0).add(winner, loser);
		}
		for (int t = 1; t <= teams; t++) {
			int strength = getStrength(t);
			System.out.println("Team " + t + ": " + strength);
		}
		
	}

}
```

## Problem 5
* LO: (Apply) Students will implement a recursive function with multiple parameters.

Write a program to parse some recursive recipes. For example, one recursive recipe for making Key Lime Pie dish requires the following items:

* Crust
* Filling
* Lime Slices

But Crust and Filling are also recursive recipes with their own required items! Your program will print all of the required ingredients out in a nicely-indented list with nested sub-lists.

Write a void method called `displayIngredientsFor(dish, indent)` that accepts a string representing a dish to display ingredients for and an integer that keeps track of the current level of indentation.

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

```java
import java.util.Scanner;
import java.util.Vector;

public class RecipeOutputs {
	static Vector<Vector<String>> ingredients = new Vector<Vector<String>>();
	
	
	// TODO: Write your method here
	
	
	// You do not need to modify the main method
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int items = Integer.valueOf(sc.nextLine());
		String recipe = sc.nextLine();
		
		for (int i = 0; i < items; i++) {
			int internalList = 1;
			ingredients.add(new Vector<String>());
			
			for (int j = 0; j < internalList; j++) {
				String dish = sc.nextLine();
				String ingredient = sc.nextLine();
				ingredients.get(i).add(dish);
				ingredients.get(i).add(ingredient);
			}
			System.out.println(ingredients);
		}
		
		
		System.out.println("To make " + recipe + " you need:");
		displayIngredientsFor(recipe, 0);
	}

}
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

```java
import java.util.Scanner;
import java.util.Vector;

public class Prerequisites {
	static Vector<Vector<Integer>> prereqs = new Vector<Vector<Integer>>();

	
	// TODO: Write your method here


	// You do not need to modify the main method
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int totalCourses = sc.nextInt();
		
		for (int c = 0; c < totalCourses; c++) {
			prereqs.add(new Vector<Integer>());
			int courses = 1;
			int courseA = sc.nextInt();
			int courseB = sc.nextInt();
			
			for (int i = 0; i < courses; i++) {
				prereqs.get(c).add(courseA);
				prereqs.get(c).add(courseB);
			}
			System.out.println(prereqs);
		}
		
		
		int code = sc.nextInt();
		
		if (hasCircularPrereq(code)) {
			System.out.println(code + " has a circular prerequisite.");
		} else {
			System.out.println(code + " does not have a circular prerequisite.");
		}
		
	}

}
```

