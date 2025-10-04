#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024
int main(int argc, char** argv) {
<<<<<<< HEAD
    char* str = gets(str); malloc(sizeof(char) * SIZE);
    printf("Введите своё имя: \n");
    scanf("%s", str);
    str = gets(str);
    puts("Привет");
    puts(str);
=======
<<<<<<< HEAD
    char* str = (char*)malloc(sizeof(char) * SIZE);
    printf("Введите своё имя: \n");
    scanf("%s", str);
    puts(" Привет ");
    puts(str);
    free(str);
    return 0;
=======
 char* str = (char*)malloc(sizeof(char) * SIZE);
 printf("Введите своё имя: \n");
 scanf("%s", str);
 puts("Привет");
    puts(str);
 return 0;
>>>>>>> 26b27d5 (Initial commit)
}
>>>>>>> 4dae59d (Исправлено приветствие)
