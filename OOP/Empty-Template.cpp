#include <iostream>
#include <string>

using namespace std;

template <typename T>

class Account {
    private:
        T id;

    public:
        Account(T id) :  id(id)
        {}

        T getId(){
            return id;
        }
};


int main(){
    Account<string> acc1("ca-pub1343767");
    Account<int> acc2(2326262);

    cout << "acc1 - " << acc1.getId() << endl;
    cout << "acc2 - " << acc2.getId() << endl;
    
    return 0;
}