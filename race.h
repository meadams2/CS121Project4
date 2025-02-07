// race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <string>
#include "horse.h"

class Race {
	private:
		const int TRACK_LENGTH = 15;
		const static int NUM_HORSES = 5;
		Horse horses[NUM_HORSES];
	public:
		Race();
		void run();
}; //end class definition

#endif
