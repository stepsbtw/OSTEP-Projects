#include <stdio.h>

// ./wcat arquivo1, arquivo2, ...
// out: conteudo dos arquivos linha por linha

int main(int argc, char *argv[]) {
  int i = 1;
  while (argv[i]) {
    FILE *arquivoPtr = fopen(argv[i], "r");
    if (arquivoPtr == NULL) {
      printf("wcat: O arquivo nao pode ser aberto.");
      return 1;
    }
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), arquivoPtr)) {
      printf("%s", buffer);
    }
    fclose(arquivoPtr);
    printf("\n");
    i++;
  }
  return 0;
}
