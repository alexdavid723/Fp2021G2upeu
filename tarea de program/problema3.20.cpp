//problema3.19 "vacunas tipos"
#include<iostream>
using namespace std;
int main(){
	int e,s;
	cout<<"introduce tu sexo: 1.-masculino o 2.-femenino:"<<endl;
	cin >>s;
	cout<<"introduce tu edad:"<<endl;
	cin>>e;
	if (e>=70){
			cout<<"se le aplica la vacuna de tipo C:"<<endl;
	}
	else if (e>=16 && e<=69 && s==2){
		cout<<"se le aplica la vacuna de tipo B:"<<endl;
	}
		else if (e>=16 && e<=69 && s==1){
		cout<<"se le aplica la vacuna de tipo A:"<<endl;
	}
	else if (e<16){
		cout<<"se le aplica la vacuna de tipo A:"<<endl;
	}
	
	
	
	
return 0;
}