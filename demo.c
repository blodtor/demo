#include <stdio.h>
int main(int argc, char * argv []) {
    printf("\tПривет ретро консольщики!\n");
    int j = 0;
    while (j < argc) {
        printf("Параметр %i = %s\n", j, argv[j]);
        j++; // j = j + 1;
    }
    return 0;
}