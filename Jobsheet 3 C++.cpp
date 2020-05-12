#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	cout<<"Nama     : Diky Aryadi"<<endl;
	cout<<"Nim      : F1B019041"<<endl;
	cout<<"Kelompok : 9"<<endl;
	int i,x;
	int nimA[2][2];
	int nimB[2][2];
	int jmlh [2][2];
	
	cout<<"PENJUMLAHAN MATRIX :\n";
	for (i=0; i<2; i++){
	for (x=0; x<2; x++){
	cout<<"Masukkan Nim ke-1 "<<"["<<i<<"]["<<x<<"]"<<" = ";
	cin>>nimA[i][x];
	}
	}
	cout<<endl;
	for(i=0; i<2; i++){
	for(x=0; x<2; x++){
	cout<<"Masukan Nim ke-2 "<<"["<<i<<"]["<<x<<"]"<<" = ";
	cin>>nimB[i][x];
	}
	}
	cout <<endl;
	for (i=0; i<2; i++){
	for (x=0; x<2; x++){
	jmlh [i][x]=nimA[i][x]+nimB[i][x];
	cout<<jmlh[i][x]<<" ";
	}
	cout<<endl;
	}
	}
