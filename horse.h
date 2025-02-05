//horse.h

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <string>

class Horse {
	private:
		int horsePosition;
		int trackLength;
		int id;
	public:
		Horse();
		init(int id, int trackLength);
		void printLane();
		void advance();
		bool isWinner();
		void run();
}; // end class def

#endif
