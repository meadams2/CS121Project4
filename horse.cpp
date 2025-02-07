// horse.cpp
#include <string>
#include <iostream>
#include <random>
#include "horse.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Horse::Horse(){
	 Horse::position = 0;
	 Horse::trackLength = 15;
	 Horse::id = 0;
} //End constructor

void Horse::init(int id, int trackLength){
	Horse::position = 0;
	Horse::id = id;
	Horse::trackLength = trackLength;
} //End init

void Horse::advance(){
	int coin = dist(rd);
	Horse::position += coin;
}//end advance

void Horse::printLane(){
	for (int i = 0; i < trackLength; i++){
		if (i == position){
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
	if (position > trackLength){
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
