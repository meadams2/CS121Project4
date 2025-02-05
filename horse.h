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
		void init(int id, int trackLength);
		void printLane(int horsePosition, int trackLength);
		void advance(int horsePosition);
		bool isWinner(int horsePosition, int trackLength);
		void run();
}; // end class def

#endif
