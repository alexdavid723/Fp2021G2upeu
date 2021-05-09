//problema 4 "tarifa de estacionamiento"
#include <iostream>
using namespace std;
int main(){
	int h;
	cout<<"introduce las horas de estacionamiento:";
	cin >>h;
	if(h<=2 and h<3){
		cout<<"sus horas de escionamiento es menor a las 2 horas por lo tanto su total es:"<<h*5;
	}
	else if (h>=3 and h<5){
		cout<<"sus horas de escionamiento es mayor a las 3 horas por lo tanto su total es:"<<h*4;
		
	}
		else if (h>=5 and h<10){
		cout<<"sus horas de escionamiento es mayor a las 5 horas por lo tanto su total es:"<<h*3;
		
	}
		else if (h>=10){
		cout<<"sus horas de escionamiento es mayor a las 10 horas por lo tanto su total es:"<<h*2;
		
	}

return 0;
}
