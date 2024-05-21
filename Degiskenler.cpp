//
// Created by Cihan Celik on 18.05.2024.
//
// c++ char = karakter m string = metinsel ifadeler
#include <iomanip>
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

    cout<< "*********float ve double tanimlama ****************"<<endl;

   double sonuc ;
    double s1,t1;
    s1 = 1.0 / 81;
    sonuc = 1.0/2.0;
    cout<< fixed<< setprecision(10)<<sonuc<<endl;
    // burada virgulden sonra 6 basamak oldugu halde setPrecision komutunu cagirirsak \
    // 10 basamaga kadar olan sayilari ver demek

    // eger sayidan sonraki 0 lari da gormek istiyorsak fixed eklememiz gerekir

    // double ile float arasindaki fark float daha az sayi barindirir double daha fazla

    for (int i=0; i<729;i++) {
        t1 = t1+s1;
    }
    cout<<setprecision(10)<<t1<<endl;

    cout<< "*********C DILINE GECIS ****************"<<endl;
}

