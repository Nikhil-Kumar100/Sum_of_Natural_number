#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"Enter Natural Number :-  ";
    cin>>number;
    for(int i=1;i<=number;i++){
        sum= sum+i;
        cout<<"natural number is: "<<i<<endl;
    }
    cout<<"Sum of Natural Number is: "<<sum;
    return 0;
}
