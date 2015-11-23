#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILED -1

int func(int);
void * x_array_map(void *,char *,int);

int func(int a){
	return 0;
}


int main(void){

	printf("START\n");
	char arr [3]={1,2,3};
	int len=sizeof(arr)/sizeof(arr[0]);
	int * res=(int *)x_array_map(&func,arr,len);
	printf("res address is : %p\n",res);

	for(int i=0;i<len;i++){
		printf("%d\n", *res);
		res++;
	}

	printf("END\n");
    return SUCCESS;
}


// 对每一个数组的value应用function
void * x_array_map(void *func,char * arr,int len){
	
	int (*funcP)();
	funcP=func;
	//foreach
	int * new_arr=malloc(sizeof(int)*len);
	
	for(int i=0;i<len;i++){
		*new_arr=(*funcP)(arr[i]);
		 new_arr++;
	}
	printf("new_arr address is : %p\n",new_arr);
	return new_arr;
	// (*funcP)();	


}

