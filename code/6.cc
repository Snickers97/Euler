#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	int sum = 0;
	int square = 0;
	int num = 1;
	while(num <= 100){
		sum += num*num;
		num++;
	}
	num = 1;
	while(num <= 100){
		square += num;
		num++;
	}
	square = square*square;
	num = square-sum;
	cout<<num<<endl;
	return 0;
}
