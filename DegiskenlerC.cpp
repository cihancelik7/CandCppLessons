//
// Created by Cihan Celik on 20.05.2024.
//
#include <cstdio>

void degiskenlerC() {
    int sayi1 = 10 , sayi3, sayi4;
    int sayi2;
    sayi2 = 20;
    printf("%d ve %d \n",sayi1,sayi2);
    // sayisallarda %d ile int degerini yazdirabiliriz
    // c++ da ise cout bu durumu kaldiriyor
    printf("Merhaba\n");
    printf("`*********************Integer veriler C ile tanimlandi*******************************\n");
    // %d = tam sayi yazdiracagim demek, decimal
    printf("`*********************Char ile veri ve veri dizisi C ile tanimlandi*******************************\n");

    char k = 66;
    printf("%c \n",k);
    char k2 = 'C';
    printf("%d\n",k2);// %d ile belirtirsek bize 67 doner eger %c ile ifade edersek bize C doner

    char k3 = 'Cihan Celik';
    printf("%c\n",k3);// sadece k yazdi
    printf("%d\n",k3); // burada ise 107 sonucunu verdi

    char k4[20] = "Cihan Celik";// burada char dizisi olusturacagimizdan bahsettigimiz icin maximum
    // kelime sayisini dizi sayisi olarak gireriz boylece yazdirir
    printf("%s",k4);// aslinda tanimlarken string tanimlama yok fakat yazdirirken var
}




