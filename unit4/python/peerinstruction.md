# Peer Instruction Questions: Loops

## Question 1

Which loops will run infinitely?

```cpp
// Loop A
for i in range(0, -5, 1):
    print(i)
```

```cpp
// Loop B
for i in range(0, 5, 1):
    i = 0
    print(i)
```

- A. Neither loop.
- B. Only Loop A.
- C. Only Loop B.
- D. Both loops A and B.

## Question 2

How many lines will this doubly-nested loop print?

```cpp
for a in range(3):
    for b in range(3):
        if a == b:
            break
        print('{}, {}'.format(a, b))
```

- A. 0 lines
- B. 1 line
- C. 3 lines
- D. 9 lines
