#include<iostream>
#include<omp.h>
using namespace std;
static long num_steps=1000000;
int numThreads=2;
double step;
	
int main(){

	//int i;
	double pi,sum[numThreads]={0.0};
	long num_steps_temp=num_steps/numThreads;
	step=1.0/(double) num_steps;
	omp_set_num_threads(numThreads);
	int tSum=0;
	#pragma omp parallel
	//for(int id=0;id<numThreads;id++)
	{
	int id=omp_get_thread_num();
	//cout<<"ID"<<id;
	double temp[num_steps_temp];

	for(int i=0,control=id*num_steps_temp;i<num_steps_temp;i++,control++){
		double x=(control+0.5)*step;
		temp[i]=4.0/(1+x*x);
		//cout<<temp[i]<<endl;
		//#pragma omp critical // or pragma omp atomic
		sum[id]+=temp[i];
		}

		#pragma omp critical // or pragma omp atomic
			tSum+=sum[id];
		
			
	}
	pi = step*tSum;
	cout<<pi<<endl;
	return 0;



}


