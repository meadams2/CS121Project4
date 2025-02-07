// race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <string>
#include "horse.h"

class Race {
	private:
		Horse horses[NUM_HORSES];
		const int TRACK_LENGTH;
		const static int NUM_HORSES;
	public:
		Race();
		void run();
}; //end class definition

#endif
