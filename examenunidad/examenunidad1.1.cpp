//Examen de la unidad 1 "Fundamentos de programacion" 'calculo de notas'
#include <iostream>//input y output para el ingreso y salida de valores
using namespace std;
int main (){
	float a,b,c,d;	//ponemos float por no ser valores enteros
  //proceso "ADZM"
	cout <<"ingrese la nota de la primera unidad"<<endl;
	cin>>a;
		cout <<"ingrese la nota de la segunda unidad"<<endl;
	cin>>b;
		cout <<"ingrese la nota de la tercera unidad"<<endl;
	cin>>c;	
		cout <<"ingrese la nota del trabajo final"<<endl;
	cin>>d;
	cout<<"a nota final es :"<<endl;
	cout<<a*0.2+b*0.15+c*0.15+d*0.5;
	return 0;
}