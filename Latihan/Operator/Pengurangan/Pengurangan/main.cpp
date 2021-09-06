#include <iostream>

using namespace std;
int main (){
    int tahun, tgl_lahir, umur;

    cout<<"Masukkan tahun : ";
    cin>>tahun;
    cout<<"masukkan tgl lahir : ";
    cin>>tgl_lahir;
    umur = tahun - tgl_lahir;

    cout<<"Sekarang Tahun :"<<tahun<<endl;
    cout<<"Saya lahir di tahun :"<<tgl_lahir<<endl;
    cout<<"Umur saya adalah : "<<umur<<" Tahun"<<endl;


}
