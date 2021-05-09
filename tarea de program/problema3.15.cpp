//problema3.15 "dia de la semana"
#include<iostream>
using namespace std;
int main(){
	int dia;
	cout<<"introdusca un numero  entre 1-10: ";
	cin>>dia;
	switch (dia){
		case 1 :cout<<"es el dia lunes"<<endl;break;
		case 2 :cout<<"es el dia martes"<<endl;break;
		case 3 :cout<<"es el dia miercoles"<<endl;break;
		case 4 :cout<<"es el dia jueves"<<endl;break;
		case 5 :cout<<"es el dia viernes"<<endl;break;
		case 6 :cout<<"es el dia sabado"<<endl;break;
		case 7 :cout<<"es el dia domingo"<<endl;break;
		default :cout<<"no es un numero valido entre 1-10"<<endl;break;
	}
	
	return 0;
}