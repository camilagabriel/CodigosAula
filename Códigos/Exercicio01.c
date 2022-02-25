//exercicio 01 - 31/08/2021 

#include <stdio.h>

int main(){
	int nro;
	for(nro=1; nro<=100; nro++){
	
		
		if((nro%3 == 0) && (nro%5 == 0)){
		printf("Ping Ding\n");
		}
		
		if(nro%3 == 0){
			printf("Ding\n");	
		}
		
		else if(nro%5 == 0){
			printf("Ping\n");	
		}
		
		else
			printf("%d\n", nro);	
    }		
	
	printf("Lee/n");
	
	return 0;
}
