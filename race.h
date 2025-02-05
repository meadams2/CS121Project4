// race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <string>
#include "horse.h"

class Race {
	private:
		Horse horses[];
		const int trackLength;
		const int numHorses;
	public:
		Race();
		void run();
}; //end class definition

#endif
