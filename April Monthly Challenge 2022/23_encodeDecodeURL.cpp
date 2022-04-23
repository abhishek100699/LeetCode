#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Encodes a URL to a shortened URL.
    char temp;
    string encode(string longUrl) {
        int n = longUrl.size();
        temp = longUrl[n-1];
        longUrl[n-1] = 'a';
        return longUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int n = shortUrl.size();
        shortUrl[n-1] = temp;
        return shortUrl;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));