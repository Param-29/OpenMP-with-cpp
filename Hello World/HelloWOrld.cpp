#include<iostream>
#include<omp.h> 	//Library Used for OpenMP

int main(){

	int id=0;
	
	#pragma omp parallel //give me a bunch of threads //structured block
	{
		int ID = omp_get_thread_num();//identfier of threads
		
		for(int i=0;i<10;i++){
			printf("%d",ID );
			printf("(%d)\n",ID );
		
		}
			//id++;
	}
	return 0;
}

