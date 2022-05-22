#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int i = 0;
int nomor; 
int search;


struct data_toko
{
	string ukuran[10]= {};
	string pakaian[5] = {"Long Sleeve","Hoodie","Sports Wear","Casual Shirt","Trainers"},
		   size[5] = {"XL,L,M,S","XL,L,S","XL,L,M,S","L,M,S","XL,L,M,S"},
		   nomor[5] = {"1","2","3","4","5"};
	int kode[10]= {}, jumlah[15]= {};
	int stok[5] = {100,50,70,150,120}, menu, produk;
	int data = sizeof(pakaian)/sizeof(pakaian[0]);	
	int i = 0;	
};
struct data_toko toko; 


bool found;
void tambah()
{
    
system("CLS");
	
	cout<<"\nDaftar Pakaian"<<endl;
		cout<< setfill('-')<<setw(84) << "-"<<endl;
		cout<< setiosflags(ios::left) << setfill(' ') << setw(13) << "Kode Pakaian" << "| "
			<< setiosflags(ios::left) << setfill(' ') << setw(24) << "Nama Pakaian" << "| "
			<< setiosflags(ios::left) << setfill(' ') << setw(21)  << "Ukuran yang Tersedia" << "| "
			<< setiosflags(ios::left) << setfill(' ') << setw(19) << "Stok Pakaian" << "| "<<endl;
		cout<< setfill('-')<<setw(84) << "-"<<endl;
		
		for(int a = 0;a<toko.data;a++){
				cout << setiosflags(ios::left) << setfill(' ') << setw(12) << toko.nomor[a] << " | " 
					 << setiosflags(ios::left) << setfill(' ') << setw(23) << toko.pakaian[a] << " | "
					 << setiosflags(ios::left) << setfill(' ') << setw(20) << toko.size[a] << " | "
					 << setiosflags(ios::left) << setw(15) << toko.stok[a] << "pcs" << " | " << endl;
				 }
				 cout <<setfill('-') << setw(84) << "-" << endl;
				 	
		cout << "Masukkan Data Pakaian" << endl;
		cout << "Kode Pakaian  \t : ";
		cin >> toko.kode[i];
		cin.ignore();
		
		cout << "Nama Pakaian \t : ";
		getline(cin,toko.pakaian[i]);
			
		cout << "Ukuran Pakaian \t : ";
		getline(cin,toko.ukuran[i]);

		cout << "Jumlah Pakaian \t : ";
		cin >> toko.jumlah[i];
		cin.ignore();	

i++;
}

void listpakaian()
{
	system("CLS");

	for(int nomor=0;nomor<i;nomor++){
		cout << "No (" << nomor+1 << ")" << endl;
		cout << "Kode Pakaian \t : " << toko.kode[nomor] << endl;	
		cout << "Nama Pakaian \t : " << toko.pakaian[nomor] << endl;	
		cout << "Ukuran Pakaian \t : " << toko.ukuran[nomor] << endl;
		cout << "Jumlah Pakaian \t : " << toko.jumlah[nomor] << endl;

}
			
system("PAUSE");}

void searchpakaian()
{
	system("CLS");

	int j = 0;
		cout<<"Masukkan Kode Pakaian yang ingin dicari :";
		cin>>search;
	do {
		
	found=false;
	if(toko.kode[j] == search)
	{
		cout << "Kode Pakaian \t : " << toko.kode[j] << endl;
		cout << "Nama Pakaian \t : " << toko.pakaian[j] << endl;			
		cout << "Ukuran Pakaian \t : " << toko.ukuran[j] << endl;
		cout << "Jumlah Pakaian \t : " << toko.jumlah[j] << endl;

	j++;
	}
	else 
		{j++;}

	}while((!found) & (j<=i));

	if(j>10)
		{cout<<"Tidak Ada Data"<<endl;}
		
	system("PAUSE");
}

int main(){
int no;
bool quit=true;
do {
system("CLS");

	cout << "\nPROGRAM TOKO PAKAIAN BERKAH JAYA" << endl;
	cout << setfill('-') << setw(40) << "-" << endl;
    cout << "MENU" << endl;
    cout << "1. Masukkan Data Pakaian" << endl;
    cout << "2. Lihat Data Pakaian" << endl;
    cout << "3. Mencari Data Pakaian" << endl;
    cout << "4. Selesai" << endl;
    cout << "Pilih Nomor : ";
    cin >> no;

    switch (no)
        {
        case 1: 
        tambah();
        break;
        
        case 2: 
        listpakaian();
        break;
        
        case 3: 
        searchpakaian();
        break;
        
        case 4: 
        quit = false; 
        break;
        
        default: 
        
        cout << "Input Salah" << endl;
        
        system("PAUSE");
        break;}
        
} while(quit);
    
}
