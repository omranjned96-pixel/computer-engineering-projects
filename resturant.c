#include <stdio.h>

int main() {
    int secimYemek, secimIcecek, secimTatli;
    int adetYemek = 0, adetIcecek = 0, adetTatli = 0;
    float fiyatYemek = 0, fiyatIcecek = 0, fiyatTatli = 0;
    float toplam = 0, indirim = 0, odenecek = 0;
    int yas, ogrenciMi;

    printf("************ YEMEK KATEGORISI ************\n");
    printf("1. Tost (50 TL)\n2. Gozleme (70 TL)\n3. Patates Kizartmasi (40 TL)\n");
   printf("Bir secim yap ( Hicbiri=0 ): ");
    scanf("%d", &secimYemek);

    if (secimYemek == 1) {
        fiyatYemek = 50;
        printf("Kac adet tost almak istersiniz? ");
        scanf("%d", &adetYemek);
    }
    else if (secimYemek == 2) {
        fiyatYemek = 70;
        printf("Kac adet gozleme almak isteyorsun? ");
        scanf("%d", &adetYemek);
    }
    else if (secimYemek == 3) {
        fiyatYemek = 40;
        printf("Kac adet patates almak isteyorsun? ");
        scanf("%d", &adetYemek);
    }
    else {
        adetYemek = 0;
        fiyatYemek = 0;
    }

    printf("\n************ ÝCECEK KATEGORISI ************\n");
    printf("1. Cay (10 TL)\n2. Kahve (15 TL)\n3. Soda (12 TL)\n");
   printf("Bir secim yap ( Hicbiri=0 ): ");
    scanf("%d", &secimIcecek);

    if (secimIcecek == 1) {
        fiyatIcecek = 10;
        printf("Kac adet cay almak isteyorsun? ");
        scanf("%d", &adetIcecek);
    }
    else if (secimIcecek == 2) {
        fiyatIcecek = 15;
        printf("Kac adet kahve almak isteyorsun? ");
        scanf("%d", &adetIcecek);
    }
    else if (secimIcecek == 3) {
        fiyatIcecek = 12;
        printf("Kac adet soda almak isteyorsun? ");
        scanf("%d", &adetIcecek);
    }
    else {
        adetIcecek = 0;
        fiyatIcecek = 0;
    }

    printf("\n*************** TATLI KATEGORISI ***************\n");
    printf("1. Kek (25 TL)\n2. Dondurma (30 TL)\n3. Baklava (45 TL)\n");
    printf("Bir secim yap ( Hicbiri=0 ): ");
    scanf("%d", &secimTatli);

    if (secimTatli == 1) {
        fiyatTatli = 25;
        printf("Kac adet kek almak isteyorsun? ");
        scanf("%d", &adetTatli);
    }
    else if (secimTatli == 2) {
        fiyatTatli = 30;
        printf("Kac adet dondurma almak isteyorsun? ");
        scanf("%d", &adetTatli);
    }
    else if (secimTatli == 3) {
        fiyatTatli = 45;
        printf("Kaç adet baklava almak isteyorsun? ");
        scanf("%d", &adetTatli);
    }
    else {
        adetTatli = 0;
        fiyatTatli = 0;
    }


    toplam = (adetYemek * fiyatYemek) + (adetIcecek * fiyatIcecek) + (adetTatli * fiyatTatli);

    printf("\nYasininiz giriniz: ");
    scanf("%d", &yas);
    printf("ogrenci misiniz? (1 = Evet, 0 = Hayir): ");
    scanf("%d", &ogrenciMi);


    if (yas < 18) {
        indirim = toplam * 0.15;
        printf("\n18 yas alti kampanya: %%15 indirim uygulandi.\n");
    }
    else if (ogrenciMi == 1) {
        indirim = toplam * 0.10;
        printf("\n ogrenci kampanya: %%10 indirim uygulandi.\n");
    }
    else if (yas > 65 && secimIcecek == 1) {
        indirim = fiyatIcecek * adetIcecek;
        printf("\n65 yaþ ustu cay ucretsiz kampanya uygulandi.\n");
    }
    else {
        indirim = 0;
        printf("\nHicbir kampanya uygulanmadi.\n");
    }

    odenecek = toplam - indirim;

    printf("\n=== SIPARIS OZETI ===\n");
    if (adetYemek > 0)
        printf("Yemek: %d adet (%.2f TL)\n", adetYemek, fiyatYemek * adetYemek);
    if (adetIcecek > 0)
        printf("İcecek: %d adet (%.2f TL)\n", adetIcecek, fiyatIcecek * adetIcecek);
    if (adetTatli > 0)
        printf("Tatli: %d adet (%.2f TL)\n", adetTatli, fiyatTatli * adetTatli);

    printf("\nÝndirimsiz Toplam Fiyat: %.2f TL", toplam);
    printf("\nYapilan Ýndirim: %.2f TL", indirim);
    printf("\nodenicek Tutar: %.2f TL\n", odenecek);

    printf("\nTesekkur ederiz, afiyet olsun!\n");

    return 0;
}
