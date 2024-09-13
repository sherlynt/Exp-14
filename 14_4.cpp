#include <iostream>
#include <string>
using namespace std;

class Forest {
public:
    string type = "evergreen";

    void trunk() {
        cout << "Trunk color: brown" << endl;
    }
};

class Tree : public Forest {
public:
    void type() {  
        cout << "Tree type: conifer" << endl;
    }
};

class Trunk : public Forest {
public:
    void part() {
        cout << "Trunk part: thick" << endl;
    }
};

int main() {
    Trunk t;
    t.trunk(); 
    cout << "Forest type: " << t.type << endl;  
    t.part();  

    Tree t1;
    Trunk t2;

    t1.trunk();  
    t1.type();   

    t2.trunk(); 
    t2.part();  

    return 0;
}
