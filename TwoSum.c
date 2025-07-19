//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.You may assume that each input would have exactly one solution, and you may not use the same element twice.

#include <stdio.h>

int main(){
    int n,flage=0;
    printf("Enter the size if the array:-");
    scanf("%d",&n);
    int arr[n],target;
    for(int i=0;i<n;i++){
    printf("Enter the %d element:-",i+1);
    scanf("%d",&arr[i]);
    }
   printf("Enter the target ");
   scanf("%d",&target);
   
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(target==(arr[i]+arr[j])){
        printf(" %d %d ",i,j);
        flage=1;
        break;
        }
    }
}
if(flage){
    printf("Combination is found");
}else{
   printf(" no combination is found");
}

    return 0;
}