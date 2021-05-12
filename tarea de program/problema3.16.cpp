//problema3.16 "bono por desempeño"
#include<iostream>
using namespace std;
int main(){
	int p;
	cout<<"digite los puntos del maestro: ";
	cin>>p;
	if (0<p<=100){
		cout<<"su premio es 1 salario"<<endl;
	}
	else if (101<p<=150){
		cout<<"su premio es dos salarios minimos"<<endl;
		
	}
		else if (p>=151){
		cout<<"su premio es tres salarios minimos"<<endl;
	}
	return 0;
}