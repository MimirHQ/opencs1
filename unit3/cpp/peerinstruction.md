# Peer Instruction Questions: Conditional Logic

## Question 1

Which of the following blocks of code will print `"Exciting"`?

```cpp
// Block 1
if (14 > 0) {
    cout << "Exciting" << endl;
} else {
    cout << "Boring" << endl;
}

// Block 2
if (14) {
    cout << "Exciting" << endl;
} else {
    cout << "Boring" << endl;
}

// Block 3
if (14 > 0 && false) {
    cout << "Exciting" << endl;
} else {
    cout << "Boring" << endl;
}
```

- A. Block 1
- B. Block 1 and 2
- C. Block 1 and 3
- D. Blocks 1, 2, and 3

## Question 2

What will be the value of `a` when it is printed at the end of this code block?

```cpp
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
cout << a << endl;
```

- A. 4
- B. 5
- C. 6
- D. 7
