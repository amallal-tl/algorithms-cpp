//Input: a = "1101"//13, b = "101"//5
//Output: "1 0010"//18


class Solution {
public:
    string addBinary(string a, string b) {
        int aLen = a.length();
        int bLen = b.length();
        int sum = 0;
        const char ZERO = '0', ONE = '1';
        if(aLen < bLen){
            for(int i = aLen; i < bLen;i++){
                a = ZERO + a;
            }
        } else if(bLen < aLen){
            for(int i = bLen; i < aLen;i++){
                b = ZERO + b;
            }
        }

        cout << a << " : " << b << endl;

        for(int i = aLen; i >= 0; i--){
            if(a[i] == ONE || b[i] == ONE){
               sum += 2^i;
            }
        }
        cout << sum << endl;
         return "";
    }
   
};