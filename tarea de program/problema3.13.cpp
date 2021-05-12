//problema3.13 "viaje de los alumnosl"
//consideor que por hora pagan $5
#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"ingrese el numero de alumnos que viajaran:"<<endl;
	cin >>a;
	if (a>100){
		cout<<"por cada alumno se paga $20:"<<endl<<a*20;	
	}
	else if (a>=50 && a<=100){
		cout<<"por cada alumno se paga $35:"<<endl<<a*35;	
	}
	else if (a>=20 && a<=49){
		cout<<"por cada alumno se paga $40: "<<endl<<a*40 ;
	}
		else if (a<20){
		cout<<"por cada alumno se paga $70: "<<endl<<a*70 ;
	}

	

return 0;
}