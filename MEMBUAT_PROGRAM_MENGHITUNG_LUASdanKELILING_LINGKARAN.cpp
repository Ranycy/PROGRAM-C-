#include <iostream>
using namespace std;

int main (){
	//menggunakan tipe data float karena hasil desimal 
	const float phi = 3.14;
	float L, r;
	
	cout<<" ======== MENGHITUNG LUAS dan KELILING LINGKARAN ========"<<endl;
	cout<<" \nMasukkan jari-jari (r) : ";cin>>r;
	
	//proses perhitungan terjadi ketika user menginputkan r 
	cout<<" \nLUAS LINGKARAN = "<<phi * r * r;
	cout<<" \nKELILING LINGKARAN = "<< 2 * phi * r;
}
