#include <stdio.h>

int chng(char huruf) {
    if (huruf >= 'a' && huruf <= 'z') {
        return huruf - 'a' + 1;
    } else if (huruf >= 'A' && huruf <= 'Z') {
        return huruf - 'A' + 1;
    } else {
        return 0; 
    }
}

int main() {
    char teks[100];

    printf("Masukkan teks: ");
    scanf("%99s", teks);

    printf("Angka dari huruf-huruf tersebut:\n");
    for (int i = 0; teks[i] != '\0'; i++) {
        int angka = chng(teks[i]);
        if (angka > 0) {
            printf("%d ", angka);
        }
    }

    printf("\n");
    return 0;
}

