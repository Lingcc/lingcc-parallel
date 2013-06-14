#include <iostream>
#include <vector>

// TODO: Design the input and output format of Parallel
using namespace std;

void init_int_vec(vector<int>& res, int upperbound) {

    int i = 0;
    for(; i <= 100; i++) {
        res.push_back(i);
    }
}

int main()
{
    vector<int> res;
    init_int_vec(res, 100);

    vector<int>::iterator iter;
    for(iter= res.begin(); iter < res.end(); iter++) {
        cout << *iter << endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
