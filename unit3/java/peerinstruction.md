# Peer Instruction Questions: Conditional Logic

## Question 1

Which of the following blocks of code will print `"Exciting"`?

```java
// Block 1
if (14 > 0) {
    System.out.println("Exciting");
} else {
    System.out.println("Boring");
}

// Block 2
if (14) {
    System.out.println("Exciting");
} else {
    System.out.println("Boring");
}

// Block 3
if (14 > 0 && false) {
    System.out.println("Exciting");
} else {
    System.out.println("Boring");
}
```

- A. Block 1
- B. Block 1 and 2
- C. Block 1 and 3
- D. Blocks 1, 2, and 3

## Question 2

What will be the value of `a` when it is printed at the end of this code block?

```java
int a = 4;
if (a > 0) {
    a = a + 1;
} else if (a >= 5) {
    a = a - 1;
} else if (a == 4) {
    a = a + 2;
} else {
    a = 7;
}
System.out.println(a);
```

- A. 4
- B. 5
- C. 6
- D. 7
