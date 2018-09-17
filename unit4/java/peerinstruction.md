# Peer Instruction Questions: Loops

## Question 1

Which loops will run infinitely?

```cpp
// Loop A
for (int i = 0; i < -5; i++) {
    System.out.println(i);
}
```

```cpp
// Loop B
for (int i = 0; i < 5; i++) {
    i = 0;
    System.out.println(i);
}
```

- A. Neither loop.
- B. Only Loop A.
- C. Only Loop B.
- D. Both loops A and B.

## Question 2

How many lines will this doubly-nested loop print?

```cpp
for (int a = 0; a < 3; a++) {
    for (int b = 0; b < 3; b++) {
        if (a == b) {
            break;
        }
        System.out.println(a + ", " + b);
    }
}
```

- A. 0 lines
- B. 1 line
- C. 3 lines
- D. 9 lines
