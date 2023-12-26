# Basic(beginner) Problem Solving with C++

This repository contains my solutions to various programming problems and exercises. I've chosen C++ as the primary programming language for solving these problems.

## Table of Contents

- [Directory Structure](#directory-structure)
- [Running the Solutions](#running-the-solutions)
- [Installing Required Packages](#installing-required-packages)
## Directory Structure

The repository is organized into directories based on the source of the problems or categories. Each directory contains the C++ source code files and any associated resources.

- **/problem**
    - `problem.cpp`
    - `README.md` (problem description)
    - `Makefile`
    - `...`
- `...`

Feel free to explore the directories to find solutions to specific problems.

## Running the Solutions

To run a C++ solution, you can use a C++ compiler such as g++. There's a Makefile in the `problem` directory, you can use it for compilation.

### Using Makefile

You can build and run `solutions` using:

```zsh
make folder=folder_name
```

or you can navigate to the `problem` directory and use the following commands:

```zsh
# Compile the solution
make

# Run the compiled program
./output_filename

# Clean the compiled files
make clean
```

Alternavely

You can compile manually and run a solution, you can use a C++ compiler such as g++.

```zsh
g++ input_filename.cpp -o output_filename
```

### Installing Required Packages

Before using the `make` command, ensure that you have the necessary packages installed. You can install them using the following commands:

#### For Debian/Ubuntu-based systems:

```zsh
sudo apt-get update
sudo apt-get install build-essential
```

#### For Red Hat/Fedora-based systems:

```zsh
sudo dnf groupinstall "Development Tools"
```