# Instructor Guide: Object-Oriented Basics

- [Unit Overview](#unit-overview)
- [Relevant Readings](#relevant-readings)
- [Learning Objectives](#learning-objectives)
- [Peer Instruction](#peer-instruction)
- [Engagement Practices](#engagement-practices)
- [Plagiarism Counterbalances](#plagiarism-counterbalances)

## Unit Overview

The object-oriented basics unit includes practice problems about class design, attributes, methods, constructors, and invariants. The exercises include content about abstraction and encapsulation, but not inheritance and polymorphism. Based on instructor feedback, inheritance and polymorphism may be added to this unit or addressed by separate resources.

In the unit project, students apply basic object-oriented (OO) concepts to model a store and then run simulations with the model to make decisions.

## Relevant Readings

### Python

**_Think Python, 2nd Edition_**
By Allen Downey
[PDF Link](http://greenteapress.com/thinkpython2/thinkpython2.pdf)

- Classes and Objects: 15.1 - 15.7
- Object-Oriented Features: 17.1 - 17.11
- Inheritance and Encapsulation: 18.1 - 18.10
- 15.3, Page 149: Discussion of alternative attributes that could be used to define a Rectangle class

### Java

**_Think Java_**
By Allen Downey and Chris Mayfield
[PDF Link](http://greenteapress.com/thinkjava6/thinkjava.pdf)

- Objects: 10.1 - 10.9 (optional: 10.10 Java source)
- Classes: 11.1 - 11.8 (11.9 is about pure methods)

### C++

**_Think Like a Computer Scientist, C++ Version_**
By Allen Downey
[PDF Link](http://greenteapress.com/thinkcpp/thinkCScpp.pdf)

- Structures: 8.1 - 8.10 (8.11 is about user input)
- More Structures: 9.1 - 9.9 (9.10 is about generalization, 9.11 is about algorithms)
- Member Functions: 11.1 - 11.10
- Classes: 14.1 - 14.4
- 14.8, Page 156: Discussion of invariants and how to ensure consistent state

**_Wikibooks C++ Programming_**
By Wikibooks Contributors
[PDF Link](https://upload.wikimedia.org/wikipedia/commons/e/e9/CPlusPlusProgramming.pdf)

- 3.1 Structures
- 3.3 Classes
- Optional: 3.4 Operator Overloading

**_Programming Fundamentals: A Modular Structured Approach using C++_**
By Kenneth Leroy Busbee
[OpenStax Link](https://cnx.org/contents/MDgA8wfz@22.2:YzfkjC2r@17/Preface)

- 28.1 explains OO vs procedural programming

### Other

**_Programming Fundamentals: A Modular Structured Approach, 2nd Edition_**
By Kenneth Leroy Busbee and Dave Braunschweig
[Rebus Link](https://press.rebus.community/programmingfundamentals/)

- IX: Object-Oriented Programming: explains OO vs procedural programming

## Learning Objectives

### Practice Problems

- (Remember) Students will recall how to create instances of a class.
- (Apply) Students will convert serialized data into objects.
- (Remember) Students will recall how to write an alternate constructor for a class.
- (Remember) Students will recall how to throw errors.
- (Remember) Students will recall how to define a class.
- (Apply) Students will produce a descriptive string representation of an object.
- (Apply) Students will compute derived attributes for a class.

### Programming Project

- (Apply) Implement classes and class methods as described in a specification.
- (Apply) Illustrate the relationships between classes by creating an UML diagram (optional).
- (Apply) Write hidden methods and attributes to manage encapsulated state.
- (Analyze) Prevent objects from reaching invalid states.
- (Create) Formulate an object-oriented simulation to determine the best solution to a problem.

## Peer Instruction

Reference the peer instruction for computer science [cheat sheet](http://www.peerinstruction4cs.org/instructor-cheat-sheet/).

**Question 1**

```
This section is hidden. Only instructors can view the peer instruction solutions.
```

**Question 2**

```
This section is hidden. Only instructors can view the peer instruction solutions.
```

## Engagement Practices

Reference the [definitions of the engagement practices](https://www.engage-csedu.org/EP-definitions) from the NCWIT EngageCSEdu project.

### 1. Make it Matter

**1A. Use Meaningful and Relevant Content**

- In practice problems 1-3, students parse data about songs.
- In practice problem 5, students implement a social media user class with privacy settings.

Are these contexts meaningful and relevant to your students? Or do they reflect niche interests?

**1B. Make Interdisciplinary Connections to CS**

The following scientific simulations were considered for this unit's programming project:

- Rumor spread
- Disease spread
- Soil percolation
- Product adoption
- Computer viruses

Ultimately, the scientific content seemed to increase the task difficulty more than it contributed to the object-oriented learning objectives.

If you have remixes that utilize these or other connections, please share!

**1C. Address Misconceptions About the Field of CS**

The second part of the programming project for this unit is meant to show students that object-oriented programming is not just about implementing classes. After the classes are written, students use them to make recommendations and even to measure their own proposals.

However, the context of simulating a store and calculating profit may not resonate with students.

Does this project reinforce or challenge your students conceptions of CS?

**1D. Incorporate Student Choice**

No notes for this unit yet.

### 2. Build Student Confidence and Professional Identity

**2A. Give Effective Encouragement**

What parts of the practice problems or programming project seem to discourage students, if any?

**2B. Offer Student-Centered Assessment**

Possible barriers or misconceptions that could serve as opportunities for a peer instruction question related to the simulation phase of this unit's programming project:

- Program outputs an incorrect solution because the wrong value is being printed.
- Flawed class invariant while maintaining nonzero stock quantity.
- Flawed conditional logic when trying to determine which store reaches $50k profit first.
- Flawed conditional logic to determine if store runs out of a certain product.
- Flawed custom print messages that attempt to determine why a store is not making as much revenue as expected.

**2C. Mitigate Stereotype Threat**

No notes for this unit yet.

**2D. Provide Opportunities for Interaction with Faculty**

No notes for this unit yet.

### 3. Grow an Inclusive Student Community

**3A. Avoid Stereotypes**

No notes for this unit yet.

**3B. Use Well-Structured Collaborative Learning**

The following practice problems might make for good pair programming activities during class. Consider some example subgoals:

- Problems 1-3: Songs
    - Instantiating sample songs
    - Reading song data from standard input
    - Instantiating songs from input data
    - Playing songs conditionally based on their length
    - Adding an alternate constructor
    - Maintaining class invariants
- Problem 4: Temperature Unit
    - Change protection of attributes
    - Write getters and setters
    - Write increment and decrement methods
    - Write energy saving mode method
- Problem 5: Social Media User Class
    - Choose data type to represent each of the six attributes
    - Write constructor
    - Write summary method
    - Update summary method to reflect user's privacy settings

**3C. Encourage Student Interaction**

When the store programming project is introduced, there is an opportunity for an ice breaker. Before they implement any part of the program, ask students to predict which store they think will make more revenue. Some possible facilitation questions:

- "Take a few minutes to think to yourself and make a prediction: Which store do you think will be more profitable?"
- "Share your prediction with a partner and ask them why they choose their option."
- Call on students: "Tell me about your partner's prediction. Explain their reasoning."

This ice breaker asks students to explain their classmate's idea, not their own. An alternate set of questions could be:

- "Take a few minutes to observe the order forms. Write down some questions that come to mind."
- "Now take another minute to observe the first few rows of the purchase dataset. What questions do you have now?"
- "Share your questions with a partner."
- Call on students: "Tell me the most interesting question that your partner came up with. Why is it interesting?"

This variation uses two sources of stimulus and asks students to not only share their classmate's idea, but to affirm why it is interesting.

## Plagiarism Counterbalances

```
This section is hidden. Only instructors can view the plagiarism counterbalances.
```

## Jokes

- "Java developers eat serialized objects for breakfast!"
