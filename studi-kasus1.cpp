#include <iostream>
#include<conio.h>
#include <fstream>
using namespace std;
struct warung{ // struct
	long harga, biaya, diskon, total, bayar, kembalian;
	int jumlah;
  	char paket;	
}wrg;

long tot(long h, long j){ // fungsi
	  long b = h * j;
	  return b;
}
	FILE * pFile;
	ofstream Nota ("Nota.txt");
	string Menu [2] = {"A. Ayam Goreng		Rp.17000", "B. Ayam Bakar		Rp.21000"};

int main(){
	int i;
	cout<<"========================"<<endl;
	cout<<"    KEDAI AYAM X  "<<endl;
	cout<<"========================"<<endl;
	cout<<endl;
	
	cout<<"MENU:              "<<endl;
	for (i=0; i < 2; i++){
		cout << Menu[i] << endl;
	}
	cout<<endl<<endl;
