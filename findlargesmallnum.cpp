#include <bits/stdc++.h>
using namespace std;

void printList(int *a,int n){
    for(int i=0;i<n;i++){
   cout<<a[i] <<" ";
}
cout<<endl;

}

int findLargestNumber (int *a,int n){

    int num = a[0];
for(int i=0;i<n;i++){
    if(num<a[i]){
        num=a[i];

    }
}
    return num;

}

int findSmallestNumber (int *p,int n){

    int num = p[0];
for(int i=0;i<n;i++){
    if(num>p[i]){
        num=p[i];

    }
}
    return num;

}


int main(){

int a[5]={10,20,30,40,50};
printList(a,5);

cout<<"largest number in the list is : "<<findLargestNumber(a,5)<<endl;
cout<<"smallest number in the list is : "<<findSmallestNumber(a,5)<<endl;


return 0;

}



