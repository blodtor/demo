#include <stdio.h>
int main(int argc, char * argv []) {
    printf("\tПривет ретро консольщики!\n");
    int j = 0;
    do {
        printf("Параметр %i = %s\n", j, argv[j]);
        j++; // j = j + 1;
    } while (j < argc);
    return 0;
}