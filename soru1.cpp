#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
   int secim;
   double r,alan,cevre, alttaban, yukseklik, uzunkenar, kisakenar, kenar;
   
   while(true){
		cout<<"1) Daire alani hesapla \n";
		cout<<"2) Ucgen alani hesapla \n";
		cout<<"3) Dikdortgen alani hesapla \n";
		cout<<"4) Kare alani hesapla \n";
		cout<<"5) Cikis \n";
		
		cin>>secim;
		
		if(secim == 1){
			cout<<"Lutfen dairenin yaricapini giriniz.\n";
			cin>>r;
			alan=3.14*r*r;
			cout<<"Dairenin Alani : "<<alan<<endl;
		}else if(secim == 2){
			cout<<"Lutfen ucgenin taban uzunlugunu giriniz.\n";
			cin>>alttaban;
			cout<<"Lutfen ucgenin yuksekligini giriniz.\n";
			cin>>yukseklik;
			alan = (alttaban * yukseklik )/ 2;
			cout<<"Ucgenin Alani : "<<alan<<endl;
		}else if(secim == 3){
			cout<<"Lutfen dikdortgenin uzun kenarini giriniz.\n";
			cin>>uzunkenar;
			cout<<"Lutfen dikdortgenin kisa kenarini giriniz.\n";
			cin>>kisakenar;
			alan = uzunkenar * kisakenar;
			cout<<"Dikdortgenin Alani : "<<alan<<endl;
		}else if(secim == 4){
			cout<<"Lutfen karenin kenar uzunlugunu giriniz.\n";
			cin>>kenar;
			alan = kenar * kenar;
			cout<<"Karenin Alani : "<<alan<<endl;
		}else if(secim == 5){
			break;
		}
		
   }
	
	return 0;
}


