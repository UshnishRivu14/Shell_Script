#include<stdio.h>

int main(){

int i,n;
int arr1[]={1,2,3};
float arr2[]={2.5,3.6,7.6};


printf("Then newly created array is: ");
for(i=0;i<3;i++){
printf(" %d ",arr1[i]);
}
printf("\n");
printf("Then newly created array is: ");
for(i=0;i<3;i++){
printf(" %f ",arr2[i]);
}
return 0;
}
