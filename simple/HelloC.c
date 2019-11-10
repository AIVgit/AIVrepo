#include <stdio.h>
#include <../plus/HelloCPP.h>

void fC(int b){
	printf("callbackFunction %d \n", b);
}

int main (void){
	printf("Hello world from C \n");
	callFunctionX(fC);
	int n = helloFunction();
	printf("%d \n", n);
	return 0;
}
