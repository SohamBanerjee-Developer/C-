#include<iostream>
using namespace std;
     
void selectionSort(int arr[], int n)// TC = n+(n-1)+(n-2)+...+2+1 = n(n+1)/2 => O(n^2) for best worst and average
{
       for(int i=0; i<n-1;i++){
           int min = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]) {
                min = j;
            }
        }

            swap(arr[i],arr[min]);
       }

    }
void bubbleSort(int arr[],int n){//TC = n+(n-1)+(n-2)+...+2+1 = n(n+1)/2 => O(n^2) for worst and average case, for best case O(n)
    for(int j=0;j<n;j++){
        int isSwap = 0;//optimization
    for(int i =0; i<n-1-j;i++){
        if(arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);
            isSwap = 1;
        }
    }
    cout<<"the sorted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
  
    }
    cout<<endl;    
    if (isSwap == 0) break;
    cout<<"runs"<<endl;
    }
}
void insertionSort(int arr[], int n){///TC = n+(n-1)+(n-2)+...+2+1 = n(n+1)/2 => O(n^2) for worst and average case, for best case O(n)
    for(int i =0; i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
void mergeSort(int arr, int n){

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
  
    }
    cout<<"the initial array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
  
    }
    cout<<endl;
    // selectionSort(arr,n);
    // bubbleSort(arr,n);
    insertionSort(arr,n);
    cout<<"the sorted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
  
    }
    return 0;
}