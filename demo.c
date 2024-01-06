#include <stdio.h>
int main(int argc, char * argv []) {
    printf("\tПривет ретро консольщики!\n");
    int j = 0;
    do {
        if (j > 0) { 
            // если j > 0 значит это параметр переданый программе
            printf("Параметр %i = %s\n", j, argv[j]);
        } else if (j == 0) {
           // еслт j <= 0 то это имя программы
           printf("Имя программы: %s\n", argv[j]);
        }
        j++; // j = j + 1;
    } while (j < argc);
    return 0;
}