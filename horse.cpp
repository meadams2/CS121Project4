// horse.cpp
#include <string>
#include <iostream>
#include <random>
#include "horse.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Horse::Horse(){
	Horse::horsePosition = 0;
} //End constructor

Horse::init(int id, int trackLength){
	Horse::id = int id;
	Horse::trackLength = int trackLength;
} //End init

Horse::advance(){
	coin = dist(rd);
	if (coin == 1){
		horsePosition ++;
	}//end if
}//end advance

Horse::printLane(){
	for (int i = 0; i < trackLength; i++){
		if (i == horsePosition){
			std::cout << Horse::id;
		}
		else{
			std::cout << "." << std::endl;
		}//end condition
	}//end for loop
}//end printLane

Horse::isWinner(){
	bool result = false;
	if (horsePosition > trackLength){
		std::cout << Horse::id << "is the winner!";
		result = true;
	}//end condition

	return result;
}//end isWinner

Horse::run(){
	bool keepGoing = true;
	while (keepGoing){
		advance();
		printLane();
		if (isWinner()){
			keepGoing = false;
		}//end condition
	}//end while loop
}//end run()



