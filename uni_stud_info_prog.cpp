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
UniStudent* alloc_mem(UniStudent *ptr_uni);
void free_mem(UniStudent *ptr_uni);
string take_usr_input();

int main() {
    prompt_usr();

    return 0;
}

UniStudent *alloc_mem(UniStudent *ptr_uni) {
    UniStudent *demo_ptr = NULL;
    std::cout << "This function is a work-in-progress!\n";
    
    return demo_ptr;
}

void free_mem(UniStudent *ptr_uni) {
    std::cout << "This function is a work-in-progress!\n";
}

void prompt_usr() {

    std::cout << "Welcome to this program!\nHere, you will be prompted to enter your university student information.\n";
    std::cout << "Enter your name: " << endl
              << "Enter the name of your university: " << endl
              << "Enter your age: " << endl
              << "Enter your GPA: " << endl
              << "Enter the sex that you were assigned to at birth (0 for male and 1 for female): \n";
}

string take_usr_input() {
    string usr_input;
    std::cout << "This function is a work-in-progress!\n";

    return usr_input;
}