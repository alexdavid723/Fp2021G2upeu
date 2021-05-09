//problema 6
#include <iostream>
using namespace std;
int main(){

	float c;
	cout<<"introduce el costo del articulo:";
	cin >>c;
	if(c>=200){
		cout<<"se le aplica un descuento de 15%:"<<c*15/100;
		
	}
	else if (c>100 && c<200){
		cout<<"se le aplica un descuento de 12%:"<<c*12/100;
		
	}
	else if (c<=100){
		cout<<"se le aplica un descuento de 10%:"<<c*10/100;
		
	}

		

return 0;
}