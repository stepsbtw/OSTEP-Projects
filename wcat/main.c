#include <stdio.h>

int main(){
    FILE *arquivo = fopen("documento.csv", "r");
    if(!arquivo){
        printf("O arquivo nao pode ser aberto.");
    }
    char* buffer = fgets(buffer,23,arquivo);
    printf("%s", buffer);
    return 0;
}
