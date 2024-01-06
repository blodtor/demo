#include <stdio.h>
int main(int argc, char * argv []) {
    printf("\tПривет ретро консольщики!\n");
    for (int j = 0; j < argc; j = j + 1 ) {
	printf("Параметр %i = %s\n", j, argv[j]);
    }
    return 0;
}