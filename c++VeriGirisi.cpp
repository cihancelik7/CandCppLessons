//
// Created by Cihan Celik on 21.05.2024.
//
#include <iostream>
using namespace std;
void cppVeriGirisi() {
    char k;
    string metin;
    int sayi1;
    float sayi2;
    double sayi3;

    cout<<"Bir karakter giriniz: ";
    cin>>k;
    cout<<"Bir metin giriniz: ";
    cin>>metin;
   printf("Bir tam sayi giriniz: ");
    scanf("%d",&sayi1);
    cout<<"Bir float degeri giriniz: ";
    cin>>sayi2;
    cout<<"Bir double degeri giriniz: ";
    cin>>sayi3;
    // c ++ in iyi yani su C kodu girerseniz de calistitiir
    // yani cout ve cin yerine printf ve scanf de kullanabiliriz.

    cout << k <<endl ;
    cout << metin <<endl ;
    printf("%d\n",sayi1);
    cout << sayi2 <<endl ;
    cout << sayi3 <<endl ;
    // girilen verinin ram bellek uzerindeki adresini almak icin asagidaki kodu yazmaliyiz
    cout<< &sayi1;//0x16da2b54c
}