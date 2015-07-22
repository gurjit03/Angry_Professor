#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkAllowed(int time) {
    return time <= 0 ? true : false;    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T1,T,N,K;
    cin>>T;
    T1 = T;
    string results[T];
    while(T--) {
        cin>>N;
        cin>>K;
        int arrival[N];
        int counter = 0;
        for( int i = 0; i < N; i++) {
            cin>>arrival[i];
            if(checkAllowed(arrival[i]))
                counter++;
        }
        results[T] = counter >= K ? "YES" : "NO";
    }
    while (T1--) 
        cout<<results[T1]<<endl;
    
    return 0;
}
