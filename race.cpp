//race.cpp

#include <string>
#include <iostream>
#include "horse.h"
#include "race.h"

Race::Race() {
	for (int nh = 0; nh < NUM_HORSES; nh++){
		horses[nh].init(nh, TRACK_LENGTH);
	}//end for loop
}//end constructor

void Race::run(){
	bool keepGoing = true;
	while (keepGoing){
		for (int nh  = 0; nh < NUM_HORSES; nh++){
			horses[nh].advance();
			horses[nh].printLane();
			if (horses[nh].isWinner()){
				keepGoing = false;
			}//end condition
		}//end for loop
		std::cout << "Press ENTER to Continue" << std::endl;
		std::cin.ignore();
	}//end while loop
}//end run



