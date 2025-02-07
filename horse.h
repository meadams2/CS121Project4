//horse.h

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <string>
#include <random>

class Horse {
	private:
		int position;
		int trackLength;
		int id;
	public:
		Horse();
		void init(int id, int trackLength);
		void printLane();
		void advance();
		bool isWinner();
		void run();
}; // end class def

#endif
