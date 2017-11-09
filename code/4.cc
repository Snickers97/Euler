#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

bool ispal(int& i);

int main(){
	int num1 = 100;
	int largest = 0;
	while(num1 < 1000){
		int num2 = 100;
		while(num2 < 1000){
			int num3 = num1*num2;
			if(ispal(num3) && num3 > largest)
				largest = num3;
			num2++;
		}
		num1++;
	}
	cout<<largest<<endl;
	
	return 0;
}

bool ispal(int& i){
	string s = to_string(i);
	string s2 = s;
	reverse(s2.begin(), s2.end());
	if(s == s2) return true;
	else return false;
}
