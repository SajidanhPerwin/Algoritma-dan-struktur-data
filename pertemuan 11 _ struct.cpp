#include <iostream>
using namespace std;

struct mhs
{
	char nama[20], nim[10], matkul[15];
	int sks;
};
struct mhs bayar [2];

int main ()
{
	int bts,var, tetap;
	for(int i=0; i<2; i++)
	{
		//input data
		cout << "--------------------------------\n";
		cout << "\ninput";
		cout << "\n\n------------------------------------\n";
		cout << "\nNama mhs \t= ";
		cin >> bayar[i].nama;
		cout << "NIM \t\t= ";
		cin >> bayar[i].nim;
		cout << "Mata Kuliah  \t= ";
		cin >> bayar[i].matkul;
		input :
			
			if(bayar[i].sks <0) // bayar[i].matkul < 0);
			{
				cout << "program tidak sesuai\n";
				goto input;
			} cout << "Jumlah sks  \t= ";
			cin >> bayar[i].sks;
			
			if(bayar[i].sks==0) //bayar[i].sks==1);
			{
				tetap = 250000;
				var = bayar[i].sks * 250000;
			}else if(bayar[i].sks==2);
			{
				tetap = 300000;
				var = bayar[i].sks * 300000;
			}cout << endl;
			
		//output data 
		cout << "\n\n----------------------------------------------\n";
		cout << "\noutput";
		cout << "\n\n------------------------------------------------\n";
		cout << "\nNama mhs\t= " << bayar[i].nama;
		cout << "\nNIM\t\t= " << bayar[i].nim;
		cout << "\nMata Kuliah\t= " << bayar[i].matkul;
		cout << "\nJumlah sks\t= " << bayar[i].sks;
		cout << "\nSPP tetap\t= " << tetap;
		cout << "\nSPP variabel\t= " << var;
				
	}
}
