#include<bits/stdc++.h>
using namespace std;
string decipherAttack(string text) {

	string res = "";
	int n;

	for (int i = 1; i < 26; i++) {
		n = i;
		for (int j = 0; j < text.length(); i++) {
			if (isupper(text[j]))
				res += char(int(text[j] - n - 65) % 26 + 65);
			else
				res += char(int(text[j] - n - 97) % 26 + 97);
		}
		cout << res << endl;
	}
}
int main()
{
	string cipherText = "EXXEGOEXSRGI";
	cout << "cipher text:" << cipherText << endl;
	cout << "decipher text:";
	decipherAttack(cipherText);
	return 0;
}