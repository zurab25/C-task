#include <iostream>
#include <string>

using namespace std;

class IntAccount{
    private:
        int id;
    
    public:
        IntAccount(int id) : id(id)
        { }

        int getId()
        {
            return id;
        }
};

class StrAccount{
    private:
        string id;
    public:
        StrAccount(string id) : id(id)
        {}

        string getId(){
            return id;
        }
};


int main(){
    StrAccount acc1("ca-pub1343767");
    IntAccount acc2(2326262);

    cout << "acc1 - " << acc1.getId() << endl;
    cout << "acc2 - " << acc2.getId() << endl;
    
    return 0;
}