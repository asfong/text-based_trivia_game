Harry Potter Trivia - A text-based game

Objective:

Traverse through pointer-linked spaces, answering Harry Potter trivia questions along the way. With each correct answer,
the player receives a specific item (e.g. Wizarding Robes). If a player reaches the Leaky Cauldron with the Golden Snitch in tow and before
depleting their strength points, the player wins and enjoys a frothy butterbeer.


Method: an application of object-oriented programming:

- The game includes a Space class, which represents the space the player can be in. The Space class is an abstract class that has a pure virtual functions move(), which is used in every derived class to make the "move" to each space.
- The six spaces a player traverses through is derived from the Space class.


Running the game:

A makefile is included, or compile and run the .cpp extension files.
