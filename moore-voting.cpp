//Algorithm
//Take first elemnt of array and make it count 1
//whenever element equal to current value increase count by 1 else decrease by 1
// proceed further till count become zero

//if in anywhere in mid count become zero then take current index value as element and repeat above process
//After completing loop element will be most occured value in that array



#include <bits/stdc++.h>
using namespace std;

int mode(vector<int> v) {

    int n = v.size();
    int cnt = 0; 
    int el; 


    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }


    return el;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = mode(arr);
    cout << "Mode : " << ans << endl;
    return 0;
}
