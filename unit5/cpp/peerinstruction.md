# Peer Instruction Questions: Functions

## Question 1

What will this program print?

```cpp
#include <iostream>
using namespace std;

int n = 2;

int functionA(int n) {
    return 2 * n;
}

int functionB(int n) {
    if (n < 0) {
        return functionA(n);
    }
    return 0;
}

int functionC(int n) {
    return functionB(n - 3);
}

int main() {
    int result = functionC(n);
    cout << result << endl;
}
```

- A. -2
- B. 0
- C. 1
- D. 4

## Question 2

If the `applyDiscount()` function were converted into a pure function, what would its new function signature be?

```cpp
#include <iostream>
using namespace std;

float price = 14.75;

void applyDiscount(float discount) {
    price = price * (1.0 - discount);
}

int main() {
    // Apply a 25% discount
    applyDiscount(0.25);
}
```

- A. `void applyDiscount(float discount)`
- B. `void applyDiscount(float price, float discount)`
- C. `float applyDiscount(float discount)`
- D. `float applyDiscount(float price, float discount)`
