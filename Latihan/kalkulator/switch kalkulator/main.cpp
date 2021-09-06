#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;
    cout <<"Selamat datang di Program kalkulator \n \n"<< endl;

    cout<<"Masukkan nilai pertama: ";
    cin >>a;
    cout<<"Pilih Operator +,-,/,*: ";
    cin >>aritmatika;
    cout<<"\nMasukkan nilai kedua: ";
    cin>> b;

    cout <<"Hasil perhitungan: ";
    cout << a << aritmatika << b;

    switch (aritmatika){
        case '+':
            hasil = a + b ;
            break;
        case '-':
            hasil = a - b ;
            break;
        case '/':
            hasil = a / b ;
            break;
        case '*':
            hasil = a * b ;
            break;
        }
        cout <<"Operator salah "<<endl;

    cout<<" = "<<hasil<<endl;
    cin.get();
    return 0;
}
