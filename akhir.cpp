#include <iostream>
#include <iomanip>

using namespace std;

void ls();
void h();
void sw();
void cs();


int main()

{
	string pakaian[4] = {"Long Sleeve","Hoodie","Sports Wear","Casual Shirt"};
	string ukuran[4] = {"XL,L,M,S","XL,L,S","XL,L,M,S","L,M,S"};
	string user,pass;
	int stok[4] = {100,50,70,150};
	int harga[4] = {350000,500000,600000,250000};
	int menu, produk;
	char lanjut,login;
	int data = sizeof(pakaian)/sizeof(pakaian[0]);

	do{
		system("CLS");

	cout << "PROGRAM TOKO PAKAIAN" << endl;
	cout << setfill('=') << setw(50) << "=" << endl;
	cout << "Masukkan Username & Password" << endl;
	cout << "\nUsername \t= ";
	cin >> user;
	cout << "Password \t= ";
	cin >> pass;
	
	
	
	if((user == "Rainaldy" && pass == "123210087") || (user == "Naufal" && pass == "123210070"))
	do{
		system("CLS");			
	
		cout << "\nPROGRAM TOKO PAKAIAN SABAR JAYA" << endl;
		cout << setfill('-') << setw(50) << "-" << endl;
		cout << "\nSelamat Datang di TOKO BAJU Kami!!" << endl;
		cout << "\nSelamat Belanja" << endl;
		cout << "\nPilih Menu di Bawah ini" << endl;
		cout << "1. Daftar Pakaian" << endl;
		cout << "2. Daftar Harga" << endl;
		cout << "3. Transaksi" << endl;
		cout << "Pilih Menu\t= ";
		cin >> menu;
		
	if(menu == 1){

	cout<<"\nDaftar Pakaian"<<endl;
		cout<< setfill('-')<<setw(70) << "-"<<endl;
		cout<< setiosflags(ios::left) << setfill(' ') << setw(25) << "Nama Pakaian" << "| "
			<< setiosflags(ios::left) << setfill(' ') << setw(21)  << "Ukuran yang Tersedia" << "| "
			<< setiosflags(ios::left) << setfill(' ') << setw(19) << "Stok Pakaian" << "| "<<endl;
		cout<< setfill('-')<<setw(70) << "-"<<endl;
		
		for(int a = 0;a<data;a++){
				cout << setiosflags(ios::left) << setfill(' ') << setw(24) << pakaian[a] << " | "
					 << setiosflags(ios::left) << setfill(' ') << setw(20) << ukuran[a] << " | "
					 << setiosflags(ios::left) << setw(15) << stok[a] << "pcs" << " | " << endl;
				 }
				 cout <<setfill('-') << setw(70) << "-" << endl;
			 }
	else if(menu == 2){
		cout << "\nDaftar Harga" << endl;
		cout << setfill('-') << setw(50) << "-" << endl;
		cout << setiosflags(ios::left) <<setfill(' ') << setw(25) << "Nama Pakaian" << "| "
			<<setiosflags(ios::left) << setfill(' ') << setw(22) << "Harga Pakaian" << "|" << endl;
		cout << setfill('-') << setw(50) <<"-" << endl;
		
		for(int a = 0;a<data;a++){
				cout << setiosflags(ios::left) << setfill(' ') << setw(24) << pakaian[a] << " | "
					 << setiosflags(ios::left) << "Rp" << setw(19) << harga[a] << " | " << endl;
				 }
				 cout << setfill('-') << setw(50) << "-" << endl;
			 }
	
	else if (menu == 3){
		cout << "Transaksi" << endl;
	
		cout << "\n1. Long Sleeve\t Rp350000 "
			<< "\n2. Hoodie\t Rp500000"
			<< "\n3. Sports Wear\t Rp600000"
			<< "\n4. Casual Shirt\t Rp250000 "
			<< "\n\nPilih produk yang ingin dibeli : ";
		cin >> produk;
	
		switch (produk)
		{
	
			case 1:
				ls();
				break;
		
			case 2:
		
				h();
				break;
		
		
			case 3:
		
				sw();
				break;
			case 4:
		
				cs();
				break;
		}
		
	}cout << "\n\nBalik ke Menu?(Y/T) ";
	 cin >> lanjut;
	 
	if(lanjut == 'y' || lanjut == 'Y');
	cout << "\nTerima Kasih, Selamat Berbelanja Kembali";
}while(lanjut == 'y' || lanjut == 'Y');

	else{
		cout << "\nUsername & Password yang Masukkan Salah!!" << endl;
		cout << "Login Kembali? (Y/T)";
		cin >> login;
	}
}while(login == 'y' || login == 'Y');

return 0;

}
	
void ls() {
	long ls, jml;
	cout<<"\nBanyak produk : ";
	cin>>jml;
	ls = 350000 * jml;
	cout << "350000 x "<<jml<<endl;
	cout << "total Rp"<<ls;
}

void h() {
	long h, jml;
	cout<<"\nBanyak produk : ";
	cin>>jml;
	h = 500000 * jml;
	cout << "500000 x "<<jml<<endl;
	cout << "total Rp"<<h;
}


void sw() {
	long sw, jml;
	cout<<"\nBanyak produk : ";
	cin>>jml;
	sw = 600000 * jml;
	cout << "600000 x "<<jml<<endl;
	cout << "total Rp"<<sw;
}
void cs() {
	long cs, jml;
	cout<<"\nBanyak produk : ";
	cin>>jml;
	cs = 250000 * jml;
	cout << "250000 x "<<jml<<endl;
	cout << "total Rp"<<cs;
}
		
	

		
		


