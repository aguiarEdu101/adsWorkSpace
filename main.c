#include <stdio.h>

int main()
{
    int vetorP[150];
    int vetorC[220];
    int i, j;

    for (i = 0; i < 220; i++) {
        printf("Insira a matricula(CN): \n");
        scanf("%d", &vetorC[i]);
    }
    for (j = 0; j < 150; j++) {
        printf("Insira a matricula(PCD): \n");
        scanf("%d", &vetorP[j]);
    }
    printf("As matriculas a seguir constam em ambas as disciplinas: ");
    for(i = 0; i < 150; i++) {
        if (vetorC[i] == vetorP[i]) {
            printf("%d. ", vetorC[i]);
        }
    }


    return 0;
}