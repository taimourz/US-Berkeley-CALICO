#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

   int T;
   cin>>T;
   for(int t = 1; t<=T; t++){
		int time;
		cin>>time;
		time = time / 10;
		if(time == 0) cout<<"haha good one"<<endl;
		else if(time < 18){
			for(int i = 0; i < time; i++){
				cout<<"berkeley";
			}
			cout<<"time"<<endl;
		}else{
			cout<<"canceled"<<endl;
		}
   }	


    cin.close();
    cout.close();
    return 0;
}
