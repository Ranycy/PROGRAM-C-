#include <iostream>
//menggunakan header tambahan karena di dalam sintak terdapat operasi matematika
#include <cmath>
using namespace std;

int main(){
	//Menggunakan tipe data double karena hasil kemungkinan besar menggunakan desimal 
	double bilangan;
	
	cout<<" ===== Menghitung Akar dan Pangkat Bilangan =====\n ";
	//user menginput bilangan yang hendak di pangkat dan akarkan
	
	cout<<" \nMasukkan Bilangan : ";
	cin>>bilangan;
	//menggunakan fungsi clean screen agar tampilan output rapi
	
	system("cls");
	//menampilkan output hasil pangkat dan akar dari variabel bilangan
	cout<<" HASILNYA ------------------\n"<<endl;
	cout<<"Pangkat kuadrat dari "<<bilangan<< " adalah "<<pow(bilangan,2)<<endl;;
	cout<<"Akar kuadrat dari "<<bilangan<<" adalah "<<sqrt(bilangan);
}
