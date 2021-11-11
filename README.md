**Please checkout this repository and create a branch off of master named FirstName_LastName. Complete the following evaluation in C++ and commit your changes to the branch and submit a pull request against master.
We will go over your results and code during your interview.**


1. Create a base `Animal` class with an age, a name, and a function only invocable in derived classes called `Speak`.
2. The Animal will take an age and name upon creation to set its member variables.
3. Derive from the `Animal` class to create a Duck. Use `cout` in `Speak` to say "Quack".
4. The average lifespan of a duck is 10 years, so default to a random age between 0-10 if no other value is specified upon instantiation.
5. If the Duck's age is even, the name is "Lady Luck". Otherwise, their name is "Earl".
6. Create a collection of Animals and fill it with 13 Ducks.
7. Create a function to find and remove the oldest Duck in the collection. Call it 21 times.
8. Create a Goose class derived from the Animal class. Use `cout` in `Speak` to say "HONK".
9. Geese get angrier the older they get. The angrier a goose gets, the longer they honk. Add an extra 'O' for each year of the goose's age.
10. If the Gooses age is even, the name is "Mother Goose". Otherwise, their name is "Bertram".
11. Create a collection of 10 Ducks and 10 Geese.
12. Let's get loud. Call speak on all animals in your collection.
13. Sort the Animal collection in descending order based on their age.
14. Use a function to double check that the collection is sorted.
15. Calculate the total age of all the animals in your collection and use `cout` to output the value.
16. Print out all the animals names in your collection to a file.
