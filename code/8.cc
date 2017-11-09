#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;

int main(){
	ifstream ins;
	ins.open("bignum.txt");
	string bignum = "";
	string tmp;
	string numbers[1000];
	size_t sum[1000];
	int nums[1000];
	size_t biggest = 0;
	while(ins){
		getline(ins, tmp);
		bignum += tmp;
	}
	size_t i = 0;
	while(i < 1000){
		numbers[i] = bignum.substr(i, 1);
		i++;
	}
	for(i = 0; i < 1000; i++){
		nums[i] = stoi(numbers[i]);
	}
	i = 0;
	while(i < 1000){
		size_t j = 0;
		sum[i] = 1;
		while(j < 13){
			sum[i] *= nums[i+j];
			j++;
		}
		i++;
	}
	for(i = 0; i < 1000; i++){
		if(sum[i] > biggest)
			biggest = sum[i];
	}
	cout<<biggest<<endl;

	return 0;
}
