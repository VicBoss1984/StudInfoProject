#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct UniStudent {
	string name;
	string uni_name;
	string program;
	int age;
	float gpa;
	bool sex_at_birth;
};

struct UniStudentGroup {
	int num_stud;
	float class_avg;
	string cohort;
	string course; 
};

void prompt_usr();
UniStudent *alloc_mem(UniStudent *ptr_uni);
void free_mem(UniStudent *ptr_uni);
string take_usr_input();