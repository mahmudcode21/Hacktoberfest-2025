#include <iostream>
using namespace std;

int main(){
	int queue[5];
	int depan = 0;
	int belakang = -1;
	int pilihan, data, i;
	
	do {
		cout<<"MENU\n";
		cout<<"1. ENQUEUE\n2. DEQUEUE\n3. VIEW\n4. EXIT\n";
		cout<<"Pilihan = ";
		cin>>pilihan;
		
		switch(pilihan){
			case 1 : if(belakang<4){
				cout<<"Data Masuk = ";
				cin>>data;
				queue[belakang+1]=data;
				belakang++;
			}
			else
			cout<<"QUEUE Penuh! \n";
			break;
			case 2 : if(depan<=belakang){
				cout<<"Data Keluar = "<<queue[depan];
				cout<<"\n";
				depan++;
			}
			else
			cout<<"Queue Kosong! \n";
			break;
			case 3 :
			for(i=depan;i<=belakang;i++){
				cout<<queue[i];
				cout<<"\n";
			}
			break; 
		}
		cout<<"-------------------\n";
	}
	while (pilihan!=4);
	return 0;
}
