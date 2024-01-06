# Get_Next_Line: The Heisenberg of File Reading

Welcome to the Get_Next_Line project, a pivotal part of the 1337 curriculum. Just like Walter White's transformation into Heisenberg in "Breaking Bad," this project is about transforming your approach to file reading in C. You're not in danger of reading files; you're the danger to inefficient file handling.

## Overview

Get_Next_Line (GNL) is your lab for concocting efficient file reading methods. Divided into Mandatory and Bonus parts, this project is a thrilling journey into the world of static variables, file descriptors, and the art of reading lines, one at a time, with precision.

Mandatory Part: The Blue Meth of File Reading

<p align="center">
<img src="https://media3.giphy.com/media/ko8HPo4iQxcZi/giphy.gif?cid=ecf05e47gsr834ekejf9br1k2qw4lh03echy4ptu3tqc2wn3&ep=v1_gifs_search&rid=giphy.gif&ct=g" width="500">
<p/>

### Function: get_next_line

### Objective:
>Master the art of reading a line from a file descriptor.

### Return:
>The line, crystal clear and pure.
>NULL if the batch is done or an error breaks bad.

### Method:
>Just like cooking the perfect batch of blue meth, this function meticulously reads from a file descriptor until it hits a newline character or reaches the end-of-file.

### Enhancements:
>Juggle multiple file descriptors with a single static variable. Handle them like Heisenberg handled his empire.
Keep the reading continuity on each descriptor as smooth as Mike's operations.
### Usage Scenario:
>Seamlessly switch between file descriptors (e.g., fd 3, 4, and 5) like Gus Fring switches business tactics, without losing the thread.
