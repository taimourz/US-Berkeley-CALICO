#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

/**
 * Output a possible configuration of the chest after performing quickstack
 * 
 * N: the number of items the player has
 * M: the number of items the chest has
 * Player: the list of items on the player
 * Chest: the list of items in the chest
 */

int main() {
	// ifstream cin("input.txt");
    // ofstream cout("output.txt");
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N, M;
        cin >> N >> M;
		unordered_map<char, int> mp;
        vector<char> Player(N);
		vector<char> Chest(M);
        for (char &item : Player) {
            cin >> item;
			mp[item]++;
        }
        for (char &item : Chest) {
            cin >> item;
			mp[item]++;
        }
		for(auto &item : mp){
			for(int i = 0; i < item.second; i++){
				cout<<item.first<<" ";
			}
		}
		cout<<endl;
    }
    // cin.close();
    // cout.close();		
}
