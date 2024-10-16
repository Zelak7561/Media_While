#include <stdio.h>

void calc_media(int num_studenti);

int main(void) {
    int num_studenti;
    printf("Inserisci i membri della classe\n");
    scanf("%d", &num_studenti);
    calc_media(num_studenti);
    return 0;
}

void calc_media(int num_studenti) {

    int cont = 0;
    int sum = 0;
    int num = 0;
    int media = 0;

    while (cont < num_studenti) {
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

}


