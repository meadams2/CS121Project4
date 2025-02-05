// horse.cpp
#include <string>
#include <iostream>
#include <random>
#include "horse.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Horse::Horse(){
	int Horse::horsePosition = 0;
} //End constructor

void Horse::init(int id, int trackLength){
	int Horse::id = id;
	int Horse::trackLength = trackLength;
} //End init

void Horse::advance(int horsePosition){
	int coin = dist(rd);
	if (coin == 1){
		horsePosition ++;
	}//end if
}//end advance

void Horse::printLane(int horsePosition, int trackLength){
	for (int i = 0; i < trackLength; i++){
		if (i == horsePosition){
			std::cout << Horse::id;
		}
		else{
			std::cout << "." << std::endl;
		}//end condition
	}//end for loop
}//end printLane

bool Horse::isWinner(int horsePosition, int trackLength){
	bool result = false;
	if (horsePosition > trackLength){
		std::cout << Horse::id << "is the winner!";
		result = true;
	}//end condition

	return result;
}//end isWinner

void Horse::run(){
	bool keepGoing = true;
	while (keepGoing){
		Horse::advance(int horsePosition);
		Horse::printLane(int horsePosition, int trackLength);
		if (Horse::isWinner(int horsePosition, int trackLength)){
			keepGoing = false;
		}//end condition
	}//end while loop
}//end run()



