#include<stdio.h>
void reversed(){
	printf("enter 10 integers\n");
	int a[10];
	for(int i=0;i<10;i++){
		printf("a[%d]:",i+1);
		scanf("%d",&a[i]);		
	}
	printf("display in the reversed order\n");
	for (int i=9;i>=0;i--){
		printf("%d\n",a[i]);	
	}
}
int main(){
	reversed();
}

