#include <iostream>
#include <math.h>
using namespace std;
int n;
float mean(int *ptr){
    int m=0;
    for(int i=0; i<n; i++){
        m+= *(ptr+i);
    }
    return m/n;
}

float StdDev(int *ptr, float m){
    int s=0;
    for(int i=0; i<n; i++){
        s+=pow((*(ptr+i)-m),2);
    }
    s=s/(n-1);
    cout<<"Variance = "<<s<<"\n";
    return sqrt(s);
}
int main(){
    cout<<"How many numbers you have?";
    cin>>n;
    int inputs[n];
    for(int i=0; i<n; i++){
        cout<<"\nEnter a number";
        cin>>inputs[i];
    }
    cout<<"Standard Deviation = "<<StdDev(&inputs[0], mean(&inputs[0]));
}