//problema3.18 "bono navideño"
#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"ingrese la antiguedad en el trabajo (en años):"<<endl;
	cin >>a;
	cout<<"ingrese su sueldo:"<<endl;
	cin >>b;
	if (a>=4 or b<=2000){
		cout<<"te corresponde un 25% del bono navideño:"<<b*0.25;	
}
else {
		cout<<"solo te corresponde un 20% del bono navideño:"<<b*0.2;
}
	

return 0;
