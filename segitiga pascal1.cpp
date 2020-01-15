#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int nilai,a;

   cout<<"masukkan batas : ";
   cin>>nilai;
    for (int i=0; i<=nilai; i++){
        for (int k=0; k<=((2*nilai)-(2*i)); k++){
            cout<<" ";
        }
        for (int j=0; j<=i; j++){
            if (j==0||i==j){
                a=1;
            }else{
                a=a*(i+1-j)/j;
            }
            cout<<"  ";
            cout<<a;
            cout<<"  ";
        }
        cout<<" ";
        cout<<endl<<endl;
    }
   getch();
}

