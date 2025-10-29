#include <iostream>
using namespace std;

int main(){
	int i,j,b,k,m,n,x,z,ketemu=0;
	int temp[100];
	
	cout<<"===================\n";
	cout<<"\n--Belajar Sorting--\n";
	cout<<"\n===================\n";
	cout<<"\nInputkan Banyak Data: ";
	cin>>n;
	
	int data[n];
	
	for(int i=0;i<n;i++){
		cout<<"Data Ke-"<<i<<" : ";
		cin>>data[i];
	}
	
	cout<<"\n\n";
	cout<<"Data Sebelum Diurutkan\n";
	
	for(int i=0;i<n;i++){
		cout<<i+1<<"."<<"\n";
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			if(data[i]<data[j]){
				m=data[i];
				data[i]=data[j];
				data[j]=m;
			}
		}
		cout<<"\n#"<<i<<": ";
		for(k=0;k<=i;k++){
			cout<<" "<<data[k];
		}
	}
	
	cout<<"\n\n";
	cout<<"Data Setelah Diurutkan (Ascending):\n";
	
	for(i=0;i<n;i++){
		cout<<i+1<<" "<<data[i]<<" \n";
	}
	
		for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			if(data[i]>data[j]){
				m=data[i];
				data[i]=data[j];
				data[j]=m;
			}
		}
		cout<<"\n#"<<i<<": ";
		for(k=0;k<=i;k++){
			cout<<" "<<data[k];
		}
	}
	
	cout<<"\n\n";
	cout<<"Data Setelah Diurutkan (Descending):\n";
	
	for(i=0;i<n;i++){
		cout<<i+1<<" "<<data[i]<<" \n";
	}
	
}
