#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;
int main(){
	int t=1707400800;
	time_t now = time(0);
	while(true){
		now = time(0);
		cout<<1707400800-now<<endl;
		Sleep(1000);
	}
	return 0;
} 
