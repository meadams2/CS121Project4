//race.cpp

#include <string>
#include <iostream>
#include "horse.h"
#include "race.h"

Race::Race(){
	Race::horses[] = {Horse(), Horse(), Horse(), Horse(), Horse()};
	Race::trackLength = 15;
	Race::numHorses = 5;
}//end constructor

Race::run(){
	for (int i = 0; i < numHorses){
		Horse::run()
	}//end for
}//end run



