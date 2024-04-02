#include<iostream>
#include<string>
#include<algorithm>
#include <stack>
#include <unordered_map>
using namespace std;

bool areBracketsBalanced(std::string str)
{
    std::stack<char> s;
    std::unordered_map<char, char> m;
    m['{'] = '}';
    m['['] = ']';
    m['('] = ')';
    for (char c : str) {
        if(isalpha(c) || isdigit(c))
        {
            continue;
        }
        else  if (m.count(c) > 0) {
            cout<<m.count(c)<<endl;
            s.push(c);
        } else if (s.empty() || m[s.top()] != c) {
            return false;
        } else {
            s.pop();
        }
    }
    return s.empty();
}


int main() {
    std::string str = "[][[](())";
    if (areBracketsBalanced(str)) {
        std::cout << "Brackets are balanced." << std::endl;
    } else {
        std::cout << "Brackets are not balanced." << std::endl;
    }
    return 0;
}

