#include <iostream>																				//lib cin & cout
#include <stdlib.h>																				//lib rand
#include <time.h>																				//lib NULL

using namespace std;																			//Menggunakan syntax standar
int main(){																						//Fungsi Utama
//=======================================MAIN MENU=====================================================================
	int menu, uang = 100000, lo = 0, bet;
	char nama[25] = {};																			//MAKS NAMA yg DIMASUKAN 25 HURUF
	MENU:																						//LOOP1
	cout << "========================================================";
	cout << "\n||           Coded By Abi and Akbar and Nabil         ||";
	cout << "\n||                      JUDI BERKAH                   ||";
	cout << "\n========================================================"<<endl<<endl;
	cout << "\t\t\tUsername   : " << nama;
	cout << "\n\t\t\tUang       : " << uang;
    cout << "\n\n\nMenu Pilihan :";							
	cout << "\n\n\t[1]. Login";						
	cout << "\n\t[2]. Judi Bola";						    
	cout << "\n\t[3]. Judi Roulette";				
	cout << "\n\t[4]. Cairkan Uang";			
	cout << "\n\t[5]. Exit";
    cout << "\n\nMasukan Pilihan >> "; cin >> menu; cout<<endl<<endl; cin.ignore(); 			//masukan pilihan // cin.ignore berfungsi mengigonre newline dari cin
    system ("cls");																				//clear 

//====================================MENU 1. LOGIN====================================================================

    if(menu==1){																				//JIka pilih 1
    	LOGIN:																					//LOOP2
    	int i;
        cout << "====================================";											//mencetak 
	    cout << "\n                LOGIN               ";										//--------
	    cout << "\n====================================";										//--------
        cout << "\n\nMasukan Username kamu : "; cin.getline(nama, sizeof(nama));				//masukan nama anda maks 25 huruf
    	
    	for(i = 0; nama[i] != '\0'; ++i);														//menghitung jumlah inputan karakter
    	if (i != 0){																			//jika jumlah karakter tidak sama dengan 0
        	cout << "Login Berhasil !!! "<<endl;
        	lo = 1;
        }
        else{																					//jika jumlah karakter sama dengan 0;
        	cout << "Login Gagal !!!"<<endl;
        	system ("PAUSE");																	//pause
        	system ("cls");																		//clear
        	goto LOGIN;																			//LOOP2
        }
        system ("PAUSE");																		//pause
        system ("cls");																			//clear
        goto MENU;																				//ke LOOP1 {awal}
    }
    //=====================================MENU 2. JUDI BOLA===========================================================
	else if(menu==2){																			//jika pilih 2
		int pilih,a,b,tim_a,tim_b,tebak,genap,ganjil,hasilGG;
		if (lo == 0){																			//lo ialah permisalan dari inputan username. jika lo = 0
			system ("cls");																		//maka kata kata dibawah akan tercetak
			cout << "\tMaaf Anda Belum Login !";
			cout << "\n\tSilahkan Login Dahulu !"<<endl;
			system ("PAUSE");
			system ("cls");
			goto MENU;																			//kemudian terlempar ke LOOP1 {awal}
		}																						//user tidak akan bisa ketahap sljtnya bila username blm terisi
		else{																					//DAN JIKA lo tidak kosong/ sudah terisi 
			BOLA:																				//LOOP3
			cout << "====================================";
        	cout << "\n            JUDI BOLA           ";
        	cout << "\n====================================";
			cout<<"\n\n[1].Tebak siapa yang menang !!";
			cout<<"\n[2].Tebak Skor Ganjil Genap !!";
			cout<<"\n\nPilih permainan yang ingin dimainkan : ";cin>>pilih;						//masukan pilihan user
			system ("cls");
			srand(time(NULL));																	//Agar Fungsi RANDOM BERUBAH TERUS
			const char skor[10]={1,2,3,4,5,1,2,3,4,5};											//KEMUNGKINAN SKOR DARI RANDOOM
			a = rand()%10;																		//RANDOM DARI 1 SAMPAI 9,999 
			b = rand()%10;
			tim_a = skor[a];
			tim_b = skor[b];																	//HASIL RANDOM MASUK KE SKOR MASING MASING TIM
			if (pilih==1){																		//jika anda memilih 1 {tebak siapa yg menang}
				BET1:																			//LOOP4
				cout << "====================================";
        		cout << "\n            JUDI BOLA           ";
        		cout << "\n====================================";
				cout << "\n\nUang anda sekarang = " << uang;									//saldo anda
				cout<<"\nMau taruhan berapa ? "; cin >> bet;									//masukan taruhan
				if( bet > uang){																//BILA TARUHAN > DARI SALDO YA GA BISA LAH , BANGKRUT MAMANG
					cout << "\nUang anda tidak cukup"<<endl;
					system ("PAUSE");
        			system ("cls");
					goto BET1;																	//ke LOOP4
				}
				cout<<"\n\n\tTebak siapa yang menang !!!";										//ANDA BISA MEMILIH
				cout<<"\n\n[1] Tim A";
				cout<<"\n[2] Tim B";
				cout<<"\n[3] Seri";
				cout<<"\n\nPilihan anda : ";cin>>tebak;											//MASUKAN PILIHAN ANDA
		
				if (tebak == 3){																//JIKA ANDA MEMILIH 3
					if(tim_a == tim_b){															//APA BILA ANDA BENAR
						system ("cls");															//CLEAR
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;														//UANG MENANG TARUHAN ANDA AKAN LANGSUNG MASUK KE SALDO
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){							//JIKA SALDO ANDA 1.000.000, MAKA
							cout << "\n\nAnda bisa mencairkan uang di menu utama";				//PRINT OUT
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;	//TAWARAN MAIN LAGI/CAIRKAN UANG
							system ("cls");
							if ((y == 'Y' || y == 'y'))											//JIKA PILIH Y/y, MAKA AKAN TERLEMPAR KE LOOP1
								goto MENU;
							else																//JIKA PILIH SELAIN Y/y, MAKA AKAN TERLEMPAR KE LOOP3
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;	//TAWARAN GANTI GAME
						system ("cls");
						if ((y == 'Y' || y == 'y'))												//JIKA PILIH Y/y, MAKA AKAN TERLEMPAR KE LOOP1
							goto MENU;
						else																	//JIKA PILIH SELAIN Y/y, MAKA AKAN TERLEMPAR KE LOOP3
							goto BOLA;	
					}
					else{																		//APABILA ANDA SALAH MENJAWAB
						system ("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;														//UANG SALDO ANDA OTOMATIS AKAN BERKURANG 
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){															//JIKA SALDO ANDA 0 YA UDAH END
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang\n"<<endl;
							system ("PAUSE");
							while(true){														//JIKA BENAR 
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))												//JIKA PILIH Y/y, MAKA AKAN TERLEMPAR KE LOOP1
							goto MENU;
						else																	//JIKA PILIH SELAIN Y/y, MAKA AKAN TERLEMPAR KE LOOP3
							goto BOLA;	
					}
				}
				else if(tebak == 1){															//JIKA ANDA MEMILIH 1
					if (tim_a>tim_b){
						system ("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system ("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
					else{
						system ("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang\n"<<endl;
							system ("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
				else if(tebak == 2){															//JIKA ANDA MEMILIH 2
					if (tim_a<tim_b){
						system ("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system ("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;	
					}
					else {
						system ("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang\n"<<endl;
							system ("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
				else{																			//JIKA ANDA MEMILIH SELAIN 1,2,3
					cout<<"\n\nPilihan tidak ada !!!";
				}

			}//================================================================================================================================
			else if(pilih==2){																	//jika anda memilih 2 {tebak skor ganjil dan genap}
				BET2:																			//LOOP5
				cout << "====================================";
        		cout << "\n            JUDI BOLA           ";
        		cout << "\n====================================";
				cout << "\n\nUang anda sekarang = " << uang;
				cout<<"\nMau taruhan berapa ? "; cin >> bet;
				if( bet > uang){
					cout << "\nUang anda tidak cukup"<<endl;
					system ("PAUSE");
        			system ("cls");
					goto BET2;																	//ke LOOP5
				}
				cout<<"\n\n\tTebak jumlah skor Ganjil Genap !!!";
				cout<<"\n\n[1]. Genap";
				cout<<"\n[2]. Ganjil";
				cout<<"\n\nPilihan anda : ";cin>>tebak;
	
				if (tebak == 1){																//tebak genap
					if((tim_a+tim_b)%2==0){														//jika benar genap
						system ("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;														//saldo nambah
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system ("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;
						}	
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
					else{																		//jika hasil ganjil (selain genap)
						system ("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;														//saldo ngurang
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){															//jika saldo anda 0 rupiah
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang\n"<<endl;
							system ("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
				else if(tebak == 2){															//tebak ganjil
					if ((tim_a+tim_b)%2==1){													//jika benar ganjil
						system ("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;														//saldo nambah
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system ("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
					else{																		//jika hasil genap (selain ganjil)
						system ("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;														//saldo ngurang
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang\n"<<endl;
							system ("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
			}
			else{																				//menebak selain ganjil/genap (1/2) {tidak ada piliahnya}
				cout<<"\n\nPilihan tidak ada !!!"<<endl;
				system ("PAUSE");
				system ("cls");
				goto BOLA;																		//ke LOOP3
			}
		}
	}//====================================MENU 3. JUDI ROULETTE]]=====================================================
   
    else if(menu==3){																			//dari menu awal anda memilih 3
    	int tebak, hasil, a;
    	if (lo == 0){																			//blm login username anda tidak bisa menjalankan ke lngkh slnjtny
			system ("cls");
			cout << "\tMaaf Anda Belum Login !";
			cout << "\n\tSilahkan Login Dahulu !"<<endl;
			system ("PAUSE");
			system ("cls");
			goto MENU;																			//ke LOOP1
		}
		else{
			ROULETTE:																			//LOOP6
            cout << "====================================";
            cout << "\n            JUDI ROULETTE           ";
            cout << "\n====================================";
            cout << "\n\nUang anda sekarang = " << uang;
            cout << "\nMau taruhan berapa ? "; cin >> bet;
			if( bet > uang){																	//jika taruhan > saldo NDAK ADA OTAK KAO
					cout << "\nUang anda tidak cukup"<<endl;
					system ("PAUSE");
        			system ("cls");
					goto ROULETTE;																//ke LOOP6
			}
            cout << "\n\n\tTebak Warna Yang Keluar";											//pilihan anda
            cout << "\n\n[1]. Merah (x2)";														//bila 1 dan anda menang maka taruhan anda akan di lipatkan 2 & masuk ke saldo
            cout << "\n[2]. Biru  (x2)";														//bila 2 dan anda menang maka taruhan anda akan di lipatkan 2 & masuk ke saldo
            cout << "\n[3]. Hitam (x6)";														//bila 3 dan anda menang maka taruhan anda akan di lipatkan 6 & masuk ke saldo
            cout << "\n\nMasukan Pilihan >> "; cin >> tebak;
            srand(time(NULL));																	//Agar Fungsi RANDOM BERUBAH TERUS
            const char warna[9] = {1, 1, 1, 3, 2, 2, 2, 2, 1};									//KEMUNGKINAN HASIL RANDOM
            a = rand()%9;																		//KEMUNGKINAN RANDOM 1 SAMPAI 8,9999
            hasil = warna[a];																	//MEMASUKKAN HASIL RANDOM KE WARNA HASIL
                if (hasil == tebak){
                    if(hasil==1){
                    	system ("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                        cout << "\n\nWarna yang keluar adalah warna : MERAH";
                        cout << "\n\n\tSelamat anda MENANG !!!";
                        uang = uang + bet*2;
                        cout << "\n\nUang anda sekarang = " << uang;
                        char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system ("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;														//JIKA PILIH Y/y, MAKA AKAN TERLEMPAR KE LOOP1
							else
								goto ROULETTE;													//JIKA PILIH SELAIN Y/y, MAKA AKAN TERLEMPAR KE LOOP6
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;															//JIKA PILIH Y/y, MAKA AKAN TERLEMPAR KE LOOP1
						else
							goto ROULETTE;														//JIKA PILIH SELAIN Y/y, MAKA AKAN TERLEMPAR KE LOOP6
                    }
                    else if(hasil==2){
                    	system ("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                    	cout << "\nWarna yang keluar adalah warna : BIRU";
                        cout << "\n\n\tSelamat anda MENANG !!!";
                        uang = uang + bet*2;
                        cout << "\n\nUang anda sekarang = " << uang;
                        char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system ("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto ROULETTE;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
					}
					else{
						system ("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
						cout << "\nWarna yang keluar adalah warna : HITAM";
                        cout << "\n\n\tSelamat anda MENANG !!!";
                        uang = uang + bet*2;
                        cout << "\n\nUang anda sekarang = " << uang;
                       char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system ("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto ROULETTE;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
					}
				}
                else if ((tebak >= 1) && (tebak < 4)){
                    if(hasil==1){
                    	system ("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                        cout << "\n\nWarna yang keluar adalah warna : MERAH";
                        cout << "\n\n\tMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\n\nUang anda sekarang = " << uang;
                        if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang\n"<<endl;
							system ("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
                    }
                    else if(hasil==2){
                    	system ("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                    	cout << "\n\nWarna yang keluar adalah warna : BIRU";
                        cout << "\n\n\tMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\n\nUang anda sekarang = " << uang;
                        if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang"<<endl;
							system ("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
					}
					else{
						system ("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
						cout << "\n\nWarna yang keluar adalah warna : HITAM";
                        cout << "\n\n\tMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\n\nUang anda sekarang = " << uang;
                        if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang\n"<<endl;
							system ("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system ("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
						}
					}
                    else{
                        cout << "\nPilihan tidak ada !"<<endl;
                        system ("PAUSE");
                        system ("cls");
                        goto MENU;
                    }
			}
	}	
//=========================================MENU 4. CARIKAN UANG========================================================
	else if(menu==4){																			//dari menu awal anda memilih 4 {cairkan uang}
		system ("cls");
		if (uang >= 1000000)																	//jika kondisi memenuhi akan keluar text "KERJA TU YANG HALAL BIJI !!!"
			cout << "KERJA TU YANG HALAL BIJI !!!"<<endl<<endl;
		else{																					//jika uang blm mencapai 1.000.000
			cout << "\n\tUang anda belum mencapai Rp. 1000.000,00"<<endl;
			system ("PAUSE");
			system ("cls");
			goto MENU;																			//terlempar ke LOOP1
		}

	}
//=========================================MENU 5. EXIT================================================================
    else if(menu==5){																			//dari awal anda memilih 5 {EXIT}
       	system ("cls");																			//clear
        cout << "++Exiting..."<<endl;																	//keluar text
        system ("PAUSE");																		//pause dulu
        system ("cls");																			//clear lagi
        cout << "\n(^_^) Byeee " << nama << "  :p \n\n";										//keluar text lagi
    }
//========================================SELAIN MENU 1,2,3,4,5========================================================
    else{																						//dari awal anda memilih selain 1.2.3.4.5
    	cout << "\n\t*******************************************";
        cout << "\n\t*  Maaf menu tidak tersedia saat ini !!!  *";
        cout << "\n\t*******************************************"<<endl;
        system ("PAUSE");
        system ("cls");
        goto MENU;																				//terlempar ke LOOP1
	}

    return 0;
}
//===================================================== E N D =========================================================
//=================================================INI CUMA TUGAS======================================================
//===========================================KERJA ITU YANG HALAL TELOR================================================
