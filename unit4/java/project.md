# Programming Project: Loops

## Summary

Design your own map for a PaintBot game.

## Prerequisites

You should already be familiar with these programming concepts: data types, calling functions with no return values.

## Learning Objectives

Students will:

- (Apply) Use loops to avoid repetitive code.
- (Create) Design a challenge that other programmers will find interesting.
- (Evaluate) Rank challenges designed by other programmers according to their difficulty.

## Task Description

PaintBot is a game where you program bots to cover a virtual playing field in your color of paint. In this project, you will design the map for a two-player PaintBot match. You will also design the second player, who will face off against other challengers in your class.

### Instructions

Refer to these sections for documentation:

- [Appendix A: Rules](#appendix-a-rules), the rules of PaintBot
- [Appendix B: Maps](#appendix-b-maps), the format for specifying a map
- [Appendix C: API](#appendix-c-api), the functions your bots can use

Download and unzip the correct [PaintBot zip archive](https://github.com/MimirHQ/opencs1/tree/master/resources/paintbot) for your operating system and programming language.

In these two-player matches, the first player, Player 0, will start at the top-right cell of the map, facing right (90 degrees). The second player, Player 1, will start in the bottom-right cell of the map, facing left (270 degrees). You must leave those cells in your map.

Edit the map in `map.txt`. Edit the challenger, Player 0, in `P0.java` and edit the opponent, Player 1, in `P1.java`.

To run the game, navigate to the folder that contains `Makefile` and run this command in your terminal:

```bash
$ make paintbot
```

## Submission

Submit the following:

- Your map file.
- An opponent bot to play against challengers for the map.
- A challenger bot solution that can win on the map.

Choose one of the following discussion questions and answer it in two to three sentences:

- What makes your map challenging?
- How did your original idea for a map change?
- How many different ways are there for the challenger to win on your map?

## Appendix A: Rules

Program your robot to compete with other players and cover the virtual playing field in your color of paint.

- Bots paint any cell they occupy in their own color
- When the game starts, bots paint their starting cell in their own color.
- On each turn, all bots move at the same time.
- Bots can move forward or backward.
- Bots can skip a turn instead of moving.
- Bots can rotate left (counter-clockwise) or right (clockwise) without using a turn.
- Bots cannot move into a cell occupied by another bot.
- Bots cannot move outside the map or into missing cells.
- Bots cannot move into a cell on the same turn as other bots.
- If any bots are not able to make their chosen move, they will stay on the original cell.

## Appendix B: Maps

Maps determine the virtual playing field for PaintBot games. Consider this example map:

```
# Wide Map
15
. . . . .
. _ _ _ .
. . . . .
// Be careful in the middle
```

The number before the map indicates how many turns the match will last. Lines that start with `#` or `//` are comments and are ignored by the game.

After the turn number comes the layout of cells in the map. Each cell has an (x, y) coordinate pair. The cell in the top-left corner is (0, 0). All cells in the left column have x = 0 and x increases from left to right. All cells in the top row have y = 0 and y increases from top to bottom.

Maps can have three types of cells:

- `.` Empty cells, denoted by a period
- `1` Painted cells, denoted by the number of the player who painted them
- `_` Missing cells, denoted by an underscore

If they are free, players can move into any empty cell or painted cell. Trying to move into a missing cell has the same effect as trying to move off the board.

## Appendix C: API

## Movement

|-------------|----------|-------------|
| Return Type | Function | Description |
|-------------|----------|-------------|
| `void` | `start()` | Must be called at the start of the game. |
| `void` | `forward()` | Moves forward in the direction of the bot's rotation. |
| `void` | `backward()` | Moves backward opposite the direction of the bot's rotation. |
| `void` | `rotateLeft()` | Rotates the bot counter-clockwise. |
| `void` | `rotateRight()` | Rotates the bot clockwise. |
| `void` | `skip()` | Skips the current turn. |


## Game Data

|-------------|----------|-------------|
| Return Type | Function | Description |
|-------------|----------|-------------|
| `int` | `getMyScore()` | Counts the number of cells painted in your color. |
| `int` | `getTurn()` | Gets the current turn number (first turn is `0`). |
| `int` | `getMaxTurns()` | Gets the maximum number of turns the game can last. |
| `boolean` | `isPlaying()` | Indicates whether or not the game is still in progress. |

## Sensors

|-------------|----------|-------------|
| Return Type | Function | Description |
|-------------|----------|-------------|
| `int` | `getRotation()` | Gets the bot's angle of rotation (`0` = up, `90` = right, `180` = down, `270` = left). |
| `int` | `getX()` | Gets the bot's x coordinate. |
| `int` | `getY()` | Gets the bot's y coordinate. |
| `int` | `getXSize()` | Gets the number of columns in the game map. |
| `int` | `getYSize()` | Gets the number of rows in the game map. |
| `boolean` | `isInBounds(int x, int y)` | Indicates whether or not (x, y) is in the map. |
| `boolean` | `isBlocked(int x, int y)` | Indicates whether or not (x, y) is currently unavailable to move to. |
| `boolean` | `isMyColor(int x, int y)` | Indicates whether or not (x, y) is painted in your color. |
