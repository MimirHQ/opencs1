# Peer Instruction Questions: Recursion

## Question 1

The recursive method `find_comma(text: str, i: int)` should return the index of the first comma in a substring of `text` starting at index `i` or return `-1` if the substring contains no commas.

What should go in the blank in its method body?

```python
def find_comma(text: str, i: int):
    if i >= len(text):
        return -1
    elif text[i] == ",":
        return i
    return _____
```

- A. `i`
- B. `i + 1`
- C. `find_comma(text, i)`
- D. `find_comma(text, i + 1)`

## Question 2

Will the recursive function `function_z(z: int)` terminate?

```python
def function_z(z: int):
    if z < 0:
        return function_z(-1 * z)
    return z - 1
```

- A. Yes, for all initial values of `z`.
- B. Yes, for initial values of `z` greater than or equal to 0.
- C. Yes, for initial values of `z` less than 0.
- D. No, for all initial values of `z`.
