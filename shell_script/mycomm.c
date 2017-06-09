#include <stdio.h>

int main(int args, char *argv[]) {
	for(int i=0; i < args; i++)
		printf("arg %d : %s\n",i,argv[i]);
	return 0;
}
