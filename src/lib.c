

#include "lib.h"

char *get_animal_type_name(enum animal_type type)
{
	char *result;
	switch (type) {
	case CAT:
		result = "Кіт";
		break;
	case DOG:
		result = "Собака";
		break;
	case COW:
		result = "Корова";
		break;
	case PIG:
		result = "Свиня";
		break;
	case HUMAN:
		result = "Людина";
		break;
	default:
		result = "N/A";
	}
	return result;
}

char *get_animal_sound(enum animal_type type)
{
	char *result;
	switch (type) {
	case CAT:
		result = "Meow";
		break;
	case DOG:
		result = "Woof";
		break;
	case COW:
		result = "Mu";
		break;
	case PIG:
		result = "Xru";
		break;
	case HUMAN:
		result = "ya_yasuo_mainer";
		break;
	default:
		result = "N/A";
	}
	return result;
}

void generate_animal(struct animal *entity)
{
	entity->height = (unsigned int)rand() % INT8_MAX;
	entity->weight = (unsigned int)rand() % INT8_MAX;
	entity->type = (unsigned int)rand() % ANIMAL_TYPE_COUNT;
}

void show_animals(struct animal animals[], unsigned int count)
{
	for (unsigned int i = 0; i < count; i++) {
		printf("Інформація про тварину №%02u: ", i + 1);
		printf("%s: зріст = %u см, маса = %u гр. \n",
		       get_animal_type_name(animals[i].type), animals[i].height,
		       animals[i].weight);
		printf("Звук:%s", get_animal_sound(animals[i].type));
	}
}
