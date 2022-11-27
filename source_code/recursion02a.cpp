// recursion02a.cpp
// with vectors

#include <iostream>
#include <vector>
using namespace std;

class FamilyNameLine {
protected:
    string name;
    string birthyear;
    vector<FamilyNameLine*> successors;

public:
    FamilyNameLine(string in1, string in2) : name(in1), birthyear(in2) {};
    FamilyNameLine(string in1, string in2, vector<FamilyNameLine*> in3) : name(in1), birthyear(in2), successors(in3) {};

    friend void show_successors(FamilyNameLine*);
};

void show_successors(FamilyNameLine* ancestor) {
    
    cout << ancestor->name << "'s birthdate is: " << ancestor->birthyear << endl; // reverse typing

    if (!ancestor->successors.empty()) {
        for (auto i = (ancestor->successors).begin(); i != (ancestor->successors).end(); ++i)
            show_successors(*i);
    }
}

int main() {
    vector<FamilyNameLine*> temp1;
    vector<FamilyNameLine*> temp2;
    vector<FamilyNameLine*> temp3;

    FamilyNameLine s4("Takis", "2020");
    temp1.push_back(&s4);
    FamilyNameLine s3("Peter", "2020");
    temp1.push_back(&s3);

    FamilyNameLine s2a("Kate", "2002");
    FamilyNameLine s2b("John", "1999", temp1);
    temp2.push_back(&s2a);
    temp2.push_back(&s2b);

    FamilyNameLine s1("Sisi", "1980", temp2);
    temp3.push_back(&s1);

    FamilyNameLine s0("Mairy", "1950", temp3);

    show_successors(&s0);

    return 0;
}
