#include <iostream>
#include <string>
using namespace std;

int main()

{
	int a,b,banyak, menu, totalbayar, pajak ;
	const int z = 3;
	int potong[z];
	int harga[z] = {25000, 20000, 15000};
	char kode[z] = { 'D', 'P', 'S'} ;
	char jenis[z];
	string arti[z] = { "Dada", "Paha", "Sayap"} ;
	
	cout << "GROBAK FRIED CHICKEN" << endl;
	cout << "=====================";
	cout << "\nKode    Jenis    Harga" << endl;
	cout << "============================" << endl;
	
	for ( a = 0; a < z; a++){
		
		cout << kode[a] << "\t" << arti[a] << "\tRp. " << harga[a] << endl;	
}


	cout << "\n============================";
	
	cout << "\n\nBanyak jenis : ";
	cin >> banyak;
	
		for ( a = 0; a < banyak; a++)
		{
			cout << " \nJenis ke = " << a + 1 << endl;
			cout << "Jenis potong [D/P/S] : ";
			cin >> jenis[a];
			cout << "Banyak potong        : ";
			cin >> potong[a];
		}
	
		
	cout << "\n\n\t         GEROBAK FRIED CHICKEN "<< endl;
	cout << "===================================================" << endl;
	cout << "No.     Jenis           Harga           Banyak          Jumlah" << endl;
	cout << "        Potong          Satuan          Beli            Harga" << endl;
	cout << "===================================================" << endl;

	for ( a = 0; a < banyak; a++){
		for ( b = 0; b < z; b++){
			if ( kode[b] == jenis[a]){
			menu = b;
			break;	
			}
		}
		cout << a + 1 << "\t"<< arti[menu] << "\t\tRp " << harga[menu] << "\t" << potong[a] << "\t\tRp " << harga[menu]*potong[a] << endl;
		totalbayar = harga[menu] * potong[a];
	}
	int tax = totalbayar * 10/100;
	int totalbayarsetelahpajak = totalbayar + tax;
	
	cout << "\n===============================================" << endl;
	cout << "\t\t\t\t\tjumlah bayar   Rp " << totalbayar << endl;
	cout << "\t\t\t\t\tPajak 10%      Rp " << tax << endl;
	cout << "\t\t\t\t\ttotalbayar     Rp" << totalbayarsetelahpajak << endl;
		
	return 0;
	
}
