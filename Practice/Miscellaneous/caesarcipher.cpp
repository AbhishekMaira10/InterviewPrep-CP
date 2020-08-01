#include<bits/stdc++.h>
using namespace std;
string caesarCipher(string s, int k) {
if (k==0) return s;
unsigned int newChar;
k = k%26;
int len = s.length();
for (int i=0; i<len; i++){
    if (s[i]>='A' && s[i]<='Z') {
        newChar = s[i] + k;
        if (newChar>'Z') {
            newChar = 64 + newChar - 'Z';
        }
        s[i] = newChar;
    } else if (s[i]>='a' && s[i]<='z') {
        newChar = s[i] + k;
        if (newChar>'z') {
            newChar = 96 + newChar - 'z';
        }
        s[i] = newChar;
    }
}
return s;
}
int main()
{
	char s[]
