//race.cpp

#include <string>
#include <iostream>
#include "horse.h"
#include "race.h"

Race::Race(){
	Race::trackLength = 15;
	Race::numHorses = 5;
	Race::horses[i];
	for (int i = 0; i < numHorses; i++){
		Horse::horses[i];
		horses[i] = Horse::init(i + 1, trackLength);
	}//end for loop
}//end constructor

void Race::run(){
	for (int i = 0; i < numHorses; i++){
		Horse::run();
	}//end for loop
}//end run



