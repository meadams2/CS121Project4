game: horse.o race.o main.o
	g++ -g horse.o race.o main.o -o horseRace

main.o: horse.h race.h main.cpp
	g++ -c -g main.cpp

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp

race.o: horse.h race.h race.cpp
	g++ -c -g race.cpp

clean:
	rm *.o
	rm game

run: game
	./game

debug: game
	gdb game

git: 
	git status
	git add .
