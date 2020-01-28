#include<iostream>
#include<omp.h>
using namespace std;
static long num_steps=1000;
double step;
	
int main(){
	cout<<"In here";
	double pi,sum=0.0;
	step=1.0/(double) num_steps;
	double temp[num_steps];
	omp_set_num_threads(1000);
	#pragma omp parallel
	{

	//for(i=0;i<num_steps;i++){
		cout<<omp_get_num_threads()<<endl<<endl;
	
		int i=omp_get_thread_num();
		//cout<<i<<endl;
		double x=(i+0.5)*step;
		temp[i]=4.0/(1+x*x);
	//	}
	

	}
	
	for(int i=0;i<num_steps;i++){
		sum+=temp[i];
	}
	pi = step*sum;
	cout<<pi<<endl;
	
	/*
	int i;
	
	
	*/
	return 0;
}
