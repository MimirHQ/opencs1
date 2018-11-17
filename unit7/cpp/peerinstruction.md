# Peer Instruction Questions: Recursion

## Question 1

The recursive method `findComma(string text, int i)` should return the index of the first comma in a substring of `text` starting at index `i` or return `-1` if the substring contains no commas.

What should go in the blank in its method body?

```cpp
int findComma(string text, int i) {
    if (i >= text.length()) {
        return -1;
    } else if (text[i] == ',') {
        return i;
    }
    return _____;
}
```

- A. `i`
- B. `i + 1`
- C. `findComma(text, i)`
- D. `findComma(text, i + 1)`

## Question 2

Will the recursive function `functionZ(int z)` terminate?

```cpp
int functionZ(int z) {
    if (z < 0) {
        return functionZ(-1 * z);
    }
    return z - 1;
}
```

- A. Yes, for all initial values of `z`.
- B. Yes, for initial values of `z` greater than or equal to 0.
- C. Yes, for initial values of `z` less than 0.
- D. No, for all initial values of `z`.
