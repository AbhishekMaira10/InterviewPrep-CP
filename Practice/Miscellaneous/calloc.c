#include <stdlib.h>
#include <stdio.h>
#define BUFFER_SIZE 10

int main(){
float * buffer;
int i;

if ((buffer = (float*)calloc(BUFFER_SIZE, sizeof(float))) == NULL){
	printf("out of memory\n");
	exit(1);
	}

for (i=0; i < BUFFER_SIZE; i++)
	printf(“buffer[%d] = %f\n”, i, buffer[i]);

return 0;
}

