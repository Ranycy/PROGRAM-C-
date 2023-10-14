#include <iostream>
using namespace std;

int main(){
	//menggunakan tipe data float karena hasil bisa jadi dalam bentuk desimal
	float m ;
	cout<<" Masukkan Angka (m) : ";cin>>m;
	
	//menggunakan fungsi clean screen agar tampilan output lebih rapi
	system("cls");
	
	//operator yang digunakan adalah aritmetika berupa perkalian dan pembagian
	cout<<" \n===== KONVERSI PANJANG =====\n";
	cout<<" Meter -> Desimeter : "<<m*10<<" dm "<<endl;
	cout<<" Meter -> Sentimeter : "<<m/100<<" cm "<<endl;
	cout<<" Meter -> Milimeter : "<<m*1000<<" mm "<<endl;


}
