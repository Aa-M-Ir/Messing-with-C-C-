#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
void change(string num){
	//cout<<num;
	int sum=0, power=num.length()-1;
	for(int i=0; i<num.length(); i++){
		if(num[i]=='1'){
			sum+=pow(2, power)*(1);
			power--;
		}
	else if(num[i]=='0'){
			sum+=pow(2, power)*(0);
			power--;
		}
}
printf("%c", sum);
}
int main(){
     int x;
	cout<<"How many inputs you have\n";
	cin>>x;
	string inputs[x], ch;
	ch=getchar();
	int i;
	for(i=0; i<x; i++){
		cout<<"Enter input\n";
		cin>>inputs[i];
		ch=getchar();
	}
	for(i=0; i<x; i++){
		change(inputs[i]);
	}
}