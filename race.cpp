//race.cpp

#include <string>
#include <iostream>
#include "horse.h"
#include "race.h"

Race::Race() : trackLength(15), numHorses(5){
//	trackLength = 15;
//	numHorses = 5;
	horses[numHorses];
	for (int i = 0; i < numHorses; i++){
		horse[i] = Horse()
		Horse::init(i, trackLength);
	}//end for loop
}//end constructor

void Race::run(){
	bool keepGoing = true;
	while (keepGoing){
		for (int i = 0; i < numHorses; i++){
			Horse::advance();
			Horse::printLane();
			if (Horse::isWinner()){
				std::cout << "Horse" << i << "is the winner!";
				keepGoing = false;
			}//end condition
		}//end for loop
		std::cin.ignore();
	}//end while loop
}//end run



