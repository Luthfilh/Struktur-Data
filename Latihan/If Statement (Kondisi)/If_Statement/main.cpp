#include <iostream>

using namespace std;

int main()
{
    int a;
    cout <<"Masukkan a: ";
    cin >> a;

    switch (a == 5){
        cout <<"Benar 5"<< endl;
    }
    else if (a == 3){
        cout <<"benar 3"<< endl;
    }
    else if (a == 1){
        cout <<"benar 1 \n";
    }
    else {
        cout <<"nilai ini bukan 5,3,1 \n";
    }
    cout <<"selesai \n";
    return 0;
}
