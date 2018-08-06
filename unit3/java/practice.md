# Practice Problems: Conditional Logic

## Problem 1

- LO: (Remember) Students will recall how to determine the parity of a number.

Write a function to check whether or not an integer number is an even number.

```java
public class NumberChecker {

    /**
     * Checks whether or not a number is an even number.
     * @param number: the number
     * @return: true if the number is even, otherwise false
     */
    public static boolean isEvenNumber(int number) {

    }

}
```

## Problem 2

- LO: (Apply) Students will complete a truth table for a compound boolean expression.

A truth table is a format for understanding how different boolean values will affect the result of a boolean expression.

```java
boolean result = !((a || b) && a);
```

This boolean expression consists of two values (`a`, `b`) and three operations (`!`, `||`, `&&`). Since there are two values, there are 2 x 2 = 4 possible outcomes for the result of expression. Each row represents a different combination of `a` and `b`. Each column breaks up the entire expression into smaller parts.

Fill in the truth table with the value of each part of this boolean expression (T for `true` and F for `false`):

| a | b | a \|\| b | (a \|\| b) && a | !((a \|\| b) && a) |
|---|---|----------|-----------------|--------------------|
| T | T | ?        | ?               | ?                  |
| T | F | ?        | ?               | ?                  |
| F | T | ?        | ?               | ?                  |
| F | F | ?        | ?               | ?                  |

What will be the values in the last column, from top to bottom?

- A. T, T, T, F
- B. F, F, F, T
- C. T, T, F, F
- D. F, F, T, T

## Problem 3

- LO: (Apply) Students will modify code to use logical operators instead of nested conditionals.

Rewrite this block of code using **logical operators** instead of **nested conditionals**.

```java
public class RangeChecker {

    /**
     * Checks whether or not a number is between two other numbers (exclusive)
     * @note: you may assume that low will always be lower than high
     * @param number: the number
     * @param low: the low end of the range
     * @param high: the high end of the range
     * @return: true if the number is in range (exclusive), otherwise false
     */
    public static boolean isBetweenExclusive(int number, int low, int high) {
        if (number > low) {
            if (number < high) {
                System.out.println("The number is in between.");
                return true;
            } else {
                System.out.println("The number is not in between.");
                return false;
            }
        } else {
            System.out.println("The number is not in between.");
            return false;   
        }
    }

}
```

## Problem 4

- LO: (Understand) Students will determine which branch of a conditional statement will be executed.

Trace the values of the variables `a` and `b` in the following block of code:

```java
int a = 0;
int b = -1;

if (a > 0) {
    a = a - 1;
} else if (b > 0) {
    b = b + 1;
}
// Checkpoint 1

if (a == b) {
    a = a + 1;
} else if (b >= 0) {
    b = b - 1;
} else {
    b = b + 1;
}
// Checkpoint 2
```

What are the values of `a` and `b` when the program reaches Checkpoint 1? At Checkpoint 2?

- A. Checkpoint 1: a = -1, b = 0, Checkpoint 2: a = 0, b = 0
- B. Checkpoint 1: a = 0, b = -1, Checkpoint 2: a = 0, b = 0
- C. Checkpoint 1: a = -1, b = -1, Checkpoint 2: a = 0, b = -1
- D. Checkpoint 1: a = 0, b = 0, Checkpoint 2: a = 1, b = 0

## Problem 5

- LO: (Apply) Students will write conditional code that implements written requirements.
- LO: (Apply) Students will transform conditional code to incorporate a new written requirement.

These conditional functions are related to checking permissions for amusement park rides. Write the body for each function according to the problem description and the function docstring.

Write the body of the `checkRider()` function. People must be at least 12 years old and at least 41 inches tall to ride.

```java
public class AmusementParkRide {

    /**
     * Checks if the person is eligible to ride this roller coaster.
     * @param age: the rider's age in years
     * @param height: the rider's height in inches
     * @return: true if the person is eligible for the ride, otherwise false
     */
    public static boolean checkRider(int age, int height) {

    }

}
```

Write the body of the `checkRider2()` function. If the person does not meet the requirements from the previous ride, then they are not allowed to ride unless they are with an adult.

```java
public class AmusementParkRide {

    /**
     * Checks if the person is eligible to ride this roller coaster.
     * @param age: the rider's age in years
     * @param height: the rider's height in inches
     * @param withAdult: whether or not the person is with an adult
     * @return: true if the person is eligible for the ride, otherwise false
     */
    public static boolean checkRider2(int age, int height, boolean withAdult) {

    }

}
```

## Problem 6

- LO: (Apply) Students will write conditional code that implements written requirements.
- LO: (Apply) Students will validate parameters to a function.

Write the body of a function that operates a vending machine according to the problem description and its docstring.

- This vending machine has nine buttons on its keypad, from 1 to 9.
- The top row of the keypad is 7, 8, 9.
- Items in the top row of the keypad cost $1.50, all other items cost $1.25.
- When the customer arrives, item 6 is out of stock, all other items have five in stock.
- The customer must press a valid keypad button, pay enough money, and have enough items left in order to get something from the vending machine.
- Print the message `"Selected a valid item."` or `"Selected an invalid item."` depending on whether the customer selected a valid item number.
- If the customer selected a valid item number, print the message `"Payment was enough."` or `"Payment was not enough."` depending on whether the customer paid enough money for the item.
- Print the message `"Here is your item."` or `"You get nothing."` depending on whether the customer ultimately gets the item they wanted.

```java
public class VendingMachine {

    /**
     * Operates the vending machine and displays messages based on the outcomes.
     * @param keypad: the number entered by the customer on the keypad
     * @param payment: the amount of money in dollars the customer paid
     */
    public static void vend(int keypad, double payment) {

    }

}
```
