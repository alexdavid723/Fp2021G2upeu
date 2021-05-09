//problema07
#include <iostream>
using namespace std;
int main(){
	int a;
	float b;
	cout<<"introduce la edad del alumno:";
	cin>>a;
	cout<<"introduce el promedio del alumno:";
	cin>>b;
	if(a<=18 && b>=9){
		printf("tiene una beca de $3000");
	}
	else if (a<=18 && b>=8){
	printf("tiene una beca de $2000");
}
else if (a<=18 && b<8 && b>=6){
	printf("tiene una beca de $100");
}
else if (a<=18 && b<6){
	printf("se le envia una invitacion");
}
	if(a>18 && b>=9){
		printf("tiene una beca de $2000");
	}
	else if (a>18 && b>=7.5){
	printf("tiene una beca de $1000");
}
else if (a>18 && b<7.5 && b>=6){
	printf("tiene una beca de $500");
}
else if (a>18 && b<6){
	printf("se le envia una invitacion");
}
return 0;
}