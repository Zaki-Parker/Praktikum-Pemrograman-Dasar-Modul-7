#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kata[100], lower[100];
    scanf("%s", kata);

    int len = strlen(kata);
    for (int i = 0; i < len; i++) {
        lower[i] = tolower(kata[i]);
    }
    lower[len] = '\0';

    int palindrom = 1;
    for (int i = 0; i < len / 2; i++) {
        if (lower[i] != lower[len - 1 - i]) {
            palindrom = 0;
            break;
        }
    }

    if (palindrom)
        printf("Kata '%s' adalah palindrom\n", kata);
    else
        printf("Kata '%s' bukan palindrom\n", kata);

    return 0;
}
