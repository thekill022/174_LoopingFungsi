#include <iostream>
using namespace std;

int sisi;

void inputData() 
{
    cout << "Masukkan Ukuran Sisi : ";
    cin >> sisi;
}

int hitungLuas() 
{
    return sisi * sisi;
}

void outputData() 
{
    cout << "Luas Persegi : " << hitungLuas() << endl;
}

int main()
{
    inputData();
    outputData();

    return 0;
}
