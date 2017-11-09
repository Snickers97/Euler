#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	long num1 = 20;
	while(num1 < 1000000000){
		bool ans = true;
		int num2 = 2;
		while(num2 <= 20){
			if(num1%num2 != 0){
				ans = false;
				break;
			}
			num2++;
		}
		if(ans) break;
		num1 += 20;
	}
	cout<<num1<<endl;

	return 0;
}
