#include<stdio.h>
#include<string.h>
int main(){
	int t,M,N;
	char s[10000];
	scanf("%d",&t);
	while(t--){
     scanf("%s %d %d",s,&N,&M);
     for(int i=N;i<=M;i++){
		 for(int j=i+1;j<=M;j++){
        if(s[i]<s[j]){
         int temp=s[i];
		 s[i]=s[j];
		 s[j]=temp;
	   }
		}
	 }
	 printf("%s\n",s);
	}
	return 0;
}