#ifndef SUPERDRACO_H
#define SUPERDRACO_H

class SuperDraco : Thruster {
	public:
		SuperDraco();
		SuperDraco(int p);
		void ~superDraco();
		void shutDown();
		void fireUp();
};

#endif
