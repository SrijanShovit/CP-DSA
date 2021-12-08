#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 *
    n=6
     #
    ##
   ###
  ####
 #####
######
 */

void staircase(int n) {
    for (int i=1;i<=n;i++){
        for (int k=n-i;k>0;k--){
            cout << " ";
        }  
        for (int j=1;j<=i;j++){
            cout << "#";
        }
        cout << endl;
    }
}
//Total TC = n(n-1)/2 + n(n+1)/2 = O(N^2)

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
