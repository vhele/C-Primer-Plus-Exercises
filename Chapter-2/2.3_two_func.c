/* two func.c --A file contains the two function */
#include<stdio.h>
void butler(void); /* ANSI/ISO */
int main(void) {
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes,Bring me some tea and writeable DVDs.\n");
	
	return 0;
}

void butler(void){
	printf("You rang, sir?\n");

}
