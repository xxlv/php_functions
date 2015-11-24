#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILED -1
#define param_type int


param_type *x_array_map(param_type (*f)(param_type) ,param_type * ,int);

int add(int a){
	return a;
}

int main(){
	int a[3]={1,2,3};
	
	param_type* result=x_array_map(add,a,3);
	for (int i = 0; i < 3; ++i)
	{
		printf("%d\n", result[i]);
	}

	return SUCCESS;
}


param_type * x_array_map (param_type (*f)(param_type) ,param_type* array ,int len){

	param_type * res=(param_type *)malloc(sizeof(param_type)* len);

	for(int i=0;i<len;i++){
		res[i]=f(array[i]);
	}
	return res;
}

