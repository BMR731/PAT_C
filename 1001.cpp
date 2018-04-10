#include <iostream>
using namespace std;

void task1001() {
    int i;
    int step=0;
    cin>>i;
    while(i != 1){
        if(i%2 == 0){
            i >>= 1;
        } else {
            i = (3*i+1) >> 1;
        }
        step++;
    }
    cout<<step<<endl;
}
int main(){
    task1001();
    return 0;
}