/* ---------------------------- */ 
/* Penggunaan Call By Reference */ 
 /* Program Tambah Nilai */ 
/* ---------------------------- */ 
#include<iostream> 
using namespace std;
int tambah(int *c, int *d); 

int main() 
{ 
	int a, b; 
	a = 4; 
	b = 6; 
//	clrscr(); 
	cout<<"Nilai Sebelum Pemanggilan Fungsi"<<endl;
	cout<<"\na = "<<a<<" b = "<<b;
	 tambah(&a,&b); 
	cout<<endl; 
	cout<<"\nNilai Setelah Pemanggilan Fungsi"<<endl; 
	cout<<"\na = "<<a<<" b = "<<b; 
} 

int tambah(int *c, int *d) 
{ 
	*c+=7; 
	*d+=5; 
	cout<<endl; 
	cout<<"\nNilai di Akhir Fungsi Tambah()"; 
	cout<<"\nc = "<<*c<<" d = "<<*d; 
}
