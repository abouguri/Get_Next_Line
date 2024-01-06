# Get_Next_Line: The Heisenberg of File Reading

Welcome to the Get_Next_Line project, a pivotal part of the 1337 curriculum. Just like Walter White's transformation into Heisenberg in "Breaking Bad," this project is about transforming your approach to file reading in C. You're not in danger of reading files; YOU ARE the danger to inefficient file handling.

## Overview

Get_Next_Line (GNL) is your lab for concocting efficient file reading methods. Divided into Mandatory and Bonus parts, this project is a thrilling journey into the world of static variables, file descriptors, and the art of reading lines, one at a time, with precision.

Mandatory Part: The Blue Meth of File Reading

<p align="center">
<img src="https://media3.giphy.com/media/ko8HPo4iQxcZi/giphy.gif" width="700">
<p/>

### Function: get_next_line

### Objective:
Master the art of reading a line from a file descriptor.

### Return:
The line, crystal clear and pure.

NULL if the batch is done or an error breaks bad.

### Method:
Just like cooking the perfect batch of blue meth, this function meticulously reads from a file descriptor until it hits a newline character or reaches the end-of-file.

### Enhancements:
Juggle multiple file descriptors with a single static variable. Handle them like Heisenberg handled his empire.

Keep the reading continuity on each descriptor as smooth as Mike's operations.
### Usage Scenario:
Seamlessly switch between file descriptors (e.g., fd 3, 4, and 5) like Gus Fring switches business tactics, without losing the thread.

## Project Structure

<p align="center">
<img src="https://media0.giphy.com/media/MBVemoHuyw9Ik/giphy.gif" width="700">
<p/>

### The Lab Equipment (Header Files):
get_next_line.h - The recipe for the standard batch.

### The Ingredients (Source Files):
get_next_line.c - Mandatory cooking instructions.

get_next_line_utils.c - The utilities to perfect the product.

## Installation and Usage

<p align="center">
<img src="https://media0.giphy.com/media/3oEjI8Kq5HhZLCrqBW/giphy.gif" width="700">
<p/>

### Requirements:
A C compiler (like gcc) - the RV of your operation.
Standard C libraries - your basic lab supplies.

1. Clone the empire:
```
git clone https://github.com/abouguri/Get_Next_Line.git
```
2. Wear Your Yellow Suit (Include the Header):
```
#include "get_next_line.h"
```
3. Cook the Batch (Compilation):
```
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=XX <path_to_main.c> <path_to_get_next_line.c> <path_to_get_next_line_utils.c> -I <path_to_get_next_line.h>
```

"Say my name." 
