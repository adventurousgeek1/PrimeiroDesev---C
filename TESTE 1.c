#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){

    int Dias;
    float Anos;
        printf("entre como numero de dias: ");
        /* ENTRADA DE DADOS*/
        scanf("%d", &Dias);

            Anos=Dias/365.25; //conversao Dias->Anos
        printf("\n\n%d dias equivalem a %f anos. \n, Dias, Anos");
    system("pause");

    return 0;
}
