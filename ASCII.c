#include <stdio.h>
#include <ctype.h>

int main() {
    char karakter;
    int okunan_karakter_sayisi;

    printf("Bir karakter giriniz: ");
    
    okunan_karakter_sayisi = scanf(" %c", &karakter);

    if (okunan_karakter_sayisi == 1) {
        
        if (isprint(karakter)) {
            printf("Girdiginiz '%c' karakterinin ASCII kodu: %d\n", karakter, karakter);
            printf("Hex (onaltilik) degeri: 0x%X\n", karakter);
            printf("Octal (sekizlik) degeri: %o\n", karakter);
        } else {
            
            printf("Girdiginiz karakter yazdirilamayan bir karakterdir.\n");
            printf("ASCII kodu: %d\n", karakter);
        }
    } else {
        printf("Hata: Gecersiz giris yaptınız. Lutfen tek bir karakter girin.\n");
    }

    return 0;
}
