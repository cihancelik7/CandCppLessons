//
// Created by Cihan Celik on 21.05.2024.
//
#include <stdio.h>
void cVeriGirisi() {
    char k;
    char metin[20];
    int sayi1;
    float sayi2;
    double sayi3;
    printf("Bir karanter girin: ");
    scanf("%c",&k);
    printf("Bir Metin Giriniz: ");
    scanf("%s",&metin);
    printf("Bir tam sayi giriniz: ");
    scanf("%d",&sayi1);
    printf("Bir float tipinde sayi giriniz: ");
    scanf("%f",&sayi2);
    printf("Double tipinde bir sayi giriniz: ");
    scanf("%lf",&sayi3);


    printf("%c\n",k);
    printf("%s\n",metin);
    printf("%d\n",sayi1);
    printf("%.2f \n",sayi2);
    printf("%lf",sayi3);



}
