#include<stdio.h>

int main(){

int temp,i,j,n;
printf("Enter the number of elements: ");
scanf("%d",&n);

int arr[n];
printf("Enter all the elements: ");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

//sorting

for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
       if(arr[j]>arr[j+1]){
           temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
     }
      
   }
}

//printing

printf("Array after sort: ");
for(i=0;i<n;i++){
printf(" %d ",arr[i]);
}
return 0;
}
