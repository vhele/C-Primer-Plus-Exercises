#include<stdio.h>

void jolly(void);
void deny(void);

int main(void){
	jolly();
	deny();

	return 0;
}

void deny(void){
	printf("Which nobody can deny!\n");
}

void jolly(void){
	printf("For  he's a jolly fellow!\n");
}

