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
	printf("�Լ� ȣ�� �� i = %d\n", counter);
	set_counter(counter);
	printf("�Լ� ȣ�� �� i = %d\n", i);
	
	return 0;
	
}
 int inc(int counter){
 	
 	counter++;
 	return counter;
 }
