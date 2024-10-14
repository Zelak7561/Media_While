#include <stdio.h>

int main(void) {
    int cont = 0;
    int sum = 0;
    int num = 0;
    int media = 0;

    while (cont < 10) {
        cont++;

        printf("Inserire il voto dello studente n:[%d]\n", cont);
        scanf("%d", &num);
        if( num > 0 && num <= 100) sum = sum + num;
        else {
            printf("Numero non valido\n");
            break;
        }

    }

   if(sum != 0) {
       media = sum / 10;
       printf("Media della classe: [%d]\n" , media);
   }

    return 0;
}
