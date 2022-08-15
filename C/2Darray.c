#include <stdio.h>

void main() {
	int i,j;
    printf("My name is Yuval\n");
	printf("Enter no of rows & columns: ");
	scanf("%d%d",&i,&j);
	int a[i][j];
	for(int x=0;x<i;x++) {
		for(int y=0;y<j;y++) {
			printf("Enter element %d,%d: ",x,y);
			scanf("%d",&a[x][y]);
		}
	}
	for(int x=0;x<i;x++) {
		for(int y=0;y<j;y++) {
			printf("%d\t",a[x][y]);
		}
		printf("\n");
	}
	
}