// Insertion sort in C

#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int i, j, num, n=10;
    printf("Size: %d \n", n);
    int array[10];
    printf("Insert %d elements into the array:\n", n);
    for(i=0; i<n; i++) {
	scanf("%d", &num);
	array[i]=(int)num;
    }
    if(n>1) {
	int current_element;
	for(i=1; i<n; i++) {
	    current_element=array[i];
	    j=i-1;
	    while(j>=0 && array[j]>current_element) {
		array[j+1]=array[j];
		j--;
	    }
	    array[j+1]=current_element;
	}
    }
    printf("\nSorted array:\n");
    for(i=0; i<n; i++) {
	printf("%d\n", array[i]);
    }
    return EXIT_SUCCESS;
}
