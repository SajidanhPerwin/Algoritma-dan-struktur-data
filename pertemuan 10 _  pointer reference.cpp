#include <iostream>
using namespace std;
//
int main ()
{
	int ilham, amir, *raka;
	ilham = 75;
	amir = ilham;
	raka = &ilham;
	cout << "Nilai Ilham = "<<ilham<<endl;
	cout << "Nilai Amir = "<<amir<<endl;
	cout << "Nilai Raka = "<<raka<<endl;
	getchar();
}

//implementation of changing a value by pointer
int main ()
{
	int yofrie = 93;
	int *hadiansyah;
	//clrscr():
	cout << "Nilai awal yofrie = "<<yofrie<<endl;
	*hadiansyah = 50;
	cout << "Nilai hadiansyah sekarang = "<< *hadiansyah<<endl;
	getchar;	
}
/* implementation of pointer to pointer */
int main ()
{
	int ilham;
	int *raka;
	int **amir;
	//clrscr():
	ilham = 75;
	cout << "Nilai Ilham = "<<ilham<<endl;
	raka = &ilham
	amir = &raka;
	
	cout << "Nilai Raka Hasil Mengakses Ilham = "<<*raka<<endl;
	cout << "Nilai Amir Hasil Mengakses Ilham = "<<amir<<endl;
	getchar;
}
//implementation of pointer in string
int main ()
{
	char bandmetal [] = "SEPUL TURA";
	char *bandpunk = "RANCID";
	
	cout<< "Nama Band Metal : "<<bandmetal<<endl;
	cout<< "Nama Band Punk : "<<bandpunk<<endl;
	bandpunk += 3; // menambah nilai penunjuk / pointer
	cout<< "\nNama Band Metal : "<<bandmetal<<endl;
	cout << "Nama Band Punk : "<<bandpunk
	
	
	
	
	
	
	
	
	
}
