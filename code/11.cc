#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream ins;
	int nums[23][26];
	ins.open("numgrid.txt");
	int prod;
	int biggest = 0;
	int i = 0;
	int j = 0;
	while(i < 23){
		j = 0;
		while(j < 26){
			nums[i][j] = 1;
			j++;
		}
		i++;
	}
	i = 0;
	while(ins){
		j = 3;
		while(j < 23){
			ins>>nums[i][j];
			if(!ins) break;
			j++;
		}
		if(!ins) break;
		i++;
	}
	i = 0;
	while(i < 20){
		j = 3;
		while(j < 23){
			prod = nums[i][j]*nums[i][j+1]*nums[i][j+2]*nums[i][j+3];
			if(prod > biggest)
				biggest = prod;
			prod = nums[i][j]*nums[i+1][j]*nums[i+2][j]*nums[i+3][j];
			if(prod > biggest)
				biggest = prod;
			prod = nums[i][j]*nums[i+1][j+1]*nums[i+2][j+2]*nums[i+3][j+3];
			if(prod > biggest)
				biggest = prod;
			prod = nums[i][j]*nums[i+1][j-1]*nums[i+2][j-2]*nums[i+3][j-3];
			if(prod > biggest)
				biggest = prod;
			j++;
		}
		i++;
	}
	cout<<biggest<<endl;
	return 0;
}
