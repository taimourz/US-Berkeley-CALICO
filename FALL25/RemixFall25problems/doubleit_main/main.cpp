#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

   int T;
   cin>>T;
   for(int t = 1; t<=T; t++){
	   int total = 0;
		int n;
		cin>>n;

		int current_offer = 1;
		int total_paid = 0;

		for(int i = 0; i < n; i++){

			char c;
			cin>>c;
			if(c == 'T'){
				total_paid += current_offer;
				current_offer = 1;
			}else{
				current_offer = current_offer * 2;
			}


			
		}	
		cout<<total_paid<<endl;
   }	


    // cin.close();
    // cout.close();
    return 0;
}
