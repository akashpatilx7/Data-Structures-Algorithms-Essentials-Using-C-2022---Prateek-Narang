#include <iostream>
using namespace std;

int fact(int N){
    // Base Case 
    if(N==0){
        return 1;
    }

    // Recursive Case 
    int ans=N*fact(N-1);
    return ans;
}

int main() {
    int N;
    cin>>N;

    cout<<fact(N)<<'\n';
}
