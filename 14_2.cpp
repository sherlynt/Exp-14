#include<iostream>
#include<string>
using namespace std;

class Forest {
public:
    string type = "evergreen";
    void trunk() {
        cout << "brown" << endl;
    }
};
class Tree : public Forest {
public:
    void type() {  
        cout << "conifer" << endl;
    }
};
class Trunk : public Tree {  
public:
    void part() {
        cout << "thick" << endl;
    }
};

int main() {
    Trunk t;  
    t.trunk();  
    t.type();
    t.part();    
    return 0;
}
