// merging as well as sorting of two arrays

#include<stdio.h>
void main(){
    int arr1[10],arr2[10],arr3[20];
    int i,n1,n2,m,index=0;
    int index_first=0,index_second = 0;
    printf("\n Enter the size of first array: ");
    scanf("%d",&n1);
    printf("\n Enter the elements: ");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("\n Enter the size of second array: ");
    scanf("%d",&n2);
    printf("\n Enter the elements: ");
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

    m = n1 + n2;

    while(index_first < n1 && index_second < n2)
    {
        if(arr1[index_first] < arr2[index_second])
        {
            arr3[index] = arr1[index_first];
            index_first++;
        }
        else
        {
            arr3[index] = arr2[index_second];
            index_second++;
        }

        index++;
    }
    if(index_first == n1){
        while(index_second<n2)
        {
            arr3[index] = arr2[index_second];
            index_second++;
            index++;
        }
    }else if(index_second == n2){
        while(index_first<n1){
            arr3[index] = arr1[index_first];
            index_first++;
            index++;
        }
    }

    printf("\n\n The contents of the merged array are");
    for(i=0;i<m;i++)
       printf("\t %d",arr3[i]);
}
