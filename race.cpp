//race.cpp

#include <string>
#include <iostream>
#include "horse.h"
#include "race.h"

Race::Race() {
	for (int i = 0; i < NUM_HORSES; i++){
		horses[i].init(i, TRACK_LENGTH);
	}//end for loop
}//end constructor

void Race::run(){
	bool keepGoing = true;
	while (keepGoing){
		for (int i = 0; i < NUM_HORSES; i++){
			horses[i].advance();
			horses[i].printLane();
			if (horses[i].isWinner()){
				keepGoing = false;
			}//end condition
		}//end for loop
		std::cin.ignore();
	}//end while loop
}//end run



