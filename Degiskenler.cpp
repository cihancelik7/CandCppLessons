//
// Created by Cihan Celik on 18.05.2024.
//
#include <iostream>
using namespace std;

void func() {
    // eger exe dosyasi olarak calistirirsaniz dili turkce yapmak icin kullanilir.
    setlocale(LC_ALL,"Turkish");
    int sayi2 = 10;
    int sayi;

    cout << sayi2<<"\n";
    sayi = 20;
    cout<< "ilk sayiniz: "<<sayi << " ikinci sayiniz: "<< sayi2<<" dir"<< endl;
}
