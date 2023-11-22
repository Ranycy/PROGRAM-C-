#include <iostream>
using namespace std;

int main(){
	
	//pada variabel tipe data char terdapat ukuran array, menunjukkan bahwa variabel char dapat menyimpan 2 karakter
	string nama, tempat, alamat;
	unsigned int nim;
	int tgl, bln, thn;
	char goldar[2];
	
	
	cout<<" ======== IDENTITAS MAHASISWA ======== "<<endl;
	cout<<" Nama \t\t: ";getline (cin, nama);
	cout<<" NIM \t\t: ";cin>>nim;
	cin.ignore(); //menggunakan cin.ignore untuk mengabaikan cin
	cout<<" Tempat Lahir \t: ";getline (cin, tempat);
	cout<<" Tanggal Lahir \t: ";cin>>tgl;
	cout<<" Bulan Lahir \t: ";cin>>bln;
	cout<<" Tahun Lahir \t: ";cin>>thn;
	cin.ignore();
	cout<<" Alamat \t: ";getline (cin, alamat);
	cout<<" Golongan Darah\t: ";cin>>goldar;
	
	system("cls");
	
	cout<<" ======== IDENTITAS MAHASISWA ======== "<<endl;
	cout<<" Nama \t\t\t: "<<nama<<endl;
	cout<<" NIM \t\t\t: "<<nim<<endl;
	cout<<" Tempat / Tanggal Lahir : "<<tempat<<" / "<<tgl<<" - "<<bln<<" - "<<thn<<endl;
	cout<<" Alamat \t\t: "<<alamat<<endl;
	cout<<" Golongan Darah\t\t: "<<goldar;
	
	
}
