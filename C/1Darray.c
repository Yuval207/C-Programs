#include <stdio.h>

void main() {
	int len;
    printf("My name is Yuval\n");
	printf("Enter the length of the array:\n");
	scanf("%d",&len);
	int a[len];
	printf("Enter the elements of the array:\n");
	for(int x=0;x<len;x++) {
		
		scanf("%d",&a[x]);
	}

	for(int x=0;x<len;x++) {
		printf("%d\t",a[x]);
	}
	
}