#include<iostream> 
using namespace std;  

int Linearsearch(int n,int k, int arr[]){  
for(int i=0;i<n;i++){  
   if(arr[i]==k) 
   return i;
 } 
 return -1;
}
int main(){ 
int n; 
cin>>n; 
int arr[n]; 
for(int i=0;i<n;i++){ 
cin>>arr[i];} 
int key; 
cin>>key; 
cout<<Linearsearch(n,key,arr); 
return 0;
}