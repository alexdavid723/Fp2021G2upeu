//problema3.11 "bono por antiguedad"
#include <iostream>
using namespace std;
int main(){
	float a;
	cout<<"ingrese la antiguedad en el trabajo (en años):"<<endl;
	cin >>a;
	if (a==1){
		cout<<"obtiene un bono de: $100"<<endl;	
	}
	else if (a==2){
		cout<<"obtiene un bono de: $200"<<endl;		
	}
	else if (a==3){
		cout<<"obtiene un bono de: $300"<<endl;		
	}
	else if (a==4){
		cout<<"obtiene un bono de: $400"<<endl;	
}
	else if (a>=5){
		cout<<"obtiene un bono de: $1000"<<endl;	
	}
	

return 0;
}