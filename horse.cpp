// horse.cpp
#include <string>
#include <iostream>
#include <random>
#include "horse.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Horse::Horse(){
	 Horse::horsePosition = 0;
	 Horse::trackLength = 15;
	 Horse::id = 0;
} //End constructor

void Horse::init(int id, int trackLength){
	id = id;
	trackLength = trackLength;
} //End init

void Horse::advance(){
	int coin = dist(rd);
	if (coin == 1){
		horsePosition ++;
	}//end if
}//end advance

void Horse::printLane(){
	for (int i = 0; i < trackLength; i++){
		if (i == horsePosition){
			std::cout << id;
		}
		else{
			std::cout << "." ;
		}//end condition
	}//end for loop
	std::cout << std::endl;
}//end printLane

bool Horse::isWinner(){
	bool result = false;
	if (horsePosition > trackLength){
		std::cout << id << "is the winner!";
		result = true;
	}//end condition

	return result;
}//end isWinner

void Horse::run(){
	bool keepGoing = true;
	while (keepGoing){
		advance();
		printLane();
		if (isWinner()){
			keepGoing = false;
		}//end condition
	}//end while loop
}//end run()
