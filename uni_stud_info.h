#include <iostream>
#include <string>
using namespace std;

struct UniStudent {
    string name;
    string uni_name;
    int age;
    float gpa;
    bool sex_at_birth;
};

void prompt_usr();
UniStudent *alloc_mem(UniStudent *ptr_uni);
void free_mem(UniStudent *ptr_uni);
string take_usr_input();