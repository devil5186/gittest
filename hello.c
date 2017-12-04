#include<stdio.h>
#include<stdlib.h>
int addup(int ,int );
int main(){
	int sum=0; 
	for(int i=0;i<100;i++){
		sum+=i;
	}
	printf("add up 0~99:\n\t%d\n",sum);
	printf("add up 0~99(func):\n\t%d\n",addup(0,99));
	return 0;
}
int addup(int begin,int end){
	int sum = 0;
	for(int i=begin;i<=end;i++)
		sum+=i;
	return sum;
}
