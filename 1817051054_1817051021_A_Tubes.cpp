#include <iostream>

using namespace std;

void menu()	//---------------------------------MENU--------------------------------------------------//
{
	cout<<"============BARANG DAN HARGA================\n";
	cout<<"1.	Pop Mie\t\t\t\tRp.5.000\n";
	cout<<"2.	Mie Sedap Goreng		Rp.2.500\n";
	cout<<"3.	Mie Sedap Kari Spesial\t\tRp.3.000\n";
	cout<<"4.	Pocari Sweat			Rp.6.000\n";
	cout<<"5.	Floridina Orange		Rp.5.000\n";
	cout<<"6.	Teh botol Sosro			Rp.4.500\n";
	cout<<"7.	Cimory Youghrt			Rp.8.000\n";
	cout<<"8.	Yakult				Rp.10.000\n";
	cout<<"9.	Fruit Tea			Rp.7.000\n";
	cout<<"10.	Silverqueen			Rp.22.000\n";
	cout<<endl<<endl;
	cout<<"KETENTUAN:\n";
	cout<<"\t\t1.Maks Menginput Hanya 100 Kali Pembelian Barang\n";
	cout<<"\t\t2.Maks Jumlah Barang Yang Dibeli Hanya 100 Setiap Menginput\n";
}

int main () {
	menu();
	char ulang;
	int n,cd,uang,kembali;
	float total=0;
	int harga[]={5000,2500,3000,6000,5000,4500,8000,10000,7000,22000};
	int hasil [100]={};//------------------------Harga Barang Yg Dibeli--------------------------//
	int jumlah[100]={};//------------------------jumlah Barang Yg Dibeli-------------------------//
	string transaksi[100]={};//------------------Barang Apa Saja Yang DiBeli---------------------//
	string code[]={	"pop mie			Rp.5.000",
					"Mie Sedap Goreng		Rp.2.500",
					"Mie Sedap Kari Spesial	Rp.3.000",
					"Pocari Sweat			Rp.6.000",
					"Floridina Orange		Rp.5.000",
					"Teh botol Sosro		Rp.4.500",
					"Cimory Youghrt		Rp.8.000",
					"yakult			Rp.10.000",
					"Fruit Tea			Rp.7.000",
					"Silverqueen			Rp.22.000"};
	int u=1;
	goto t;												//<--------------------ke &
	x:													//<--------------------#
	while(u<=100){//-----------------------Syarat Pembelian Hanya 100 kali ----------------------//
		cout<<endl<<endl;
		cout<<"\t\t\t\t|=============================================================|\n";
		cout<<"\t\t\t\t|======================BARANG YANG DIBELI=====================|\n";
		cout<<"\t\t\t\t|=============================================================|\n";
		for(int a=1;a<=(u-1);a++){
				cout<<"\t\t\t\t"<<a<<"."<<transaksi[a]<<"\t\t"<<jumlah[a]<<" pcs\n";
			}
		t :												//<-------------------- &
		cout<<"Code Barang Yang Dibeli =";
		cin>>cd;
		cout<<"Jumlah Barang =";
		cin>>n;
		system ("cls");
		menu ();
		//----------Memperoses Code Barang,Jumlah, dan Harga Dari Barang yg dipilih---------
		//------------------------Untuk Mempermudah Mencetak Struk--------------------------
		if (((cd>0)&&(cd<11))&&((n>0)&&(n<=100))){
			for(int i=u;i<=u;i++){
				hasil[i]=harga[cd-1];
				transaksi [i]=code[cd-1];
				jumlah [i]=n;
			}
		}

		else{//------------------------------------Filter-----------------------------------
			if(((cd<=0)&&(cd>10))&&((n>0)&&(n<=100))){//---------Code Barang Salah---------
				cout<<"code barang tidak diketahui\t\t\t\t\n";
				cout<<endl<<endl;
				system ("PAUSE");
				system ("cls");
				menu ();
				goto x;									//<--------------------Ke #
			}
			else if(((cd>0)&&(cd<11))&&(n<=0)&&(n>100)){//-------Jumlah Barang Salah-------
				cout<<"Jumlah Barang Yang Anda Masukkkan Salah \t\t\t\t\t\n";
				cout<<endl<<endl;
				system ("PAUSE");
				system ("cls");
				menu ();
				goto x;									//<--------------------Ke #
			}
			else {//---------------Code dan Jumlah Barang Yang Salah-----------------------
				cout<<"code barang tidak diketahui/Jumlah Barang Yang Anda Masukkkan Salah\t\t\t\t\n";
				cout<<endl<<endl;
				system ("PAUSE");
				system ("cls");
				menu ();
				goto x;									//<--------------------Ke #
			}		
		}
		//------------------------Memunculkan Barang dan Jumlah Yang Dibeli-----------------
		if((cd>0)&&(cd<11)){
			cout<<endl<<endl;
			cout<<"\t\t\t\t|=============================================================|\n";
			cout<<"\t\t\t\t|======================BARANG YANG DIBELI=====================|\n";
			cout<<"\t\t\t\t|=============================================================|\n";
			for(int a=1;a<=u;a++){
				cout<<"\t\t\t\t"<<a<<"."<<transaksi[a]<<"\t\t"<<jumlah[a]<<" pcs\n";
			}
			total=total+harga[cd-1]*n;
		}
			
		u++;//---------------------------- Nilai u = 1 -------------------------------------
		cout<<"Tambah barang lagi(Y/T)?";cin>>ulang;
		
		if(ulang=='Y'||ulang=='y'){//-----------Jika Ingin Membeli Barang Lagi--------------
			system ("cls");
			menu ();
			cout<<endl<<endl;
			cout<<"\t\t\t\t|=============================================================|\n";
			cout<<"\t\t\t\t|======================BARANG YANG DIBELI=====================|\n";
			cout<<"\t\t\t\t|=============================================================|\n";
		
			for(int a=1;a<=(u-1);a++){//----------------Mencetak Apa Yg Dibeli-------------
				cout<<"\t\t\t\t"<<a<<"."<<transaksi[a]<<"\t\t"<<jumlah[a]<<" pcs\n";
			}

			system ("cls");
			menu ();
			goto x;										//<--------------------Ke #
		}

		else{//-----------------------Jika Tidak Ingin Membeli Lagi-------------------------
			z:											//<--------------------$
			system ("cls");
			menu ();
			cout<<endl<<endl;
			cout<<"\t\t\t\t|=============================================================|\n";
			cout<<"\t\t\t\t|======================BARANG YANG DIBELI=====================|\n";
			cout<<"\t\t\t\t|=============================================================|\n";

			for(int a=1;a<=(u-1);a++){
				cout<<"\t\t\t\t"<<a<<"."<<transaksi[a]<<"\t\t"<<jumlah[a]<<" pcs\n";
			}
			
			//----------------------Akan Diberi Tahu Total Harga Pembelian-----------------
			cout<<endl<<endl;
			cout<<"\t\t\t\t\t\t\tTotal harga		=Rp "<<total<<endl;
			cout<<"\t\t\t\t\t\t\tUang Anda 		=Rp ";cin>>uang;//-Memasukkan Uang Pembeli-
		
			if(uang<total){//------------------Filter Uang Tidak Mencukupi-----------------
				cout<<"\t\t\t\t\t\t\tUang Anda Tidak Mencukupi  !!!\n";
				system ("PAUSE");
				goto z;									//<--------------------Ke $
			}
		
			kembali=uang-total;//-----------------Akan Memproses Kembalian-----------------
			cout<<"\t\t\t\t\t\t\tUang Kembalian		=Rp "<<kembali<<endl<<endl<<endl;
			cout<<"\t\t\t\t|=============TERIMA KASIH TELAH BERBELANJA DISINI============|\n";
		}
		
		cout<<"Tekan (ENTER) untuk cetak struk\n"<<endl<<endl;
		system ("PAUSE");//------------------------------ENTER Baru Bisa--------------------
		system ("cls");
		
		//---------------------------------------STRUK--------------------------------------
		for(int k=1;k<=14;k++){		//-----------------------loading cetak------------------
			cout<<"\t\t\t\t\t\t  MENCETAK STRUK\n";
			cout<<"\t\t\t\t\t\t ";
			for(int j=1;j<=k;j++){
				cout<<"=";
			}
		
			system("cls");	
		}
		cout<<"\t\t\t\t|=============================================================|\n";
		cout<<"\t\t\t\t|========================STRUK PEMBELIAN======================|\n";
		cout<<"\t\t\t\t|=============================================================|\n";

		for(int a=1;a<=(u-1);a++){
			cout<<"\t\t\t\t"<<a<<"."<<transaksi[a]<<"\t\t"<<jumlah[a]<<" pcs\n";
		}

		cout<<endl<<endl;
		cout<<"\t\t\t\t\t\t\tTotal harga	  	=Rp "<<total<<endl;
		cout<<"\t\t\t\t\t\t\tUang Anda	  	=Rp "<<uang<<endl;
		cout<<"\t\t\t\t\t\t\tUang Kembalian		=Rp "<<kembali<<endl<<endl;
		cout<<"\t\t\t\t|=============TERIMA KASIH TELAH BERBELANJA DISINI============|\n";
		system("PAUSE");		
		return 0;
	}
}
