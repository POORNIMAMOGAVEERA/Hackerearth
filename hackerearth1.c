#include<stdio.h>
int main(){
	int N,arr[100];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d\n",&arr[i]);
	}
    for(int i=N-1;i>=0;i--){
		printf("%d\n",arr[i]);
	}
	return 0;
}
