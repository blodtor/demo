/**
 Демо програмаа на C
*/
#include <stdio.h>
int j = 0;

/**
 Сложение 
 x - пераое число
 y - второе число
 return x + y
*/
int f(int x, int y) {
 int c = 0;
 c = x + y;
 return c;
}

int main(int argc, char * argv []) {
    printf("\tПривет ретро консольщики! 3 + 3 = %i \n", f(3, 3));

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
