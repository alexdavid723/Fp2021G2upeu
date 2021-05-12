//examenunidad3.3-ADZM "Tipos de vaunas a administrar"
#include <iostream>//input y output para el ingreso y salida de valores
using namespace std;
int main(){
	int e,g;//considerando la edad usamos el int=enteros -ADZM
	//si trabajamos con caracteres usamos el comando CHAR, pero para hacerlo sencillo solo usaremos solo el int"enteros"-ADZM 
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
		
	
	return 0;
}