#include <iostream>
using namespace std;


int main()
{
	int i;
	int arr[5];

	for (i = 0; i < 5; i++)
	{
		cout << i << " Hello World" << endl;
	}

	cout << "Nilai i Terakhir : " << i << endl;

	cout << endl;
	cout << "===============" << endl;
	cout << "Input Isi Array" << endl;
	cout << "===============" << endl;

	for (i = 0; i < 5; i++)
	{
		cout << "Masukkan nilai array index ke-" << i << " : ";
		cin >> arr[i];
	}

	cout << endl;
	cout << "================" << endl;
	cout << "Output Isi Array" << endl;
	cout << "================" << endl;

	for (i = 0; i < 5; i++)
	{
		cout << "Nilai Array index ke-" << i << " : " << arr[i] << endl;
	}

	return 0;
}
