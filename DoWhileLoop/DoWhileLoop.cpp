#include <iostream>
using namespace std;


int main()
{
	int x;
	srand(time(0));

	x = rand() % 10;

	cout << "Nilai Awal X : " << x << endl;

	do
	{
		cout << "Looping Do...While" << endl;
		x = rand() % 10;
		cout << "Nilai X : " << x << endl;
	} while (x > 4);

	cout << "Nilai X Akhir : " << x << endl;

}
