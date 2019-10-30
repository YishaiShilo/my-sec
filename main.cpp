#include <iostream>
#include <vector>

using std::vector;
using std::cout;

void printV(vector<int*>& v){
    for(int* num : v){
        cout << num << " ";
    }
    cout << std::endl;
}

int main(){

    int n = 10;
    vector<int*> v;
    printV(v);
    while(n){
        int a = 3;
        v.push_back(&a);
        --n;
        printV(v);
    }

}
