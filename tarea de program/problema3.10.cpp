//problema3.10 "poliza de seguros"
#include<iostream>
using namespace std;
int main(){
	int a;//digamos que por cada KM es $10
	cout<<" 1.-mexico"<<endl;
	cout<<" 2.-P.V"<<endl;
	cout<<" 3.-acapulco"<<endl;
	cout<<" 4.-cancun"<<endl;
	cout<<" ¿a done te gustaria viajar?"<<endl;
	cin>> a;
	switch (a){
    case 1:cout<<" para viajar a mexico necesitaras $15000"<<endl;break;
    case 2:cout<<"para viajar a P.V necesitaras $16000"<<endl;break;
    case 3:cout<<"para viajar a acapulco necesitaras $24000"<<endl;break;
	case 4:cout<<"para viajar a cancun necesitaras $36000"<<endl;break;
	default :cout<<"o puedes considerar quedarte en casa"<<endl;break;
	
}
	
	return 0;
}
