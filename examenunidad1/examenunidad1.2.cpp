//examen unidad 1-2 " salario minimo por los puntos del maestro"-ADZM
#include<iostream>//input y output para el ingreso y salida de valores
using namespace std;
int main(){
	int a;//hablamos de puntos no existen decimales
	float b;//float por los decimales que pueden haber en un salario-ADZM
	cout<<"introduce los puntos del maestro"<<endl;
	cin>>a;
	cout<<"introduce el salario minimo del maestro"<<endl;
	cin>>b;
	if (a<50){
		cout<<"no le cooresponde ningun bono: "<<b<<endl;
	}
		else if (a>=50 && a<=100){
			cout<<"le corresponde un bono de:"<<b*0.1<<endl;
		}
			else if (a>=101 && a<=150){
				cout<<"le corresponde un bono de :"<<b*0.4<<endl;
			}
				else if (a>=151){
					cout<<"le corresponde un bono de :"<<b*0.7<<endl;
				}
			
		


	return 0;
}