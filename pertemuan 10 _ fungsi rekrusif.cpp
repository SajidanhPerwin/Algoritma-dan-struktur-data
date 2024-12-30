#include <iostream>
using namespace std;


int pangkat(int b, int c )
{
	if (c == 0)
	{
		return 1;
	}
	return b * pangkat(b, c-1);
}
int main ()
{
	int x, y;
	cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF\n";
	cout << "\nMasukan Nilai X= ";
	cin >> x;
	cout << "Masukan Nilai Y = ";
	cin >> y;
	
	cout << endl;
	
	cout << x << "Dipangkatkan " << y << " = " <<pangkat(x,y);
	
	return 0;
}
