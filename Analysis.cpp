Analysis of Existing Game
Original Repository

https://github.com/shoonyank/game

Game Overview

The game is a simple command-line running/jumping game where the player (P) avoids obstacles (#) by jumping at the correct time.

Game Flow Summary
1. Game Start

Initializes player position

Spawns the first obstacle

Starts the main loop

2. Gameplay Loop

Obstacle moves left each frame

Player jumps when a key is pressed

Collision detection checks if player touches the obstacle

3. Rendering

Screen refreshes every frame

Player and obstacle are printed in fixed positions

4. Game End

Game ends instantly when a collision occurs

Strengths

Clean and modular code

Easy to understand for beginners

Simple and effective gameplay loop

Weaknesses

No scoring system

No increasing difficulty

Only one obstacle

No restart option

Very short gameplay duration

My Enhancements
1. Score System

Score increases every time the obstacle resets

Adds motivation to play longer

2. Player Lives

Player gets 3 lives before the final game over

Reduces frustration from instant failure

3. Restart Menu

Allows the player to restart without exiting the program

Makes the game feel more complete



