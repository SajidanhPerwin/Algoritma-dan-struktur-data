#include <iosream>
using namespace std;
int main 
{
	float pendapatan, jasa=0, komisis=0, total=0;
	//clrscr();
	cout<<"pendapatan hari ini Rp.";
	cin>> pendapatan;
	if (pendapatan >=0 && pendapatan <=200000){
	jasa=10000;
	komisi=0.1*pendapatan;
}
else if(pendapatan<=500000)
jas=20000;
komisi=0,5*pendapatan;
}
else{
	jasa=30000;
	komisi=0.2*pendapatan;
}
/* menghitung total */
total=komisi+jasa;
cout<<"uang jasa Rp. "<<jasa<<endl;
cout<<"uang komisi Rp. "<<komisi<<endl;
cout<<=====================================endl;
cout<<"Hasil total Rp. "<<total<<endl;
gettchar();
}



	

	
}
