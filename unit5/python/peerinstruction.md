# Peer Instruction Questions: Functions

## Question 1

What will this program print?

```python
n = 2


def function_a(n: int) -> int:
    return 2 * n


def function_b(n: int) -> int:
    if n < 0:
        return function_a(n)
    return 0


def function_c(n: int) -> int:
    return function_b(n - 3)


if __name__ == "__main__":
    result = function_c(n)
    print(result)
```

- A. -2
- B. 0
- C. 1
- D. 4

## Question 2

If the `apply_discount()` function were converted into a pure function, what would its new function signature be?

```python
price = 14.75


def apply_discount(discount: float) -> None:
    global price
    price = price * (1.0 - discount)


if __name__ == "__main__":
    # Apply a 25% discount
    apply_discount(0.25)
```

- A. `apply_discount(discount: float) -> None`
- B. `apply_discount(price: float, discount: float) -> None`
- C. `apply_discount(discount: float) -> float`
- D. `apply_discount(price: float, discount: float) -> float`
