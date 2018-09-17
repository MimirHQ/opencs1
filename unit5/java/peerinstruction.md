# Peer Instruction Questions: Functions

## Question 1

What will this program print?

```java
public class Program {

    public static int n = 2;

    public static int functionA(int n) {
        return 2 * n;
    }

    public static int functionB(int n) {
        if (n < 0) {
            return functionA(n);
        }
        return 0;
    }

    public static int functionC(int n) {
        return functionB(n - 3);
    }

    public static void main(String[] args) {
        int result = functionC(n);
        System.out.println(result);
    }  
}
```

- A. -2
- B. 0
- C. 1
- D. 4

## Question 2

If the `applyDiscount()` function were converted into a pure function, what would its new function signature be?

```java
public class Discount {

    public static double price = 14.75;

    public static void applyDiscount(double discount) {
        price = price * (1.0 - discount);
    }

    public static void main(String[] args) {
        // Apply a 25% discount
        applyDiscount(0.25);
    }

}
```

- A. `public static void applyDiscount(double discount)`
- B. `public static void applyDiscount(double price, double discount)`
- C. `public static double applyDiscount(double discount)`
- D. `public static double applyDiscount(double price, double discount)`
