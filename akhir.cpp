#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
	string pakaian[4] = {"Long sleeve","Hoodie","Sports Wear","Casual Shirt"};
	string ukuran[4] = {"XL,L,M,S","XL,L,S","XL,L,M,S","L,M,S"};
	string user,pass;
	int stok[4] = {100,200,100,150};
	int harga[4] = {350000,500000,600000,250000};
	int menu;
	int data = sizeof(pakaian)/sizeof(pakaian[0]);
	
	cout << "Program Toko Pakaian" << endl;
	cout << setfill('=') << setw(50) << "=" << endl;
	cout << "Masukkan Username & Password" << endl;
	cout << "\nUsername \t= ";
	cin >> user;
	cout << "Password \t= ";
	cin >> pass;
	
	if((user == "Rainaldy" && pass == "123210087") || (user == "Naufal" && pass == "123210070")){
	
		cout << "\nProgram Toko Pakaian" << endl;
		cout << setfill('-') << setw(50) << "-" << endl;
		cout << "\nSelamat Datang di TOKO BAJU Kami" << endl;
		cout << "\nPilih Menu di Bawah ini" << endl;
		cout << "1. Daftar Pakaian" << endl;
		cout << "2. Daftar Harga" << endl;
		cout << "3. Transaksi" << endl;
		cout << "Pilih Menu\t= ";
		cin >> menu;
		
	if(menu == 1){

	cout<<"\nDaftar Barang"<<endl;
		cout<< setfill('-')<<setw(70) << "-"<<endl;
		cout<< setiosflags(ios::left) << setfill(' ') << setw(25) << "Nama Pakaian" << "| "
			<< setiosflags(ios::left) << setfill(' ') << setw(21)  << "Ukuran yang Tersedia" << "| "
			<< setiosflags(ios::left) << setfill(' ') << setw(19) << "Stok Pakaian" << "| "<<endl;
		cout<< setfill('-')<<setw(70) << "-"<<endl;
		
		for(int a = 0;a<data;a++){
				cout << setiosflags(ios::left) << setfill(' ') << setw(24) << pakaian[a] << " | "
					 << setiosflags(ios::left) << setfill(' ') << setw(20) << ukuran[a] << " | "
					 << setiosflags(ios::left) << setw(18) << stok[a] << " | " << endl;
				 }
				 cout <<setfill('-') << setw(70) << "-" << endl;
			 }
	else if(menu == 2){
		cout<<"\nDaftar Harga"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		cout<<setiosflags(ios::left)<<setfill(' ')<<setw(25)<<"Nama Pakaian"<<"| "
			<<setiosflags(ios::left)<<setfill(' ')<<setw(22)<<"Harga Pakaian"<<"|"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		
		for(int a = 0;a<data;a++){
				cout << setiosflags(ios::left) << setfill(' ') << setw(24) << pakaian[a] << " | "
					 << setiosflags(ios::left) << setw(21) << harga[a] << " | " << endl;
				 }
				 cout <<setfill('-') << setw(50) << "-" << endl;
			 }

		
	

		
		
}
}

			
			
			
			
			
			
