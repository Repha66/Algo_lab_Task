#include<iostream>
using namespace std;


void printList(int *a,int n){
    for(int i=0;i<n;i++){
   cout<<a[i] <<" ";
}
cout<<endl;

}



int searchindex(int *a,int n,int num){
for(int i=0;i<n;i++){
    if(num==a[i]){
        return i;
    }

    }
    return -1;

}


int main(){
   int a[5]={10,20,30,40,50};

     printList(a,5);
  int index=searchindex(a,6,30);
  cout<<"30 found at the index "<<index<<endl;


return 0;
}
