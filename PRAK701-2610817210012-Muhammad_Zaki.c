#include <stdio.h>
#include <string.h>

int main() {
    char depan[100], belakang[100];

    printf("Nama Depan : ");
    scanf("%s", depan);
    printf("Nama Belakang : ");
    scanf("%s", belakang);

    int panjang = strlen(depan) + strlen(belakang);

    printf("Nama Lengkap : %s %s\n", depan, belakang);
    printf("Panjang Nama (tanpa spasi) : %d\n", panjang);

    return 0;
}
