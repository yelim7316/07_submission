#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int counter;

void set_counter()
{
	counter = 20;
}

int main(int argc, char *argv[]) {
	
	int i;
	printf("함수 호출 전 i = %d\n", counter);
	set_counter(counter);
	printf("함수 호출 후 i = %d\n", i);
	
	return 0;
	
}
 int inc(int counter){
 	
 	counter++;
 	return counter;
 }
