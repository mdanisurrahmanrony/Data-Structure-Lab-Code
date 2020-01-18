#include<stdio.h>
#include<stdlib.h>

main(){
int n,*ptr,*p,sum=0,i,j;


    printf("enter the num of series\n");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));


    //for(i=1;i<=n;i++)
    //{
            for(*ptr=n;*ptr<=n*8;*ptr=*ptr+8){
        printf("%d\t",*ptr);


            }

    //}


}
