//problema 3.3 "regalos14 de febrero"
#include <iostream>
main(){
	unsigned int m;
	printf("introduce tu monto total disponible:");
	scanf("%d",&m);
	if(m<=10){
		printf("puede comprar una targeta de regalo");
	}
	else if (m>=11 && m<=100){
	printf("puede comprar unos chocolates");
}
else if (m>=101 && m<=250){
	printf("puede comprar unas flores");
}
else if (m>=251){
	printf("puede comprar unos chocolates");
}
return 0;


	}
	