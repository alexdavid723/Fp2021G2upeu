//problema3.14 "calificacion"
#include<iostream>
using namespace std;
int main(){
	int calificacion;
	cout<<"introdusca la calificacion entre 0-10: ";
	cin>>calificacion;
	switch (calificacion){
		case 6 && 7 :cout<<"su calificacion es: D"<<endl;break;
		case 8 :cout<<"su calificacion es: C"<<endl;break;
		case 9 :cout<<"su calificacion es: B"<<endl;break;
		case 10 :cout<<"su calificacion es: A"<<endl;break;
		default :cout<<"su calificacion es : F"<<endl;break;
	}
	
	return 0;
}