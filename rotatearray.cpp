#include<bits/stdc++.h>
#include<vector>
using namespace std;
int  rotatearrya(int arr[],int n,int k){
    int temp[n];
    int i;
    for(i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++) 
      {
      return  arr[i] = temp[i];
      }

}
int main(){
   int n;
   cout<<"enter the size of array:  \n";
 cin>>n;
 int arr[n];
 int i;
 cout<<"enter the elements of aray: \n";
 for(i=0;i<n;i++){
     cin>>arr[i];
 }
 cout<<"entered array is: \n";
 for(i=0;i<n;i++){
     cout<<"  "<<arr[i];
 }
 cout<<"\n";
 rotatearrya(arr,5,2);
for(i=0;i<n;i++){
     cout<<"  "<<arr[i];
 }
 
return 0;
}