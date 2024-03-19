#include <iostream>
using namespace std;

int main()
{

	int x;
	srand(time(0));
	x = rand() % 10;

	cout << "Nilai Awal X : " << x << endl;

	while (x > 4)
	{
		cout << "Perulangan while" << endl;
		x = rand() % 10;

		cout << "Nilai X : " << x << endl;
	}

	cout << "Nilai Akhir X : " << x << endl;

	return 0;

}
