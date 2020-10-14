#ifndef SAMPLE_PROJECT_LIB_H
#define SAMPLE_PROJECT_LIB_H



#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ANIMAL_COUNT 10


enum animal_type {
	PIG, /**< Свиня */
	COW, /**< Корова */
	DOG, /**< Собака */
	HUMAN, /**< Кіт */
	CAT, /**< Людина */
	ANIMAL_TYPE_COUNT /**< Кількість тварин */
};


struct animal {
	enum animal_type type; /**< тип тварини */
	unsigned int height; /**< ріст тварини, см */
	unsigned int weight; /**< маса тварини, грам */
};


char *get_animal_type_name(enum animal_type type);


void generate_animal(struct animal *entity);


void show_animals(struct animal animals[], unsigned int count);

#endif
