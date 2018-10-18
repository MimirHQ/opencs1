# Practice Problems: Vectors

## Problem 1

- LO: (Understand) Students will determine state of a vector after operations are executed.

What will be the value of `vec[2]`, the third element in the vector, after this code executes?

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 4;
    vector<int> vec (n);
    vec[0] = 3;
    vec[2] = vec[0];
    vec[0]++;
}
```

- A. 0
- B. 1
- C. 3
- D. 4

## Problem 2

- LO: (Understand) Students will identify the error with a block of code from its stack trace.

Consider the stack trace below for a program that does not compile. Which is the best explanation for what is causing this error?

```cpp
exit status 1
main.cpp: In function 'int main()':
main.cpp:12:28: error: invalid use of member function 'std::vector<_Tp, _Alloc>::size_type std::vector<_Tp, _Alloc>::size() const [with _Tp = int; _Alloc = std::allocator<int>; std::vector<_Tp, _Alloc>::size_type = long unsigned int]'
   for (int i = 0; i <= vec.size; i++) {
                        ~~~~^~~~
```

- A. vec is a not a vector.
- B. vec.size() should be called as a method, not a field.
- C. vec does not have a size because it has not been initialized.
- D. The loop should stop when i < vec.size, not when i <= vec.size.

## Problem 3

- LO: (Apply) Students will use data represented as vectors.

This program tabulates scores for a figure skating competition that has four parts:

1. The short dance, which is worth 25% of the final score
2. The free skate, which is worth 50% of the final score
3. The partner dance, which is worth 10% of the final score
4. And the original performance, which is worth 15% of the final score

The vector `weights` stores values that represent how much of the final score each the four parts is worth.

Complete this program to read in each of the four scores as `float` values, multiply each score by its corresponding weight, and then sum up the weighted scores to get the participant's final score as a `float` value.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> weights {0.25, 0.50, 0.10, 0.15};
    float total = 0.0;

    // TODO: Write your code here

    cout << "Final Score: " << total << endl;
}
```

## Problem 4

- LO: (Apply) Students will use vectors to store data for a computation.

The **mode** of a dataset is the item that appears most frequently.

Write a program to read in numbers between 1 and 100 and then report the mode. If more than one number appears most frequently, choose the highest number. Output a line with the result in this format:

```
The most frequent value was 42, appearing 9 times.
```

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

    // TODO: Write your code here

    cout << "The most frequent value was " << 50 << ", appearing " << 0 << " times." << endl;
}
```

## Problem 5

- LO: (Apply) Students will use vectors to verify some property of a dataset.

Some students have organized an election to determine the new leaders of their school club. Each member of the club has a unique ID that they can use when they vote. However, the election managers suspect that some members have voted twice.

Write a program to read in member IDs and check if there are any repeated values. If a ID has already be used, output a line in this format:

```
REPEAT: The ID BE45N6 has already been counted!
```

Stop reading input after reading the value `"STOP"`. Then output a line showing how many unique members voted in this format:

```
After excluding repeats, 45 unique members voted.
```

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

    // TODO: Write your code here

    cout << "REPEAT: The ID " << "AA00A0" << " has already been counted!" << endl;

    cout << "After excluding repeats, " << 0 << " unique members voted." << endl;
}
```

## Problem 6

- LO: (Apply) Students will use arrays or vectors to transform data.

Write a program that reads in a 4x4 text drawing and rotates it 90 degrees to the right.

For example, read in the drawing:

```
I I I I
. I I .
. I I .
I I I I
```

And output the drawing:

```
I . . I 
I I I I 
I I I I 
I . . I
```

The drawing will consist of capital letters A-Z and will always be 4 letters wide and 4 letters tall. 

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

    // TODO: Write your program here

}
```
