#include <bits/stdc++.h>
using namespace std;

void printList(int *a,int n){
    for(int i=0;i<n;i++){
   cout<<a[i] <<" ";
}
cout<<endl;

}

int find2ndLargestNumber (int *a,int n){

    int Lnum = a[0];
    int secondLnum;
for(int i=0;i<n;i++){
    if(Lnum<a[i]){
        Lnum=a[i];

    }
}
     for (int i=0;i<n; i++) {
        if (a[i]>Lnum) {
             secondLnum = Lnum;
            Lnum = a[i];
        }
         else if (a[i]>secondLnum && a[i]<Lnum)
            {
            secondLnum = a[i];
    }

}
return secondLnum;
}

int main(){

int a[5]={50,20,80,40,60};
printList(a,5);

int b= find2ndLargestNumber(a,5);
cout<<"2nd largest number in the list is : "<<b<<endl;


return 0;

}
