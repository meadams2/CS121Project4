# CS121 Project 4 - OOP Horse Race

This project is a "rewrite" of the horse race exercise in Project 3. The goal of this project is to explore object-oriented programming using dependencies and headers. 

## Dependencies

- Class called Horses()
- Class called Race()
- Main file

## Make File

- horse.o compiles horse.cpp
- race.o compiles race.cpp
- main.o compiles main.cpp
- game.o compiles horse.o race.o main.o into single executable called horseRace
- clean clears *.o and horseRace
- run runs the program
- git does git status and git add .
- push pushes to git
  
## Horse Class

Private:

- horsePosition will be an integer denoting the horse's position on the track. horsePosition starts at zero. 
- trackLength will be an integer denoting how long the track is. trackLength comes from race class using an init method.
- id will be an integer denoting the horse's number. id comes from race class using an init method. 

Public:

- Horse() is the constructor for the class. Null parameters. 
- init(int id, int trackLength) is the init method and pulls in id and trackLength.
- printLane() is a void and prints the horse's position on the lane with a series of dots and the id. 
- advance() is a void and uses randomization to "flip a coin". If the horse advances, horsePosition gets 1 added to current value. 
- isWinner() is a boolean and checks if the horse's position is at the end of the track. 
- run() is a void and runs each method accordingly. 

### Methods

**advance()**

```
Initialize randomization. Create private variable coin. Coin is a random integer between 0 and 1. 

If coin is 1:
	horsePosition ++
Otherwise:
	Do nothing
```

**printLane()**

```

Start at i = 0. For every i < trackLength:
	if i and horsePosition are the same:
		Print the id of the horse
	else:
		Print "."
```

Expected Output:

```
......4........
```

**isWinner()**

```
result = false
if horsePosition > trackLength:
	Print "<id> is the winner!"
	result = true
else:
	Do nothing

return result
```

**run()**

```
Initialize keepGoing to be true. While keepGoing:
	advance()
	printLane()
	if isWinner():
		keepGoing = false

```

## Race Class

Private:

- horses[] uses Horse() to initialize Horse class. 
- trackLength is a constant integer that denotes the length of the race track. 
- numHorses is a constant integer that denotes the number of horses in the race. 

Public:

- Race() is the constructor
- run() is a method that runs the race and returns nothing. 


Initialize an array of horses using Horses(). Initialize a constant integer
trackLength and set value to 15. Initialize a constant integer numHorses and set value to 5. 

**run()**

```
Start at i = 0. For i in numHorses:
	Horse.run()
```

## Main

```
Race()
Race.run()
```
