# Ethical Engine

## Instructions

- Fill in the appropriate methods in `engine.py`.
- When you want to test one of the decision methods, edit line `23` of `main.py` to choose the target method.

## Running the Program

Compile and run the main file to simulate your engine with random scenarios:

```
$ python3.6 main.py
```

The program will show output like this:

```
Scenario Overview
-----------------
Peds in Lane: No
Legal Crossing: No
Passengers (2)
- cat
- [athletic adult male] job: unknown
Pedestrians (4)
- [athletic adult female] job: criminal
- [average adult female] job: unknown, pregnant
- [athletic adult male] job: homeless
- dog
Hit any key to see decision: y
I chose to save the pedestrians
Hit 'q' to quit or 'enter' to continue: q
Done.
```

Scenarios are generated randomly. You can also generate pseudo-random scenarios, where the same scenarios are run each time the program runs. Specify a seed for the random generator as a runtime argument like so:

```
$ python3.6 main.py 12
```

Each time you run the program with the value 12, you will see the same series of scenarios.

## Developing Your Engine

Open `Engine.cpp` and start editing the `decide()` method.

You can refer to [the documentation](https://evanpeck.github.io/ethical_engine/python) to see what information each scenario object contains.
