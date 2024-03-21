#include <stdio.h>
#include <stdlib.h>

// Diferencas entre o fgets e o getline

int main(int argc, char *argv[]) {
  char buffer[100];
  fgets(buffer, sizeof(buffer), stdin);
  size_t n = 10;
  char *buff = malloc(sizeof(char) * n);
  getline(&buff, &n, stdin);
  printf("%s E %s", buffer, buff);
  return 0;
}