#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
void binary(int ch){
//	//printf("  %d  ", ch);
	int res[100];
	int i=-1;
	while(ch){
		i++;
		res[i]=ch%2;
		ch=ch/2;
	}
	for(i; i>=0; i--){
		cout<<res[i];
	}
}
int main()
{
	string str;
	cout<<"Enter a string";
	getline(cin,str);
    for(int i=0; i<str.length(); i++){
     //   printf("%d  ", str[i]);
    	binary(str[i]);
    	}
}
