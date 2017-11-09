#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main(){
	string strnums[100];
	long nums[100];
	size_t sum = 0;
	ifstream ins;
	ins.open("100nums.txt");
	int i = 0;
	while(ins){
		ins>>strnums[i];
		if(!ins) break;
		strnums[i] = strnums[i].substr(0, 11);
		nums[i] = stol(strnums[i]);
		sum += nums[i];
		i++;
	}
	cout<<"\n\n"<<sum<<endl;
	return 0;
}
