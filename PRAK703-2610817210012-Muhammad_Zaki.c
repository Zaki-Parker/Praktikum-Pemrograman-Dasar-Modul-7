#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kalimat[1000];
    printf("Kalimat : ");
    fgets(kalimat, 1000, stdin);
    kalimat[strcspn(kalimat, "\n")] = '\0';

    int vokal = 0, konsonan = 0;

    for (int i = 0; i < strlen(kalimat); i++) {
        char c = tolower(kalimat[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            vokal++;
        } else if (c != ' ' && isalpha(c)) {
            konsonan++;
        }
    }

    printf("Jumlah Vokal : %d\n", vokal);
    printf("Jumlah Konsonan : %d\n", konsonan);

    return 0;
}
