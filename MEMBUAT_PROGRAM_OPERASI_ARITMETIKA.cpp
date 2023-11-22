#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout<<" ========== OPERASI ARITMETIKA =========="<<endl;
	//proses input angka yang akan di operasikan
	cout<<" Masukkan Angka ke 1 : ";cin>>a;
	cout<<" Masukkan Angka ke 2 : ";cin>>b;
	
	cout<<" \nHasil operasi -------------------------- \n\n";
	//perhitungan operasi aritmetika 
	cout<<" PENJUMLAHAN = "<<a + b<<endl;
	cout<<" PENGURANGAN = "<<a - b<<endl;
	cout<<" PERKALIAN = "<<a * b<<endl;
	cout<<" PEMBAGIAN = "<<a / b<<endl;
	cout<<" MODULUS = "<<a % b<<endl;
	
}
