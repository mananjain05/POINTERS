#include<iostream>
using namespace std;
int product(int* p1,int* p2){
    return( (*p1)*(*p2));
}
int main(){

    int a,b;
    cin>>a>>b;
    int *p1=&a, *p2=&b;
    cout<<product(p1,p2);
}