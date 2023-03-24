#include<stdio.h>
void main(){
    printf("Enter the size of array: \n");
    int size;
  scanf("%d", &size);
   int arr1[size];
   int arr2[size];

   printf("Enter elements of first array: \n");
   for(int i = 0; i < size; i++){
    scanf("%d", &arr1[i]);
   }

    for(int i = 0; i < size; i++){
        arr2[i] = arr1[i];
    }

    printf("Elements of arr2: ");
    for(int i = 0; i < size; i++) {
        printf("%d", arr2[i]);
    }
   
}
