#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    bool a = false;
    for(int i = 1; i < n; i++){
        for(int j = 0; j< (n -i) ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                a = true;
            }
        }
        if(a == false){
            break;
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
