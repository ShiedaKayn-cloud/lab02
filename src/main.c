#include "lib.h"

int main()
{
	srand((unsigned int)time(0));
	struct animal animals[ANIMAL_COUNT];

	for (unsigned int i = 0; i < ANIMAL_COUNT; i++) {
		generate_animal(&animals[i]);
	}
	show_animals(animals, ANIMAL_COUNT);

	return 0;
}
