#include <iostream>
#include<locale.h>
using namespace std;
	
	
	
void showMenu(){
	cout<<"       ******ATM YE HO�GELD�N�Z******\n";
	cout<<"1 . Bakiyeniz\n";
	cout<<"2 . Para �ek\n";
	cout<<"3 . Para Yat�r\n";
	cout<<"4 . ��k��\n";
}



int main(){
	setlocale(LC_ALL, "Turkish");
	int option;
	double bakiye = 500;
	
	
	do{
		showMenu();
	
	cout<<"Se�enek:";
	cin>>option;
	switch(option){
		case 1: cout<<"Bakiyenizdeki Para: "<<bakiye<<endl ;
		break;
		case 2: cout<<"Ne kadar �ekmek istersiniz?  ";
		double deposit;
		cin>>deposit;
	
		cout<<deposit<<" Lira Para �ektiniz!!";
		if(bakiye <= deposit){
			cout<<"Yeterli Paran�z Yok!";
		}else
		bakiye -= deposit;
		
		break;
		case 3: cout<<"Ne kadar Yat�rmak istersiniz?";
		double withdraw;
		cin>>withdraw;
		
				
		bakiye += withdraw;
		
	}
}
while(option!=4);
	
}



