#include <stdio.h>

// "extern" ile başka dosyada tanımlanmış bir değişkeni bildiriyoruz
extern int sayi;

int main() {
    printf("Sayi: %d\n", sayi);
    return 0;
}
