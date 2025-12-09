#include<iostream>
using namespace std;
int main() {
//5 integers -> 6,5,7,4,8
int arr[5]; //declaration
cout<<"enter array elements :";
for(int i=0 ; i<=4 ; i++) {
    cin>>arr[i];
}
for(int i=0 ; i<=4 ; i++) {
    cout<<arr[i]<<" ";
}
arr[0] = 100; //updated
cout<<endl;
for (int i=0; i<=4; i++)
{
    cout<<arr[i]<<" ";
}
}