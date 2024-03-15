#include <stdio.h>

FILE *fp = fopen("main.c", "r");
if (fp == NULL) {
    printf("cannot open file\n");
    exit(1);
}

// fopen("arquivo", "modo/oque fazer");
// r = read , w = write

buffer = fgets();
printf("%s", buffer);