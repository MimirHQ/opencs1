# Peer Instruction Questions: Object-Oriented Basics

## Question 1

Study this definition of the `Human` class and the block of code that uses it.

```java
public class Human {

    public int age;

    public Human(int age) {
        this.age = age;
    }

    public int getAge() {
        return this.age;
    }

    public int getAgeInDogYears() {
        int age = this.age;
        age = age * 7;
        return age;
    }

}
```

```java
Human human = new Human(10);
int age = human.getAge();
age = 5;
int dogYears = human.getAgeInDogYears();
int humanYears = human.getAge();
```

What will be the value of the variable `humanYears` after this code is executed?

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
