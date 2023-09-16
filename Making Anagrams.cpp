#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makeAnagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING a
 *  2. STRING b
 */

int makeAnagram(string a, string b) {
    int aArr[26] = {0};
    int bArr[26] = {0};
    for(auto itr = a.begin(); itr!=a.end(); itr++){
        int v = *(itr)-'a';
        if(v > 0)aArr[v]+=1;
    }
    
    for(auto itr = b.begin(); itr!=b.end(); itr++){
        int v = *(itr)-'a' ;
        if(v > 0) bArr[v]+=1;
    }
    
    int diff = 0, intA = 0, intB = 0;
    for(int i = 0; i< 26; i++){
        intA += aArr[i];
        intB += bArr[i];
        
    }
    cout << intA << ":" << intB << endl;
    diff = intA-intB;
    return diff;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
