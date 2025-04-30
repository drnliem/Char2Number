#include <stdio.h>

char chng(int angka) {
    if (angka >= 1 && angka <= 26) {
        return 'A' + angka - 1;
    } else {
        return '?';
    }
}

int main() {
    int angka;
    
    printf("Masukkan angka-angka (akhiri dengan -1):\n");

    while (1) {
        scanf("%d", &angka);
        if (angka == -1) break;

        char huruf = chng(angka);
        printf("%c", huruf);
    }

    printf("\n");
    return 0;
}

