//examen unidad 1-5 "algoritmo para probra cualquiera de los algoritmos anteriores como: 1, 2, 3 y 4"-ADZM
#include <iostream>
#include <math.h>
using namespace std;
int main(){//primer algoritmo (nota final)-ADZM
	int a;
	cout<<"elija un algoritmo anterior para ejecutarlo:"<<endl;
	cout<<"1.-ejecutar primer algoritmo (nota final)"<<endl;
	cout<<"2.-ejecutar segundo algoritmo (bono para el maestro)"<<endl;
	cout<<"3.-ejecutar tercer algoritmo (tipo de vacuna por administrar)"<<endl;
	cout<<"4.-ejecutar cuarto algoritmo (operacion aritmetica)"<<endl;
	cin>>a;
	if (a==1){
	float z,x,y,w;
	cout <<"ingrese la nota de la primera unidad"<<endl;
	cin>>z;
		cout <<"ingrese la nota de la segunda unidad"<<endl;
	cin>>x;
		cout <<"ingrese la nota de la tercera unidad"<<endl;
	cin>>y;	
		cout <<"ingrese la nota del trabajo final"<<endl;
	cin>>w;
	cout<<"a nota final es :"<<endl;
	cout<<z*0.2+x*0.15+y*0.15+w*0.5;
}
else if (a==2){//bono del maestro
	int p;
	float i;
	cout<<"introduce los puntos del maestro"<<endl;
	cin>>p;
	cout<<"introduce el salario minimo del maestro"<<endl;
	cin>>i;
	if (p<50){
		cout<<"no le cooresponde ningun bono: "<<i<<endl;
	}
		else if (p>=50 && p<=100){
			cout<<"le corresponde un bono de:"<<i*0.1<<endl;
		}
			else if (p>=101 && p<=150){
				cout<<"le corresponde un bono de :"<<i*0.4<<endl;
			}
				else if (p>=151){
					cout<<"le corresponde un bono de :"<<i*0.7<<endl;
				}
			}
else if (a==3){// tipos de vacuna
	int e,g;
	cout<<"Ingrese su edad:"<<endl;
	cin>>e;
	cout<<"ingrese el numero correspondiente a su sexo solo los numeros '1' o '2':"<<endl;
	cout<<"1.-masculino"<<endl<<"2.-femenino"<<endl;
	cin>>g;
	if (e>=70 && g==1 && g==2){
		cout<<"se le aplica la vacuna de tipo C"<<endl;
	}
		else if (e>=16 && e<=69 && g==2){
			cout<<"se le aplica la vacuna de tipo B"<<endl;
		}
			else if (e>=16 && e<=69 && g==1){
				cout<<"se le aplica la vacuna de tipo A"<<endl;
			}
				else if (e<16){
				cout<<"se le aplica la vacuna de tipo A"<<endl;
			}
		}
else if (a==4){//operaciones matematicas
	float k,m;
	char l;
	cout<<"ingrese el primer valor"<<endl;
	cin>>k;
	cout<<"ingrese el segundo valor"<<endl;
	cin>>m;
	cout<<"ingrese una operacion matemática (signo) como: +, -, *, / y ^ "<<endl;
	cin>>l;
	switch (l){
		case '+':cout<<"la adicion es:"<<k+m;break;
		case '-':cout<<"la sustraccion es: "<<k-m;break;
		case '*':cout<<"la multiplicacion es: "<<k*m;break;
		case '/':cout<<"la division es :"<<k/m;break;
		case '^':cout<<"la potencia del primer valor con respecto al segundo es: "<<pow(k,m);break;
		default :cout<<"no es una operacion matematica ";break;
	}
}
else {
	cout<<"no es un numero valido"<<endl;
}
return 0;
}