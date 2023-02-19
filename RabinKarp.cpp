// Rolling Hash Algo OR Rabin Karp Algo for 1D.
// Time Complexity:-
// Brute Force :- O(N*M) but it is less efficient
// Rabin Karp Algo :- O(N*M) but it is highly efficient 



#include <bits/stdc++.h>
using namespace std;

int main(){

    string txt = "AABAACBAA";
    string pat = "BAA";

    int hpat=0;
    int htxt=0;
    int d = 26;                       // d is the number of characters in the input alphabet 
    int p = 11;                       // Can use any prime number for finding the unique hash value of pattern and text

    for (int i = 0; i < pat.size(); i++)               // Travering through the pattern to compute the hash value
    {
        hpat = hpat * d;
        hpat = hpat + (((pat[i] - 'A' + 1)) % p);      // Hash value of pattern 
    }

    int l=0, r = 0;

    while (r < txt.size()){
        htxt =htxt * d;
        htxt = htxt + ((txt[r] - 'A' + 1) % p);       // Hash value of text

        if(r-l+1==pat.size()){ 
            if(htxt==hpat){                           // Checking hash value of text and pattern
                cout << "Match at " << l <<endl;
            }

            htxt = htxt - (((txt[l] - 'A' + 1) * pow(d, r - l)));
            l++;
        }

        r++;
    }
    return 0;
}
