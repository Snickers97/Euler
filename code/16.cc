#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int charnum(int &i);

int main(){
	int amount;
	cout<<"Enter the desired amount. \n";
	cin>>amount;
	int total = 0;
	for(int i = 1; i <= amount; i++){
		total += charnum(i);
	}
	cout<<total<<endl;
	return 0;
}

int charnum(int &i){
	switch(i){
		case 1:

	}
}
