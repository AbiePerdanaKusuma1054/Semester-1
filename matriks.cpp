#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int i,j,matriks[3][3]={{0,6,4},{1,1,6},{0,0,1}},det;
	cout<<"\t\t\tPenghitung determinan matriks 3×3?"<<endl<<endl<<endl;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
		cout<<" Input matriks baris ke "<<i<<" kolom ke "<<j<<" = ";cin>>matriks[i-1][j-1];
		}
	}
	cout<<endl<<endl;
	cout<<" Tampilan matriks yang terinput :"<<endl;
	for(i=1;i<=3;i++){
		cout<<endl<<" ";
			for(int j=1;j<=3;j++){
			cout<<matriks[i-1][j-1]<<" ";
			}
	}

	det	=matriks[0][0]*matriks[1][1]*matriks[2][2]
		+matriks[0][1]*matriks[1][2]*matriks[2][0]
		+matriks[0][2]*matriks[1][0]*matriks[2][1]
		-matriks[0][2]*matriks[1][1]*matriks[2][0]
		-matriks[0][0]*matriks[1][2]*matriks[2][1]
		-matriks[0][1]*matriks[1][0]*matriks[2][2];

	cout<<"\n\n Nilai determinan adalah : "<<det<<endl;
	getch();
}
