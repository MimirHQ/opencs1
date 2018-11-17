# Instructor Guide: Recursion

- [Unit Overview](#unit-overview)
- [Relevant Readings](#relevant-readings)
- [Learning Objectives](#learning-objectives)
- [Peer Instruction](#peer-instruction)
- [Engagement Practices](#engagement-practices)
- [Plagiarism Counterbalances](#plagiarism-counterbalances)

## Unit Overview

This unit covers topics in recursion including base cases, recursive steps, and circular relationships.

In the unit project, students implement the paint bucket fill tool using a classic recursive algorithm.

## Relevant Readings

### Python

**_Think Python, 2nd Edition_**
By Allen Downey
[PDF Link](http://greenteapress.com/thinkpython2/thinkpython2.pdf)

- Read 5.8 - 5.10
- Read 6.5 - 6.7

### Java

**_Think Java_**
By Allen Downey and Chris Mayfield
[PDF Link](http://greenteapress.com/thinkjava6/thinkjava.pdf)

- Read 8.1 - 8.4

### C++

**_Think Like a Computer Scientist, C++ Version_**
By Allen Downey
[PDF Link](http://greenteapress.com/thinkcpp/thinkCScpp.pdf)

- Read 4.7 - 4.8
- Read 5.10 - 5.11

**_Wikibooks C++ Programming_**
By Wikibooks Contributors
[PDF Link](https://upload.wikimedia.org/wikipedia/commons/e/e9/CPlusPlusProgramming.pdf)

- Read Recursion: 3.7.6

**_Programming Fundamentals: A Modular Structured Approach using C++_**
By Kenneth Leroy Busbee
[OpenStax Link](https://cnx.org/contents/MDgA8wfz@22.2:YzfkjC2r@17/Preface)

- Read 21.2

### Other

**_Programming Fundamentals: A Modular Structured Approach, 2nd Edition_**
By Kenneth Leroy Busbee and Dave Braunschweig
[Rebus Link](https://press.rebus.community/programmingfundamentals/)

- Read 10.6

## Learning Objectives

### Practice Problems

- (Understand) Students will identify the terminating condition of a recursive method.
- (Understand) Students will determine whether or not a recursive call will terminate.
- (Analyze) Students will fix bugs in a recursive method.
- (Apply) Students will implement a recursive function with one parameter.
- (Apply) Students will implement a recursive function with multiple parameters.
- (Apply) Students will implement a recursive function to identify circular relationships.

### Programming Project

- (Apply) Implement a recursive algorithm on images.
- (Create) Generate sample data to test an implementation.

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

In the unit practice problems, students compute recursive rankings for a sports tournament, generate indented recipes from recursive ingredients, and identify courses that have circular prerequisites.

In the unit project, students implement flood fill: a recursive image processing algorithm that is used for features like the paint bucket fill tool.

**1B. Make Interdisciplinary Connections to CS**

No notes for this unit yet.

**1C. Address Misconceptions About the Field of CS**

No notes for this unit yet.

**1D. Incorporate Student Choice**

No notes for this unit yet.

### 2. Build Student Confidence and Professional Identity

**2A. Give Effective Encouragement**

No notes for this unit yet.

**2B. Offer Student-Centered Assessment**

No notes for this unit yet.

**2C. Mitigate Stereotype Threat**

No notes for this unit yet.

**2D. Provide Opportunities for Interaction with Faculty**

No notes for this unit yet.

### 3. Grow an Inclusive Student Community

**3A. Avoid Stereotypes**

No notes for this unit yet.

**3B. Use Well-Structured Collaborative Learning**

Practice problems 4, 5, and 6 may be suitable for pair programming exercises. Here are some suggested subgoals for those problems:

**Problem 4: Sports Tournament Power Rankings**

- Iterate over all matches to find opposing teams
- Decide whether or not to recursively score a team

**Problem 5: Recipe Generation**

- Define the method
    - Select the method type
    - Select the parameters
- Identify ingredients required for the current item
    - Iterate over all of the ingredients
    - Decide whether or not the ingredient is required
- Display each required ingredient at the correct indentation
- Recursively display ingredients for each required ingredient
    - Decide whether or not the ingredient requires other ingredients
    - Update the parameters in the calling scope

**Problem 6: Identifying Circular Prerequisites**

- Keep track of the original course
- Iterate over all courses to find prerequisites
- Set a base case for a circular prerequisite
- Recursively identify prerequisites of prerequisites
- Return results to the original method

**3C. Encourage Student Interaction**

No notes for this unit yet.

## Plagiarism Counterbalances

```
This section is hidden. Only instructors can view the plagiarism counterbalances.
```
