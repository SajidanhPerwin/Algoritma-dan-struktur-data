#include <iostream>
using namespace std;

int main()
{
	string Nama;
	int nilai1, nilai2, nilai3, Rata2;
	
	
	cout << "nama Siswa ";
	cin >> Nama;
	cout << "Nilai pertandingan 1: ";
	cin >> nilai1;
	cout << "Nilai pertandingan 2: ";
	cin >> nilai2;
	cout << "Nilai pertandingan 3: ";
	cin >> nilai3;
	
	Rata2 = (nilai1 + nilai2 + nilai3) / 3;
	cout << "Siswa yang bernama " << Nama << endl;
	cout << "Memperoleh rata rata nilai " << Rata2 << "dari hasil perlombaan" << endl;
	

	switch (Rata2)
	{
		case 1 ... 69:
			cout << "selamat anda mendapatkan hadiah koputer core i5";
			break;
		case 70 ... 84:
			cout << "selamat anda mendapatkan hadiah uang sebesar Rp. 2,500,000";
			break;
		case 85 ... 100 :
			cout << "selamat anda mendapatkan hadiah hiburan";
				break;
	}
	
	
}
