# cmsc240-mod-6
Module #6 - My First Starship Launch

### Instructions

For this module, you are simulating a space ship launch. The [header file](space_ship.h) and .cpp files are given to you with a simple [Makefile](Makefile). Currently the ship does not run, as not all of the components are ready for launch. 

1. Edit the .cpp files given so that the starship launches with all components ready. 

2. Edit the [Makefile](Makefile) so that it includes a target output for each componenet. Have each component create an object file. DO NOT remove or change the original `all` and `clean` targets given. Do not rearrange their order either -- `all` should stay at the top!

3. Edit [ship_launch.cpp](ship_launch.cpp) so that it takes in as a command line argument an int value to countdown from. Make the default value 3 if no number is given. If a negative value is given, change it to 3 instead.

4. Write the final target `ship_launch` that compiles all of the object files and the [ship_launch.cpp](ship_launch.cpp) together to create an executable program called `ship_launch`.

5. Create a README file with a section on how to run the [Makefile](Makefile) targets, what each target compiles and outputs, and how execute the program with or without arguments (with example usage). Also add a section if any AI or references were used. At the top should be a section with your name, date, and the program description.

### Requirements

[3pt] - All components show up as ready in the ship_launch program

[3pt] - Targets in the Makefile for every component that outputs an object file (.o) and the executable target program

[1pt] - `all` and `clean` targets unchanged in the Makefile

[1pt] - ship_launch program takes in an integer value as an optional argument to set the countdown starting point

[2pt] - README.md file contains the sections specified. 

**10 pts total**
