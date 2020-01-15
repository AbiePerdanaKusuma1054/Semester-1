#include <iostream>
using namespace std;
int main ()
{
	float a,b,c,d,e,na;
	float v,w,x,y,z;
	char ulangi;
	cout<<"==================Selamat datang mahasiswa/i=================\n";
	cout<<"Ingin tahu nilai mutu anda selama 1 semester\t\t(Y/T)??";cin>>ulangi;
	//=============================================================================
	if(ulangi == 'Y' || ulangi == 'y'){
		cout<<"\n\nMasukan nilai nilai anda!!!\n";
		cout<<"\t\t\t\t\t\t\t_______PENILAIAN______\n";
		cout<<"\tNilai Tugas :";cin>>a;
		cout<<"\t\t\t\t\t\t\t|TUGAS\t\t: 30%|\n";
		cout<<"\tNilai Praktikum :";cin>>b;
		cout<<"\t\t\t\t\t\t\t|PRAKTIKUM\t: 25%|\n";
		cout<<"\tNilai Kuis :";cin>>c;
		cout<<"\t\t\t\t\t\t\t|KUIS\t\t: 10%|\n";
		cout<<"\tNilai UTS :";cin>>d;
		cout<<"\t\t\t\t\t\t\t|UTS\t\t: 20%|\n";
		cout<<"\tNilai UAS :";cin>>e;
		cout<<"\t\t\t\t\t\t\t|UAS\t\t: 25%|\n";
		cout<<"\t\t\t\t\t\t\t----------------------\n";
		v=a*0.2;
		w=b*0.25;
		x=c*0.1;
		y=d*0.2;
		z=e*0.25;
		na=v+w+x+y+z;
		cout<<"Nilai Akhir Anda :"<<na;
		cout<<endl;
		//=====================================================================
			if(na>=76 && na<100){
				cout<<"Nilai Mutu Anda : A";
			}
			else if(na>=71 && na<76){
				cout<<"Nilai Mutu Anda : B+";
			}
			else if(na>=66 && na<71){
				cout<<"Nilai Mutu Anda : B";
			}
			else if(na>=61 && na<66){
				cout<<"Nilai Mutu Anda : C+";
			}
			else if(na>=56 && na<61){
				cout<<"Nilai Mutu Anda : C";
			}
			else if(na>=51 && na<56){
				cout<<"Nilai Mutu Anda : D";
			}
			else if(na>=0 && na<51){
				cout<<"Nilai Mutu Anda : E";
			}	
		//=====================================================================
	}
	else{
		cout<<"keluar Aaeeee!!!!";
	}
	//=============================================================================
	return 0;
}
