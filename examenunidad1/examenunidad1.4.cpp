//examen unidad 1-4 "multiplicacion,division.adicion, sustraccion y potencia"
#include <iostream>//input y output para el ingreso y salida de valores-ADZM
#include <math.h>//libreria para valores matemáticos-ADZM
using namespace std;
int main (){
	float a,b;
	char c;
	cout<<"ingrese el primer valor"<<endl;
	cin>>a;
	cout<<"ingrese el segundo valor"<<endl;
	cin>>b;
	cout<<"ingrese una operacion matemática (signo) como: +, -, *, / y ^ "<<endl;
	cin>>c;
	switch (c){//utilizamos la sentencia switch por casos-ADZM
		case '+':cout<<"la adicion es:"<<a+b;break;
		case '-':cout<<"la sustraccion es: "<<a-b;break;
		case '*':cout<<"la multiplicacion es: "<<a*b;break;
		case '/':cout<<"la division es :"<<a/b;break;
		case '^':cout<<"la potencia del primer valor con respecto al segundo es: "<<pow(a,b);break;
		default :cout<<"no es una operacion matematica ";break;
	}
	
	
	
	return 0;
}