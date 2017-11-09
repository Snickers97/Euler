#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
	int count = 0;
	int paths = 0;
	string unique[10000];
	for(int i = 0; i < 10000; i++){
		unique[i] = "";
	}
	while(count < 1000000){
		int right  = 0;
		int down = 0;
		string attempt = "";
		while((right + down) <= 40){
			int flip = rand()%10000;
			if(flip > 5000){
				right += 1;
				attempt += 'r';
			}
			else{
				down += 1;
				attempt += 'l';
			}
		}
		bool isunique = true;
		for(int i = 0; i < paths; i++){
			if(unique[i] == attempt)
				isunique = false;
		}
		if(isunique){
			unique[paths] = attempt;
			paths++;
		}
		count++;
	}
	cout<<paths<<endl;
	return 0;
}
