#include <iostream>
using namespace std;

int panjang, lebar;

void input() {
    cout << "Masukkan Panjang Persegi : ";
    cin >> panjang;
    cout << "Masukkan Lebar Persegi : ";
    cin >> lebar;
}

int luasPersegi() {
    return panjang * lebar;
}

void output() {
    cout << "Luas Persegi Panjang : " << luasPersegi() << endl;
}

int main()
{
    
    input();
    output();

    return 0;

}
