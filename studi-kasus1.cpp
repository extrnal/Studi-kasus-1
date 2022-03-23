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

	cout<<"Pilih Menu [ A/B ] = "; cin>>wrg.paket;
	cout<<"Jumlah          = "; cin>>wrg.jumlah;
switch(wrg.paket)
	{
		case 'A':
    	case 'a'  :
    		wrg.harga=17000;
    break;
   		case 'B':
    	case 'b'   :
    		wrg.harga=21000;
    break;
  }

  wrg.biaya = tot (wrg.harga, wrg.jumlah);
  
  	if (wrg.biaya>=45000){
		wrg.diskon=0.1*wrg.biaya;
	}else {
		wrg.diskon=0;
	}
  wrg.total=wrg.biaya-wrg.diskon;
