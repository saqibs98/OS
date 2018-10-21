#include  <stdio.h>
#include  <stdlib.h> 
#include  <pthread.h>
void  *  MyThreadSum(void  *  calc);
int  main(){  
       pthread_t t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
	   void *s1,*s2,*s3,*s4,*s5,*s6,*s7,*s8,*s9,*s10;
	   int arr[1000];
	   int hundred=100;
	   for(int i=0;i<1000;i++)	
		  arr[i]=i;
	   pthread_create(&t1,  NULL,  MyThreadSum,(void *)0);
	   pthread_create(&t2,  NULL,  MyThreadSum,(void *)100);
	   pthread_create(&t3,  NULL,  MyThreadSum,(void *)200);
	   pthread_create(&t4,  NULL,  MyThreadSum,(void *)300);
	   pthread_create(&t5,  NULL,  MyThreadSum,(void *)400);
	   pthread_create(&t6,  NULL,  MyThreadSum,(void *)500);
	   pthread_create(&t7,  NULL,  MyThreadSum,(void *)600);
	   pthread_create(&t8,  NULL,  MyThreadSum,(void *)700);
	   pthread_create(&t9,  NULL,  MyThreadSum,(void *)800);
	   pthread_create(&t10,  NULL,  MyThreadSum,(void *)900);
	   //pthread_join(aThread,  NULL);     
	   //printf(“Exiting  the  main  function.\n");
	    pthread_join(t1, (void **)&s1;
	    pthread_join(t2, (void **)&s2;
		pthread_join(t3, (void **)&s3;
		pthread_join(t4, (void **)&s4;
		pthread_join(t5, (void **)&s5;
		pthread_join(t6, (void **)&s6;
		pthread_join(t7, (void **)&s7;
		pthread_join(t8, (void **)&s8;
		pthread_join(t9, (void **)&s9;
		pthread_join(t10,(void **)&s10;
		int tot_sum=0;
		tot_sum= (int)s1,(int)s2,(int)s3,(int)s4,(int)s5,(int)s6,(int)s7,(int)s8,(int)s9,(int)s10;
		printf("Total Sum : %d",tot_sum);
	  return  0;   
	  }
	  void  *  MyThreadSum(void  *  calc){ 
				int sum=0;
				for(int i=(int)calc;i<(int)calc+hundred;i++)
					sum=sum+arr[i];
				return (void *)sum; 
	  }