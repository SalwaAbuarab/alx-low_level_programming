#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - decribe the dog boy or girl
 *
 * @name: name of dog
 * @age: how old is that dog?
 * @owner: who is the lucky person that gets to live with that dog?
 *
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H */
