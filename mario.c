#include <stdio.h>
int main()
{
 while(1) 
 {
		int i,sayi,k,j; 
	    printf("Height: ");
	    scanf("%d",&sayi);
	if (sayi<1 || sayi>8) {
		printf ("Please enter a number between 1 and 8\n");
	}
 	else {
    for(i=0; i<sayi; i++) {
        for (j=sayi-i; j>1; j--)
        {
            printf(" ");
        }
        for (k=0; k<i+1; k++)
        {
            printf("#");
        }
        printf("\n");
    	}
	}
}
    return 0;
}
