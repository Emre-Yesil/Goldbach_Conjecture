#include<iostream>
using namespace std;
int main(){
    bool control = false;
    int q,k,j,m=5,n=2,number;
    int prime[262144];
    cout<<"Every even number can be express as sum of two prime numbers"<<endl;
    cin>> number;
    if(number % 2 != 0){
        cout<<"your number isn'n even number"<<endl;
        exit(0);
    }
    prime[0]=2;
    prime[1]=3;
    while(number > m){
       for(k=2;k<=(m/2);k++){
        if(m % k == 0){
         control = true;
        }
       }
       if(control == false){
        prime[n]=m;
        n++;
       }
       m++;
       control = false;
       } 
    for(j=0;j<=n-1-1;j++){
        for(q=0;q<=n-1;q++){
            if(prime[j]+prime[q]== number){
            cout<<prime[j]<<"+"<<prime[q]<<endl;
            break;
            }
        }
    }
    return 0;
}