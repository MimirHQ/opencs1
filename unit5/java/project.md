# Programming Project: Functions

## Summary

Create one bot that can solve every map in a family of similar PaintBot challenges.

## Prerequisites

You should already be familiar with these programming concepts: data types, calling functions with no return values, loops.

## Learning Objectives

Students will:

- (Apply) Use functions to avoid repetitive code.
- (Evaluate) Identify patterns in similar structures.

## Task Description

PaintBot is a game where you program bots to cover a virtual playing field in your color of paint. In this project, you will write a single bot that can solve all of the maps in a similar family of challenges.

Here are two examples of maps that belong to the family of challenges you will solve:

```
# 6x6 Cross
600
. . _ _ . 1 _
. 1 . . 1 . _
_ . 1 1 . _ _
_ . 1 1 . _ _
. 1 . . 1 . _
1 . _ _ . 1 _
_ _ _ _ _ _ .
```

```
# 9x9 Cross
900
. . _ _ _ _ _ . 1 _
. 1 . _ _ _ . 1 . _
_ . 1 . _ . 1 . _ _
_ _ . 1 . 1 . _ _ _
_ _ _ . . . _ _ _ _
_ _ . 1 . 1 . _ _ _
_ . 1 . _ . 1 . _ _
. 1 . _ _ _ . 1 . _
1 . _ _ _ _ _ . 1 _
_ _ _ _ _ _ _ _ _ .
```

[Here is a preview of the 9x9 Cross map.](https://paintbot.glitch.me/?s=10,10,0_0_0_90!1_9_9_270,0_0_0_90!1_9_9_270&b=0_0_0!2_0_x!3_0_x!4_0_x!5_0_x!6_0_x!8_0_1!9_0_x!1_1_1!3_1_x!4_1_x!5_1_x!7_1_1!9_1_x!0_2_x!2_2_1!4_2_x!6_2_1!8_2_x!9_2_x!0_3_x!1_3_x!3_3_1!5_3_1!7_3_x!8_3_x!9_3_x!0_4_x!1_4_x!2_4_x!4_4_1!6_4_x!7_4_x!8_4_x!9_4_x!0_5_x!1_5_x!3_5_1!5_5_1!7_5_x!8_5_x!9_5_x!0_6_x!2_6_1!4_6_x!6_6_1!8_6_x!9_6_x!1_7_1!3_7_x!4_7_x!5_7_x!7_7_1!9_7_x!0_8_1!2_8_x!3_8_x!4_8_x!5_8_x!6_8_x!8_8_1!9_8_x!0_9_x!1_9_x!2_9_x!3_9_x!4_9_x!5_9_x!6_9_x!7_9_x!8_9_x!9_9_1!)

Your bot will start in the top-left corner cell (x = 0, y = 0) and will be facing right.

Your bot, the challenger, should be programmed to color all of the cells marked `1` in your color (`0`). The only cell you do not have to paint is the bottom-right corner cell, where your opponent will be sitting, motionless.

**Note:** Because there is an extra cell for the opponent, the X and Y size of the map will be one greater than the size of the cross.

Your bot will be tested against several maps from this family of challenges. It will be tedious for you to manually try every combination, so use what you have learned about functions to devise a more efficient solution (in terms of your time spent on programming the bot!). Your bot cannot take in any information other than what its sensors have access to.

### Instructions

Refer to these sections for documentation:

- [Appendix A: Rules](#appendix-a-rules), the rules of PaintBot
- [Appendix B: Maps](#appendix-b-maps), the format for specifying a map
- [Appendix C: API](#appendix-c-api), the functions your bots can use

Download and unzip the correct [PaintBot zip archive](https://github.com/MimirHQ/opencs1/tree/master/resources/paintbot) for your operating system and programming language.

In these two-player matches, the first player, Player 0, will start at the top-right cell of the map, facing right (90 degrees). The second player, Player 1, will start in the bottom-right cell of the map, facing left (270 degrees). You must leave those cells in your map.

Paste one of sample maps from above in `map.txt`. Edit the challenger, Player 0, in `P0.java`.

To run the game, navigate to the folder that contains `Makefile` and run this command in your terminal:

```bash
$ make paintbot
```

## Submission

Submit the following:

- Your challenger bot solution that can win on all maps in this family of challenges.

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

Return Type | Function | Description
-------------|----------|-------------
`void` | `start()` | Must be called at the start of the game.
`void` | `forward()` | Moves forward in the direction of the bot's rotation.
`void` | `backward()` | Moves backward opposite the direction of the bot's rotation.
`void` | `rotateLeft()` | Rotates the bot counter-clockwise.
`void` | `rotateRight()` | Rotates the bot clockwise.
`void` | `skip()` | Skips the current turn.


## Game Data

Return Type | Function | Description
-------------|----------|-------------
`int` | `getMyScore()` | Counts the number of cells painted in your color.
`int` | `getTurn()` | Gets the current turn number (first turn is `0`).
`int` | `getMaxTurns()` | Gets the maximum number of turns the game can last.
`boolean` | `isPlaying()` | Indicates whether or not the game is still in progress.

## Sensors

Return Type | Function | Description
-------------|----------|-------------
`int` | `getRotation()` | Gets the bot's angle of rotation (`0` = up, `90` = right, `180` = down, `270` = left).
`int` | `getX()` | Gets the bot's x coordinate.
`int` | `getY()` | Gets the bot's y coordinate.
`int` | `getXSize()` | Gets the number of columns in the game map.
`int` | `getYSize()` | Gets the number of rows in the game map.
`boolean` | `isInBounds(int x, int y)` | Indicates whether or not (x, y) is in the map.
`boolean` | `isBlocked(int x, int y)` | Indicates whether or not (x, y) is currently unavailable to move to.
`boolean` | `isMyColor(int x, int y)` | Indicates whether or not (x, y) is painted in your color.
