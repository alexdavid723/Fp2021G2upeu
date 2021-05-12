//problema07
#include <iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"ingrese la antiguedad en el trabajo:"<<endl;
	cin >>a;
	cout <<"ingrese su sueldo actual:"<<endl;
	cin>>b;
	if (2<a<5){
		cout<<"obtiene un bono de:"<<b*20/100;	
	}
	else if (a>5){
		cout<<"obtiene un bono de:"<<b*30/100;		
	}
	else if (b<=1000){
		cout<<"obtiene un bono de:"<<b*25/100;	
	}
	else if (b>1000 && b<=3500){
		cout<<"obtiene un bono de:"<<b*15/100;
}
	else if (b>3500){
		cout<<"obtiene un bono de:"<<b*10/100;
	}
	

return 0;
}