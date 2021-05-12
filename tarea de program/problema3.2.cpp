//Problema 3.02 "sueldo semanal"

using namespace std;
//librería
#include <iostream>
//proceso
int main() {
	float h,s;
	cout<<"digite las horas trabajadas:"<<endl;
	cin>>h;
	cout<<"digite el sueldo del trabajador:"<<endl;
	cin>>s;
	if (h<40){
	cout<<"las horas trabajadas no excede de las 40 horas por lo tanto no se paga el doble:"<<endl<<s;
	}
	else{
		cout<<"las horas trabajadas excede de las 40 horas por lo tanto tiene se le paga el doble:"<<endl<<s*2;
	}


  return 0;
}
	