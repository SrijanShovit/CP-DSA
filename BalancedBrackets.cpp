#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isBalanced(string s) {
    stack<char> brackets;
        string ans = "YES";
        char top;
    for (int i=0;i<s.length();i++){
        char c = s[i];
        if (c == '{' || c == '(' || c == '[') brackets.push(c);
        else if (c == '}' || c == ')' || c == ']') {
            if (!brackets.empty()){
                
            top = brackets.top();
            } else{
                return ans = "NO";
            }
            switch (c) {
                
            case '}':
            if (top == '{') brackets.pop();
            else return ans ="NO";
            break;
            
            case ']':
            if (top == '[') brackets.pop();
            else return ans ="NO";
            break;
            
            case ')':
            if (top == '(') brackets.pop();
            else return ans ="NO";
            break;
            
            
            }
            
            
                   
            
        }
        else continue;
    }
    return ans;
}//O(size of s)

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

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
