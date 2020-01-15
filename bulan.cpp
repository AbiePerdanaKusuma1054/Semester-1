#include <iostream>
using namespace std;
int main(){
	int hari[12],bulan,tahun;
	for (int i=0;i<=11;i++){
		cout<<"Jumlah hari pada bulan ke "<<i+1<<" ";cin>>hari[i];
	}
	cout<<"Tahun ke berapa ?";cin>>tahun;
	cout<<"\nBulan ke berapa ?";cin>>bulan;
	if (tahun%4==0 && bulan==2){
		hari[1]=29;
		cout<<"\nJumlah hari pada tahun ke "<<tahun;
		cout<<" dan bulan ke "<<bulan;
		cout<<" adalah "<<hari[bulan-1]<<" hari";
	}
	else if (bulan==7 || bulan==8){
		hari[bulan-1]=31;
		cout<<"\nJumlah hari pada tahun ke "<<tahun;
		cout<<" dan bulan ke "<<bulan;
		cout<<" adalah "<<hari[bulan-1]<<" hari";
	}
	else {
		cout<<"\nJumlah hari pada tahun ke "<<tahun;
		cout<<" dan bulan ke "<<bulan;
		cout<<" adalah "<<hari[bulan-1]<<" hari";
	}
	return 0;
}
