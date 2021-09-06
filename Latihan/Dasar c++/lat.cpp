#include <iostream>

using namespace std;

int main()
{
/*Teknik
printing
*/
    cout <<"halo kawan"<< endl;
    cout <<"halo kawan \n";

//Variabel
    int a = 1; //variabel

    cout << a << endl;

//Deklarasi / memasukkan nilai dalam console
    int b;
    cout << "Masukkan nilai : ";
    cin >> b ; // jika cin maka >> dan jika cout maka <<
    cout << "Nilai yang anda masukkan adalah : " ;
    cout << b << endl;

//Aritmatika
    int c = 10;
    int d = 5;

    int hasil;
    //operatornya +,-,*,/,%

    //penjumlahan
    hasil = c + d;
    cout << c <<" + "<< d <<" = "<< hasil << endl;

    //pengurangan
    hasil = c - d;
    cout << c <<" - "<< d <<" = "<< hasil << endl;

    //penjumlahan
    hasil = c / d;
    cout << c <<" / "<< d <<" = "<< hasil << endl;

    //modulus
    hasil = c % d;
    cout << c <<" % "<< d <<" = "<< hasil << endl;

//Komparasi
    int e = 2;
    int f = 2;
    bool hasil1, hasil2;

    //sebanding
    hasil1 = (e == f);

    //Tidak sebanding
    hasil2 = (e != f);


    cout << hasil1 << endl;
    cout << hasil2 << endl;
    cin.get();
    return 0;



}
