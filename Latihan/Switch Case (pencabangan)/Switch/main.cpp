#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Masukkan a: ";
    cin >> a;

    switch (a){
        case 1:
            cout << "a = 1\n";
            break;
        case 2:
            cout << "a = 2\n";
        case 3:
            cout << "a = 3\n";
        case 4:
            cout << "a = 4\n";
        case 5:
            cout << "a = 5\n";
        default:
            cout<<"default \n";
    }
    cout<<"selesai yaa\n";
    return 0;
}
