#include<iostream>
#include<string>
using namespace std;

// we can also use ordered or unordered map or set other than freq array to store freq
int firstUniqChar(string s) {
    int freq[26] = {0};
    for(int i = 0; i < s.length(); i++){
        int index = int(s[i] - 'a');
        freq[index]++;
    }
    for(int i = 0; i < s.length(); i++){
        if(freq[int(s[i] - 'a')] == 1){
            return i;
        }
    }
    return -1;
}