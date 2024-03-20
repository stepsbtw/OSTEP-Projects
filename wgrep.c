#include <stdio.h>

// wgrep termo arquivo
// out: linhas que contem o termo no arquivo

int main(int argc, char *argv[]) {
  int i = 2;
  while (argv[i]) {
    FILE *arquivoPtr = fopen(argv[i], "r");
    if (!arquivoPtr) {
      printf("O arquivo nao pode ser aberto.");
      return 1;
    }
    // char buffer[100];
    // fgets(buffer, sizeof(buffer), arquivoPtr);
    if (buffer == argv[1]) {
      printf("%s\n", buffer);
    }
  }
  return 0;
}
