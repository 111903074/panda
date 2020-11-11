#include<stdio.h>
int main(){
    const int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int element_array[size];

    //taking elements in array
    printf("Enter elements of array:\n");
    for (int i=0; i < size; i++){
        scanf("%d",&element_array[i]);
    }

    int pos=0;
    printf("Enter position at which you wish to insert the element (1 to %d):\n[1 denotes insertion at the start\n%d indicates insertion at end of array] : ",size+1,size+1);
    scanf("%d",&pos);



    if (pos > 0 && pos<= size+1){
        int element=0;
        printf("Enter element to be inserted: ");
        scanf("%d",&element);

        //adding at any position
        for (int i = size; i >= pos; i--){
            element_array[i] = element_array[i-1];
        }
        element_array[pos-1] = element;

        //printing element_array
        for (int i=0; i < size+1; i++){
            printf("%d ",element_array[i]);
        }
    }
    else{
        printf("\nEntered position is out of array");
    }

    return 0;
}

