#include<iostream>
#include<omp.h>
using namespace std;
static long num_steps=1000000;
double step;
	
int main(){

	int i;
	double pi,sum=0.0;
	step=1.0/(double) num_steps;
	double temp[num_steps];
	#pragma omp parallel for reduction(+:sum) 
	for(i=0;i<num_steps;i++){
		double x=(i+0.5)*step;
		temp[i]=4.0/(1+x*x);
		//cout<<temp[i]<<endl;
		sum+=temp[i];
		}
		
//	for(int i=0;i<num_steps;i++){
//	sum+=temp[i];	
//	}
	pi = step*sum;
	cout<<pi<<endl;
	return 0;
}

