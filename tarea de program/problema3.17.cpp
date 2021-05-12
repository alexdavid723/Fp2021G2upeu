//problema3.17 "¿que puedo comprar en diciembre con mi dinero recibido?"
#include<iostream>
using namespace std;
int main(){
	int p;
	cout<<"¿cuanto dinero recibio?"<<endl;
	cin>>p;
	if (p>=50000){
		cout<<"puedes comprar el paquete A. que incluye una television, un modular, tres pares de zapatos, cinco camisas y cinco pantalones"<<endl;
	}
	else if (p<=50000 && p>=20000){
		cout<<"puedes comprar el paquete B. que incluye una grabadora, tres pares de zapatos, cinco camisas y cinco pantalones"<<endl;
		
	}
		else if (p<=20000 && p>=10000){
		cout<<"puedes comprar el paquete C. que incluye dos pares de zapatos, tres camisas y tres pantalones"<<endl;
	}
		else if (p<10000){
		cout<<"puedes comprar  un par de zapatos, dos camisas y dos pantalones"<<endl;
	}
	return 0;
}