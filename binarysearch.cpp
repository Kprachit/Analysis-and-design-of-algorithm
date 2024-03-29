#include<iostream> 
using namespace std;  
 int binarySearch(int nums[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high)/2;    
        if (target == nums[mid]) {
            return mid;}
        else if (target < nums[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    } 
     return -1;
}
int main(void)
{
    int n;
    cin>>n; 
    int arr[n]; 
    for(int i=0;i<n;i++){ 
      cin>>arr[i];}  
   int key; 
   cin>>key;
   int index=binarySearch(arr,n,key);
    cout<<index;
    return 0;
}