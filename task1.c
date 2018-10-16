#include  <unistd.h> 
#include<stdio.h>
#include<stdlib.h>
#include  <sys/types.h> 
#include<string.h>
#include<sys/wait.h>

void main(){
	int array[1000];
	int cprocess[10];
	int tot_Sum=0;
	for(int i=0;i<1000;i++){
		array[i]=i;		
	}
	int fileDsp[2];			// 0 for reaading..............1 for writing
	int nums=0;
	for(int i=0;i<10;i++){
		if(pipe(fileDsp)==-1){
			printf("Somehow, Pipe has Failed" );
		}
	int cpid=fork();
	if(cpid==0){	// child created
		close(fileDsp[0]);	//  closed for reading.	
		int k=0;
		for(int i=nums;i<nums+100;i++){
			k+=array[i];	
		}
		nums=nums+100;
		write(fileDsp[1],&k,sizeof(k));
		close(fileDsp[1]);	
		exit(0);
		}
		else{		// >0 or <0 koi chakar hi nahi xD
			close(fileDsp1[1]);		//  closed for writing.
			cprocess[i]=0;		// put 0 as sum where process is failed
			read(fileDsp1[0],&cprocess[i],sizeof(cprocess[i]));
		}
	}
	//printing sum of 1000 no's
	for(int i=0;i<10;i++){
		tot_Sum+=cprocess[i];
	}
	printf("%d\n",tot_Sum);		
}