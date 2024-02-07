
#include <stdio.h>

int main() {
    
    int A[7]={35,45,5,40,65,15,8};
    int B[7]={};
    int i,min, max,count=0, n=5, j=0;
    
    min=A[0];
    for(i=0;i<7;i++)
        if(A[i]<min)
            min=A[i];
    printf("min :%d\n", min);
    
    max=A[0];
    for(i=0;i<7;i++)
        if(A[i]>max)
            max=A[i];
    printf("max :%d\n", max);
    
    if(n<=min||n>=max){
        printf("The number is out of range!\n");
        return 0;
    }
    
    
    for(i=0;i<7;i++)
        if(A[i]<n){
            B[j]= A[i];
            j++;
            count++;
        }
    
   
    max=B[0];
     for(i=1;i<count;i++){
        if(B[i]>max)
            max=B[i];
       
    }
    printf("Max number under %d is : %d\n",n,max);
    
    return 0;
}
