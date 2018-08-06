# Programming Project: Conditional Logic

## Summary

Program a fictional self-driving vehicle to make tough ethical decisions.

## Prerequisites

You should already be familiar with these programming concepts: data types.

## Learning Objectives

Students will:

- (Apply) Convert written rulesets into conditional code.
- (Analyze) Identify possible unintended ethical consequences of an algorithm.
- (Create) Design an algorithm that reflects your values.

## Task Description

In this project, you will program a fictional self-driving vehicle to make tough ethical decisions.

You will write a **decision algorithm** which, given data about a scenario, will decide whether the vehicle should crash, killing its passenger, or swerve, killing a nearby pedestrian.

This project remixes and builds on [the Ethical Engine activity](https://medium.com/bucknell-hci/the-ethical-engine-integrating-ethical-design-into-intro-to-computer-science-4f9874e756af), created by Dr. Evan Peck and Gabby LaBorwit at Bucknell University.

The support files for this project are included in the `ethicalengine` directory.

### Part 1: Exploration

Visit the website for [the Moral Machine project](http://moralmachine.mit.edu/). Click the "Start Judging" button and you will be presented with various scenarios. Complete at least ten scenarios. Keep notes on how you came to your decision in each scenario.

### Part 2: Implementation

Now you will practice programming fictional self-driving vehicles using the Ethical Engine API, which allows you to analyze details about scenarios using code.

See [Appendix A](#appendix-a-api) for information on the API. There will only be one passenger and one pedestrian in each scenario.

Below are written descriptions of rulesets for sample decision algorithms. Your job is to write and test three different decision methods that precisely implement each ruleset:

1. Save the passenger, if and only if they are pregnant.
2. Save the pedestrian, if they are crossing legally or if they are a child.
3. The first priority is to save the youngest person. The second priority is to save athletic people. The third priority is to save people who are either a doctor or a CEO. The fourth priority is to save females. The fifth priority is to save the passenger.

Fill in the appropriate methods in `EthicalEngine.java`. When you want to test one of the decision methods, edit line `24` of `Main.java` to choose the target method. Then execute the following command in your terminal to run the program:

```bash
$ javac Main.java
$ java Main
```

Scenarios are generated randomly. You can also generate pseudo-random scenarios, where the same scenarios are run each time the program runs. Specify a seed for the random generator as a runtime argument like so:

```bash
$ javac Main.java
$ java Main 12
```

### Part 3: Design

Now that you have experience using the Ethical Engine API, design your own decision algorithm! You can refer to your notes from the Moral Machine scenarios or come up with an entirely new method of deciding.

Submit the following:

- A written description of how you want the decision to be made
- The source code for your decision algorithm
- Examples of possible discrepancies between your written description and the actual algorithm

## Assessment

A successful solution will:

- Correctly implement all three practice rulesets, producing the same results as the reference solutions.
- Create an original decision method that compiles and runs.
- Create an original decision method that always chooses to save either the passenger or the pedestrian, never returning some other result.

## Appendix A: API

You can read the base documentation for the Ethical Engine project [on GitHub](https://evanpeck.github.io/ethical_engine). The main Ethical Engine API requires students to understand loops and objects, but in this activity, all of the scenarios will have a single passenger and a single pedestrian, making it more suitable for students learning conditionals.
