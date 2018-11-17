# Practice Problems: Input and Output

## Problem 1

- LO: (Understand) Students will interpret error messages related to writing output.

This program is supposed to print `"Hello, World."`:

```cpp
#include <iostream>

int main() {
    cout << "Hello, World.";
}
```

Instead, trying to compile the program generates this error message:

```
p1.cpp:4:5: error: use of undeclared identifier 'cout'; did you mean
      'std::cout'?
    cout << "Hello, World.";
    ^~~~
    std::cout
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/iostream:54:33: note: 
      'std::cout' declared here
extern _LIBCPP_FUNC_VIS ostream cout;
                                ^
1 error generated.
```

Which of these options best explains the error message?

- A. `cout` is part of the `std` namespace, so the error message suggests writing `std::cout` instead.
- B. `cout` is a variable and the error message reminds the programmer to declare it.
- C. `cout` is declared as and `ostream` but this program includes `iostream`.
- D. `cout` cannot be used without the line `using namespace std;`.

## Problem 2

- LO: (Understand) Students will understand how input strings are read into boolean variables.

Consider this program that reads input into a boolean variable.

```cpp
#include <iostream>
using namespace std;

int main() {
    bool isSunny;
    cin >> isSunny;
    cout << "isSunny = " << isSunny << endl;
}
```

Select all of the following input strings that would lead to `isSunny` being `true`.

- A. `23`
- B. `0`
- C. `-5`
- D. `2.3`
- E. `hello`
- F. `y`
- G `true`
- H. `false`

## Problem 3

- LO: (Apply) Students will display a formatted string to standard output.

This program reads in values into variables. Write a program to output the information in this format:

```
I found 9 ghosts in the haunted house.
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    string scaryThings;
    cin >> number;
    cin >> scaryThings;
    // TODO: Write your program here.
}
```

## Problem 4

- LO: (Understand) Students will choose the best data type to use for a problem.
- LO: (Apply) Students will set precision when displaying a numerical value.

Read in two numbers and display the ratio between the second value and the first value. Match this format:

```
The second number is 5.0 times the value of the first number.
```

```
The second number is 2.5 times the value of the first number.
```

Only include one value after the decimal point.

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // TODO: Write your program here.
}
```

## Problem 5

- LO: (Apply) Students will select an individual character from a string.

Read in a string and then print out information about the string in this format:

```
String: hoopla
Length: 6
First Letter: h
Last Letter: a
```

```cpp
#include <iostream>
using namespace std;

int main() {
    // TODO: Write your program here.
}
```

## Problem 6

- LO: (Apply) Students will read in values to perform a computation.

Read in three values:

- The name of an item, a single line
- The price of an item, a positive dollar value
- The shipping fee rate, a value between 0.0 (free shipping) and 1.0 (equal to the cost)

Then print the costs of the item in the following format:

```
Costs for Chocolate
Item Price: $20.00
Shipping Fee: $2.50
Total Cost: $22.50
```

Use two places after the decimal point when displaying the costs

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // TODO: Write your program here.
}
```
