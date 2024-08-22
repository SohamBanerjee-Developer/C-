#include<iostream>
#include<vector>
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
//mergeSort: the division takes approx logn base 2 and mege takes approx n so the tc is O(nlog2n) here 2 is the base for all the cases
// sc: in each merge we are creating a temp arr aliong with other arr so the SC is O(n)
void merge(vector<int> &arrV, int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    vector <int> temp;
    while(left<=mid && right<=high){
        if(arrV[left]<=arrV[right]){
            temp.emplace_back(arrV[left]);
            left++;
        }else{
            temp.emplace_back(arrV[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.emplace_back(arrV[left]);
        left++;
    }
    while(right<=high){
        temp.emplace_back(arrV[right]);
        right++;
    }
    for(int i=low; i<=high;i++){
        arrV[i] = temp[i-low]; 
    }

}
void ms(vector<int> &arrV,int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    ms(arrV, low, mid);
    ms(arrV, mid+1, high);
    merge(arrV,low,mid,high);
    
}
//QuickSort: TC is O(NlogN) SC O(1) we use quicksort over merge sort because its space complexcity is lesser
int qs(int arr[],int low, int high){
    int pivot = arr[low];
    int L = low;
    int H = high;
    while(L<H){
        while(arr[L]<=pivot && L<=high-1){
            L++;
        }
        while(arr[H]>pivot && H>=low+1){
            H--;
        }
        if(L<H) swap(arr[L],arr[H]);
    }
    swap(arr[H],arr[low]);
    return H;

}
void sort(int arr[], int low, int high){
  
    if(low>=high) return;
    int pivotIndex = qs(arr, low, high);
    sort(arr, low, pivotIndex-1);
    sort(arr,pivotIndex+1,high);
}
int main(){
    int n;
    cin>>n;
    int input,arr[n];
    vector <int> arrV;
   /* for(int i=0;i<n;i++){
        cout<<i<<"th"<<" "<<"input: ";
        cin>>input;
        arrV.emplace_back(input);
  
    }
    cout<<"the initial array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arrV[i]<<" ";
  
    }
    cout<<endl;
    // selectionSort(arr,n);
    // bubbleSort(arr,n);
    // insertionSort(arr,n);
    // ms(arrV,0,n-1);
    cout<<"the sorted array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arrV[i]<<" ";
  
    }*/
     
    for(int i=0;i<n;i++){
        cin>>arr[i];
  
    }
     cout<<"the initial array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
  
    }
    sort(arr,0,n-1);
     cout<<"\nthe sorted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
  
    }

   

    return 0;
}