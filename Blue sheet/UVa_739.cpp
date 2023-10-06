#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int codes[] = { 0, 1, 2, 3, 0, 1, 2, 0, 0, 2, 2, 4, 5, 5, 0, 1, 2, 6, 2, 3, 0, 1, 0, 2, 0, 2 };


int getCode(char c){
	return codes[((int)c) - 'A'];
}

string soundexCode(string name){

	string code = "0000";

	code[0] = name[0];

	int cIndex = 1;
	int nIndex = 1;
	int pCode = getCode(name[0]);
	int cCode = -1;
	while (cIndex < 4 && nIndex < name.length()){
		cCode = getCode(name[nIndex]);

		if (cCode != 0 && cCode != pCode){
			//encode
			code[cIndex] = (char)(cCode + '0');
			cIndex++;
		}

		pCode = cCode;
		nIndex++;
	}

	return code;

}

void space(string name){
	for (int i = name.length() + 10; i < 35; i++){
		cout << " ";
	}
}

	
int main()
{
    fastIO();
    string name= "hello";
	string front = "         ";

	cout << front << "NAME";
	space("NAME");
	cout << "SOUNDEX CODE" << endl;

	while (cin >> name){
		cout << front << name;
		space(name);
		cout << soundexCode(name) << endl;
	}

	cout << front << front << " " << "END OF OUTPUT" << endl;
    return 0;
}