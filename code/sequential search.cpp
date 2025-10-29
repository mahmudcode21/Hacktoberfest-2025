#include <iostream>
using namespace std;

int main(){
	//deklarasi variabel
	int data[10],index[10],i,j,x,n;
	
	//proses penginputan data
	cout<<"Masukkan jumlah data [Max 10] : ";
	cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"Masukkan Data ke - "<<i+1<<" = ";
		cin>>data[i];
	}
	
	//memasukkan data yang akan dicari ke dalam x
	cout<<"\nMasukkan data yang akan dicari : ";
	cin>>x;
	
	j=0;//inisialisasi jumlah data yang dicari sebelum proses pencarian data
	
	for(i=0;i<n;i++){
		if(data[i]==x){
			index[j]=i;
			j++;
		}
	}
	
	//jika data ditemukan dalam array
	if(j>0){
		cout<<"Data "<<x<<" yang dicari ada "<<j<<" buah\n";
		cout<<"Data tersebut terdapat dalam index ke : ";
		for(i=0;i<j;i++){
			cout<<index[i]<<" ";
		}
		cout<<"\n";
	}
	
	//jika tidak ditemukan
	else{
		cout<<"Data tidak ditemukan dalam array";
	}
	return 0;
}
