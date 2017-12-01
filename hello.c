#include<stdio.h>
#include<stdlib.h>
int addup(int ,int );
int main(){
	printf("%d",addup(0,99));
	int sum=0; 
	printf("hello world");
	for(int i=0;i<100;i++){
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}

int addup(int begin,int end){
	int sum = 0;
	for(int i=begin;i<=end;i++)
		sum+=i;
	return sum;
}
