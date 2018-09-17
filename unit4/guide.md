# Instructor Guide: Loops

* [Unit Overview](#unit-overview)
* [Relevant Readings](#relevant-readings)
* [Learning Objectives](#learning-objectives)
* [Engagement Practices](#engagement-practices)
* [Plagiarism Counterbalances](#plagiarism-counterbalances)

## Unit Overview

The loops unit includes practice problems about definite (for) loops and indefinite (while) loops.

In the unit project, students play a programming game called PaintBot, where they program bots to cover a virtual playing field in their color of paint.

## Relevant Readings

### Python

**_Think Python, 2nd Edition_**
By Allen Downey
[PDF Link](http://greenteapress.com/thinkpython2/thinkpython2.pdf)

- Read 4.2
- Read 7.3 - 7.4 
- Read 8.3 - 8.7
- May want a supplementary reading about additional types of branching

**_NanoBook, Learn Python through bite-sized modules_**
By Vinesh Kannan, Mary Vo, and Eduardo Vidaurri-Rodriguez
[Web Link](https://mimirhq.github.io/nanobook/)

- Read 4.1 - 4.7

### Java

**_Think Java_**
By Allen Downey and Chris Mayfield
[PDF Link](http://greenteapress.com/thinkjava6/thinkjava.pdf)

- Read 6.1 - 6.7

### C++

**_Think Like a Computer Scientist, C++ Version_**
By Allen Downey
[PDF Link](http://greenteapress.com/thinkcpp/thinkCScpp.pdf)

- Read 4.6
- Read 6.2 - 6.5
- Read 10.3

**_Wikibooks C++ Programming-**
By Wikibooks Contributers
[PDF Link](https://upload.wikimedia.org/wikipedia/commons/e/e9/CPlusPlusProgramming.pdf)

- Read 3.6.1 
- Read 3.6.3

**_Programming Fundamentals: A Modular Structured Approach using C++_**
By Kenneth Leroy Busbee
[OpenStax Link](https://cnx.org/contents/MDgA8wfz@22.2:YzfkjC2r@17/Preface)

- Read 17.1
- Read 17.4
- Read 18.1 - 18.2
- Read 19.1
- Read 19.4

### Other

**_Programming Fundamentals: A Modular Structured Approach, 2nd Edition_**
By Kenneth Leroy Busbee and Dave Braunschweig
[Rebus Link](https://press.rebus.community/programmingfundamentals/)

- Read 6.1 - 6.9
- May want to skip 6.8 regarding integer overflow

## Learning Objectives

### Practice Problems

- (Remember) Students will recall how to read from standard input.
- (Apply) Students will write loops that iterate as long as a condition is true.
- (Apply) Students will write loops that iterate over every value in a range.
- (Analyze) Students will choose the type of loop best suited to the task.
- (Remember) Students will locate the start, stop, and step parameters of a loop.
- (Analyze) Students will fix a loop that runs forever.
- (Apply) Students will compute a value from a multi-dimensional data.
- (Apply) Students will find the optimal value in a collection.
- (Apply) Students will write loops that iterate until a condition is met.
- (Analyze) Students will identify edge cases from a problem statement.

### Programing Project

- (Apply) Students will use loops to avoid repetitive code.
- (Create) Students will design a challenge that other programmers will find interesting.
- (Evaluate) Students will rank challenges designed by other programmers according to their difficulty.

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

#### 1A. Use Meaningful and Relevant Content

Two practice problems in this unit use contexts that are not typically associated with programming:

- Crop yields
- Volleyball scoring

#### 1B. Make Interdisciplinary Connections to CS

No notes for this unit yet.

#### 1C. Address Misconceptions About the Field of CS

No notes for this unit yet.

#### 1D. Incorporate Student Choice

In the programming project, students design their own map for a PaintBot match and get to share it with the rest of the class. Designing a map involves editing a text file, so it is meant to have a low-barrier to entry and still provide students with plenty of creative freedom. You can also task students with creating the opponent and challenger bot for their map, to prove that it can be solved.

For the second part of the programming project, you can assign students to solve maps created by their classmates. Here are some possibilities:

- Collect all of the student-created maps and have students vote on the ones they think are most interesting
- Allow students to choose from the pool of maps which ones they want to solve
- Assign students in pairs and have them complete each others' maps

### 2. Build Student Confidence and Professional Identity

#### 2A. Give Effective Encouragement

No notes for this unit yet.

#### 2B. Offer Student-Centered Assessment

Every PaintBot match produces a URL that students can visit to watch a replay of the match. Some students find this replay helpful for debugging their code or noticing opportunities that were not clear from reading the code or imagining the execution. The replay shows all of the bots moves, including rotations, collisions, and painted cells.

You can watch [this sample replay](https://paintbot.glitch.me/?s=3,3,0_0_0_90!1_2_2_270,0_1_0_90!1_2_1_270_0,0_2_0_90_f!1_2_0_0_f,0_2_0_90_f!1_2_0_0_f,0_2_0_90_f!1_2_0_0_f,0_2_0_90_f!1_2_0_0_f,0_1_0_90!1_2_1_0&b=0_0_0!2_2_1!) to see two bots fail to complete their instructions as planned due to collisions.

These replay links can be saved or shared and sometimes make for useful in-class discussions along with the corresponding source code.

**Note:** We are working on improving the accessibility of the PaintBot game and its replays. A current initiative is to add screen reader support to explain the actions taking place in the replay. If you have suggestions or experience that can help us make PaintBot more accessible, please share in the Piazza forum or contact Vinesh Kannan (vinesh@mimirhq.com).

#### 2C. Mitigate Stereotype Threat

No notes for this unit yet.

#### 2D. Provide Opportunities for Interaction with Faculty

No notes for this unit yet.

### 3. Grow an Inclusive Student Community

#### 3A. Avoid Stereotypes

No notes for this unit yet.

#### 3B. Use Well-Structured Collaborative Learning

Practice problems 5 and 6 are suitable for use as pair programming exercises. Here are some suggested subgoals, which you can provide to students or use as checkpoints for the students to switch roles:

**Problem 5: Crop Yields**

- Write nested loops to check the crop yield of every cell
- Compute the total crop yield for each row
- Compare the total crop yield for the current row to the current maximum
- Report the row with maximum crop yield

**Problem 6: Volleyball Scoring**

- Write indefinite loop to read scoring data
- Check if either team has enough points to win the game
- Check if either team is leading by two points
- Terminate the indefinite loop if the match has been won or if the match otherwise ends
- Report the final score and result

#### 3C. Encourage Student Interaction

No notes for this unit yet.

## Plagiarism Counterbalances

```
This section is hidden. Only instructors can view the plagiarism counterbalances.
```
