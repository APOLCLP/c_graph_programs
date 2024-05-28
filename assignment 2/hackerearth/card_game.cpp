#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;   

    stack<int> B;
	queue<int> A;
    int a;


    for (int i = 0; i < num; i++) {
        cin >> a;  
        A.push(a);
		B.push(a);
    }

    

   
    while (!A.empty() && !B.empty()) {
        if (A.front() > B.top()) {
            cout << "1 ";
            B.pop();
        } else if (A.front() < B.top()) {
            cout << "2 ";
            A.pop();
        } else {
            cout << "0 ";
            B.pop();
            A.pop();
        }
    }

    return 0;
}
