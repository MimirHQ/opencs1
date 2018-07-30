# Peer Instruction Questions: Object-Oriented Basics

## Question 1

Study this definition of the `Human` class and the block of code that uses it.

```python
class Human:

    def __init__(self, age: int):
        self.age = age

    def get_age(self) -> int:
        return self.age

    def get_age_in_dog_years(self) -> int:
        age = self.age
        age = age * 7
        return age
```

```python
human = Human(10)
age = human.get_age()
age = 5
dog_years = human.get_age_in_dog_years()
human_years = human.get_age()
```

What will be the value of the variable `human_years` after this code is executed?

- A. 5
- B. 10
- C. 35
- D. 70

## Question 2

Which of the following changes is an example of encapsulation?

1. Making an attribute that represents a property of the object private, and writing getters and setters for it. 
2. Making an attribute that represents a property of the object private, but not writing getters and setters for it.
3. Writing a class method that represents an action of the object and that modifies a private attribute.

- A. Statement 1
- B. Statements 1 and 2
- C. Statements 1 and 3
- D. Statements 1, 2, and 3
