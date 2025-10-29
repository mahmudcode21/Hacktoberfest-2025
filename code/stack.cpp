#include <iostream>
using namespace std;

struct stack {
	int data[5];
	int atas;
};
stack tumpuk;

int main(){
	int pilihan, baru, i;
	
	tumpuk.atas=-1;
	do{
		cout<<"1. PUSH DATA\n";
		cout<<"2. POP DATA\n";
		cout<<"3. PRINT DATA\n";
		cout<<"Masukkan pilihan\n";
		cin>>pilihan;
		cout<<"\n";
		
		switch(pilihan){
			
			case 1 :
				if (tumpuk.atas==5-1){
					cout<<"TUMPUKAN PENUH\n\n";
				}
				else {
					cout<<"MASUKKAN DATA  :  ";
					cin>>baru;
					tumpuk.atas++;
					tumpuk.data[tumpuk.atas]=baru;
					cout<<"\n";
				}
				break;
			case 2 :
				if (tumpuk.atas==-1){
					cout<<"TUMPUKAN KOSONG\n\n";
				}
				else {
					cout<<"DATA YANG AKAN DI POP  =  "<<tumpuk.data[tumpuk.atas];
					cout<<"\n";
					tumpuk.atas--;
				}
				break;
			case 3 :
				if (tumpuk.atas==-1){
					cout<<"TUMPUKAN KOSONG\n\n";
				}
				else {
					cout<<"DATA  - ";
					for(i=tumpuk.atas;i>=0;i--){
						cout<<tumpuk.data[i];
						cout<<" ";
					}
					cout<<"\n";
				}
				break;
			default : 
			cout<<"TIDAK ADA DALAM PILIHAN";
				break;
		}
	}
	while ((pilihan>=1)&&(pilihan<=3));
	return 0;
}
