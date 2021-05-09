//problema3.12 "sueldo semanal"
//consideor que por hora pagan $5
#include <iostream>
using namespace std;
int main(){
	float a;
	int b=5;
	cout<<"ingrese las horas trabajadas en la semana:"<<endl;
	cin >>a;
	if (a>=41 && a<=45){
		cout<<"por cada hora se te paga el doble:"<<endl<<a*5*2;	
	}
	else if (a>=46 && a<=50){
		cout<<"por cada hora se te paga el triple:"<<endl<<a*5*3;	
	}
	else if (a>50){
		cout<<"no esta permitido trabajar mas de 50 horas, por lo tanto: "<<a*5 ;
	
	}

	

return 0;
}