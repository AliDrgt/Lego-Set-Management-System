# Lego Set Management System

This project is a C program that manages a collection of Lego sets. It allows for adding new Lego sets, displaying all sets in the collection, and searching for a specific set by its set number.

## Features

- Add new Lego sets to the collection.
- Display all Lego sets in the collection.
- Search for a specific Lego set by its set number.

## Usage

### Compiling the Code

To compile the code, use the following command:

"gcc -o lego_manager lego_manager.c"

### Running the Program

Run the compiled program using:

"./lego_manager"

### Program Flow

1. The program initializes an empty collection of Lego sets.
2. The user is presented with a menu of options to manage the collection:
   - Add a new Lego set
   - Display all Lego sets
   - Search for a specific Lego set
   - Exit the program
3. The user can perform operations by entering the corresponding number and following the prompts.

## Example

Here's an example of how the program works:

1. When prompted, choose an option from the menu by entering the corresponding number.
   - Example: To add a new Lego set, enter "2" and follow the prompts to enter the set name, set number, piece number, and set year.
2. The program performs the requested operation and displays relevant information.
3. The user can continue performing operations or choose to exit the program.

## Code Overview

### Structures

- `Legos`: Represents a Lego set with the following attributes:
  - `setName`: Name of the set.
  - `setNo`: Set number.
  - `pieceNo`: Number of pieces in the set.
  - `setYear`: Year the set was released.
- `Sets`: Represents a collection of Lego sets with the following attributes:
  - `setsofLegos`: Array of `Legos` structures.
  - `currentSetno`: Current number of sets in the collection.

### Functions

- `addNewLego`: Prompts the user to enter the details of a new Lego set and adds it to the collection.
- `displayLegos`: Displays all Lego sets in the collection.
- `findLego`: Searches for a Lego set by its set number and displays its details if found.

### Notes

- The program maintains a collection of Lego sets using an array of `Legos` structures.
- The user can add up to 20 Lego sets to the collection.
- The program provides a simple text-based interface for managing the collection.

## License

This project was created by Ali Fatih Durgut.
