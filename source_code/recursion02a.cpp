// recursion02a.cpp
//

#include <iostream>
using namespace std;

class FamilyNameLine {
protected:
    string name;
    string birthyear;
    FamilyNameLine* successor;

public:
    FamilyNameLine(string in1, string in2, FamilyNameLine* in3 = NULL) : name(in1), birthyear(in2), successor(in3) {};

    friend void show_successors(FamilyNameLine*);
};

void show_successors(FamilyNameLine* ancestor) {
    //cout << ancestor->name << "'s birthdate is: " << ancestor->birthyear << endl;
    if (ancestor->successor != NULL) {
        show_successors(ancestor->successor);
    }
    cout << ancestor->name << "'s birthdate is: " << ancestor->birthyear << endl; // reverse typing
}

int main() {
    FamilyNameLine s3("Takis", "2009");
    FamilyNameLine s2("Mairy", "1988", &s3);
    FamilyNameLine s1("Sisi", "1988", &s2);
    FamilyNameLine s0("Mairy", "1960", &s1);

    show_successors(&s0);

    return 0;
}
