#include "stdio.h"
#include<time.h>
int main(){

   clock_t start,finish;
   double totaltime;
   start=clock();
   
	long long  int  i=0;
	long long   int val = 1000000000;
	long long count=0;
	for (; i < val; i++ )
	count+=i;
	

	finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("最后i:%lld\t 总共%lld\t 时间:%lf",i,count,totaltime);
	
	
}
 
