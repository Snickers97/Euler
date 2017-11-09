#include <iostream>
using namespace std;

int main(){
	int num = 0;
	int sum = 0;
	while(num < 1000){
		if(num%3 == 0 || num%5 == 0)
			sum += num;
		num++;
	}
	cout<<sum<<endl;
	return 0;
}
