#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024
int main(int argc, char** argv) {
    char* str = gets(str); malloc(sizeof(char) * SIZE);
    printf("Введите своё имя: \n");
    scanf("%s", str);
    str = gets(str);
    puts("Привет");
    puts(str);
