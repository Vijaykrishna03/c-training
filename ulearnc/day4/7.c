#include<stdio.h>
void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap((arr+j),(arr+j+1));
            }
        }
    }
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printarr(int arr[],int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void (*SortFunction) (int*,int);
void choosen(int choice)
{
   switch (choice) {
        case 1:
            SortFunction=&bubbleSort;
            break;
        case 2:
            SortFunction=&selectionSort;
            break;
        case 3:
            SortFunction=&insertionSort;
            break;
        default:
            printf("Invalid choice!\n");
    }
}
void getinput(int arr[],int *n)
{
    printf("enter the no of elements\n");
    scanf("%d",&*n);
    printf("enter the values\n");
    for(int i=0;i<*n;i++)
    {
        scanf("%d",&arr[i]);
    }

}
void displaymenu(int *choice)
{
    printf("Menu:\n");
    printf("1. bubble sort\n");
    printf("2. selection sort\n");
    printf("3. insertion sort\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &*choice);
}
int main() {
    int arr[200];
    int n;
    int choice;
    getinput(arr,&n);
    printf("unsorted array\n");
    printarr(arr,n);
    displaymenu(&choice);
    choosen(choice);
    SortFunction(arr, n);
    printf("Sorted array is: ");
    printarr(arr,n);
    return 0;
}