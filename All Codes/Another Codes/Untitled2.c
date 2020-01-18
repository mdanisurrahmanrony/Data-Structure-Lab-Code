#include<stdio.h>
#include<stdlib.h>

main(){
int n,*ptr,*p,sum=0,i,j;


    printf("enter the num of series\n");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));


    //for(i=1;i<=n;i++)
    //{
            for(*ptr=1;*ptr<=n*2;*ptr=*ptr+2){
        printf("%d\t",*ptr);


            }

    //}


}
