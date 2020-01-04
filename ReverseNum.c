#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 0;
	int arr[1000];
	scanf("%d", &n);
	for(int i =0; i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(int k = n; k > n;--k){
		printf("%d", arr[k]);
	}
	return 0; 
}
