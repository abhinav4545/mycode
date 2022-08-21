#include <iostream>
using namespace std;

int sum(int n,int array[]){
    if(n==0){
        return 0;
    }
    if(n==1){
        return array[0];
    }
    if(n>1){
        int k{};
        k=array[0]+sum(n-1,array +1);
        return k;
    }
}
int main(){
    int array[]={2,3,4,5,6};
    int arraySize=sizeof(array)/sizeof(array[0]);
    int output=sum(arraySize,array);
    cout<<output;



	return 0;
}
