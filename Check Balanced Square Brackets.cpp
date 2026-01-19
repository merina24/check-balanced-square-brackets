#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(const string& s) {
    stack<char> st;

    for (char c : s) {
        // Push opening brackets
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        // Handle closing brackets
        else if (c == ')' || c == '}' || c == ']') {
            if (st.empty())
                return false;

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isBalanced(s)) {
        cout << "Balanced brackets" << endl;
    } else {
        cout << "Not balanced" << endl;
    }

    return 0;
}
