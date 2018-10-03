# PaintBot

## Documentation

Find the documentation for PaintBot in your language of choice:

- [Python](../../unit4/python/project.md)
- [Java](../../unit4/java/project.md)
- [C++](../../unit4/cpp/project.md)

## Executables

PaintBot supports Python, Java, and C++. The game itself is written in Python, but these .zip archives contain the files needed to run the game even if you do not have Python installed on your machine.

Each archive contains:

- An executable for the core PaintBot game library
- The source code for Player 0 (the challenger)
- The source code for Player 1 (the opponent)
- The map file
- The language-specific PaintBot player library, if applicable
- A Makefile

## Running a Match

To run the match for these two players and the given map, run this command:

```bash
$ make paintbot
```

Running the executable may require your permission as a user. It may be dangerous to run executables from untrusted sources. These executables were updated by the Mimir curriculum team on 9/21/2018 and confirmed to contain the correct executables from the original PaintBot source code.
