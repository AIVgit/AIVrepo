#include <stdio.h>
#include <../plus/HelloCPP.h>

int main (void){
	printf("Hello world from C \n");
	int n = helloFunction();
	printf("%d \n", n);
	return 0;
}
