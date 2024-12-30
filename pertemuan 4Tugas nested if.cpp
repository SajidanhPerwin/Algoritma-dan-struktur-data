#include <iostream>
using namespace std;

int main ()
{
	string nama;
	float nilai1, nilai2, nilai3, Rata2;
	
	cout << "Nama Siswa : ";
	cin >> nama;
    cout << "Nilai pertandingan 1: ";
	cin >> nilai1;
	cout << "Nilai pertandingan 2: ";
	cin >> nilai2;
	cout << "Nilai pertandingan 3: ";
	cin >> nilai3;
	    Rata2 = (nilai1 + nilai2 + nilai3) / 3;
		cout << "Memperoleh rata rata nilai " << Rata2 << "dari hasil perlombaan" << endl;
		
		if (Rata2 >= 70) {
			if (Rata2 >= 85) {
				 cout << "selamat " << "nama siswa" << "mendapatkan hadiah komputer core i5" << endl;
			} else {
				cout << "selamat " << "nama siswa" << "mendapatkan hadiah uang sebesar Rp. 2.500,000";
		    }
			
		} else {
			cout << "selamat " << "nama siswa" << "mendapatkan hadiah hinuran";
		}
		
		
		
		
		
		
}
