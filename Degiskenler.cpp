//
// Created by Cihan Celik on 18.05.2024.
//
// c++ char = karakter m string = metinsel ifadeler
#include <iostream>
using namespace std;

void degiskenler() {
    // eger exe dosyasi olarak calistirirsaniz dili turkce yapmak icin kullanilir.
    setlocale(LC_ALL,"Turkish");
    int sayi2 = 10;
    int sayi;

    cout << sayi2<<"\n";
    sayi = 20;
    cout<< "ilk sayiniz: "<<sayi << " ikinci sayiniz: "<< sayi2<<" dir"<< endl;
    cout<< "*********Degiskenler 1 bitti sayi ve sayi 2 tanimladik ****************"<<endl;

    cout<< "*********Char ve String tanimlama ****************"<<endl;
    char k1 = 'A';
    cout<< k1<< endl;
    cout<< int(k1)<<endl;

    char k2 = 66;//B
    cout<< k2<<endl;

    char k3 = 'ABC';
    cout<<k3<<endl;
    // burada hata vermez sadece uyari verip en sondaki harfi verir yani C yazdirir

    string metin = "Cihan Celik";
    cout<< metin<<endl;





    cout<< "*********C DILINE GECIS ****************"<<endl;
}

