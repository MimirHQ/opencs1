# Practice Problems: Functions

## Problem 1

- LO: (Remember) Students will recognize the different parts of function definition.

What are the names of the parts of this function definition? Fill in the labels `{A}`, `{B}`, and `{C}`.

```java
/*
 * Function docstring
 */
public static {A} functionName({B}) {
    {C}
}
```

Choose the correct labelings:

- A. A = parameters, B = return type, C = function body
- B. A = return type, B = parameters, C = function body
- C. A = function body, B = parameters, C = return type
- D. A = parameters, B = function body, C = return type

## Problem 2

- LO: (Understand) Students will interpret the order of function execution.

What will be the value of the variable `num` at the end of this program?

```java
import java.util.Scanner;

public class Fun {

    public static int functionA(int a) {
        if (a < 3) {
            functionB(a);
        } else {
           return a - 1;
        }
    }

    public static int functionB(int b) {
        return b - 3;
    }   

    public static int main() {
        int num = 4;
        num = functionB(functionA(num));
        return 0;
    }

}
```

Choose the correct value of `num`:

- A. num = -2
- B. num = 1
- C. num = 0
- D. num = 3
- E. num = 4

# Problem 3

- LO: (Understand) Students will represent the values of parameters during function execution using stack frames.

What will the stack diagram for this program look like just before `return a` is run? Fill in the labels `{A}`, `{B}`, `{C}`, `{D}`, and `{E}`.

```java
import java.util.Scanner;

public class AddNumbers {

    public static int addNumbers(int a, int b) {
        a = a + b;
        return a;
    }

    public static int showCalculation(int a, int b, int c) {
        c = addNumbers(a, b);
        System.out.println(a + " + " + b + " = " + c);
        return c;
    }

    public static int main() {
        int a = 3;
        int b = 0;
        b = showCalculation(a, a, b);
        return 0;
    }

}
```

```
                +------------+
           main | a = {A}    |
                | b = {B}    |
                |------------|
showCalculation | a = {C}    |
                | b = 3      |
                | c = {D}    |
                |------------|
            {F} | a = {E}    |
                | b = 3      |
                +------------+
```

Select all labelings/statements that are correct:

1. A = 3
2. A = 6
3. B = 0
4. B = 6
5. B = 9
6. C = 3
7. C = 6
8. D = 0
9. D = 3
10. D = 6
11. D should not have a row on the stack frame at this point.
12. E = 3
13. E = 6
14. F = main
15. F = addNumbers


## Problem 4

- LO (Apply): Students will write a function that satisfies written requirements.
- LO (Apply): Students will modularize existing code into a function.

The Boolean Foundation hosted a raffle to raise money for charity and used a computer program to notify the participants about the results. Unfortunately, the program they used was not very robust and all 250 participants received an email telling them that they won... and that their name is Shauna.

Improve this program by writing a function called `sendEmail` to print a personalized email to stdout. The function should take three parameters:

- The name of the recipient
- The prize for the raffle
- Whether or not the recipient won

Use the email template from the existing program.

```java
import java.util.Scanner;

public class Mail {

    public static int main() {
        System.out.println("Dear Shauna,");
        System.out.println("You are the winner of our raffle for charity.");
        System.out.println("The prize was: a stuffed giraffe toy");
        System.out.println("Thank you for giving to charity!");
        System.out.println("Sincerely,");
        System.out.println("The Boolean Foundation");
        return 0;
    }

}
```

## Problem 5

- LO (Apply): Students will learn to use a function by reading its documentation.

[Read the documentation for generating random numbers.](http://www.cplusplus.com/reference/cstdlib/rand/) Write a program that prints 20 random numbers between 0 and 5 inclusive. Use 42 as the seed value.

```java
import java.util.Scanner;

public class RandomNumbers {

    public static void main() {

        // TODO: Write your program 

    }

}
```

## Problem 6

- LO (Apply): Students will write a function that satisfies written requirements.
- LO (Apply): Students will convert a stateful function to a pure function.

The Spaghetti Code Cafe uses a computer program to keep track of customer loyalty. Unfortunately, there have been many problems. Some customers complain that they have too few loyalty points. Others quietly take advantage when the computer tells them they have extra points.

Revise the program to keep track of loyalty points for three customers: A, B, and C.

When a customer makes a purchase, two lines will be read:

- A string: `"A"`, `"B"`, or `"C"`, indicating which customer made the purchase
- A float value indicating how much the customer paid, in dollars

The line `"nobody"` indicates that there are no more purchases left and the program should end.

The loyalty program requirements are:

- When a customer makes a purchase totalling $10.00 or more, they get one loyalty point
- When a customer passes six loyalty points, their total resets to zero
- No customer should gain or lose loyalty points due to another customer's purchase

```java
public class Loyalty {

    Scanner in = new Scanner(System.in);

    int points = 0;

    public static void updateLoyaltyCard() {
        points++;
    }

    public static void main(String[] args) {
        int customerAPoints = 0;
        int customerBPoints = 0;
        int customerCPoints = 0;
        String customer;
        float purchase;
        boolean looping = true;
        
        while (looping) {
            System.out.print("Customer: ");
            customer = in.nextLine();
            
            if (customer.equals("nobody")) {
                break;
            }
            
            System.out.print("Purchase: ");
            purchase = in.nextLine();
            updateLoyaltyCard();
            System.out.print("Customer " + "?" + " made a purchase.");
            System.out.print("They now have " + points + " loyalty points.");
        }
    }

}
```
