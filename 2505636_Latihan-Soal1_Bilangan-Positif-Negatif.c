#include <stdio.h>
#include <stdlib.h>

int main() {

    int bilangan;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan < 0 ) {
        printf("Bilangan Negatif");
    } else if (bilangan > 0) {
        printf("Bilangan Positif");
    } else {
        printf("Bilangan Nol");
    }

    return 0;
}