#pragma once
#include <string>

using namespace std;

enum Specialnist { CS, INF, ME, PI, LT };

struct Student {
    string surname;
    unsigned course;
    Specialnist spec;
    int physics;
    int math;
    int informatics;
};

void Create(Student* s, const int N);
void Print(const Student* s, const int N);
double CalcAvg(const Student& st);
void Sort(Student* s, const int N);
int* IndexSort(const Student* s, const int N);
void PrintIndexSorted(const Student* s, const int* I, const int N);
int BinSearch(const Student* s, const int N, const string surname, const unsigned course, const double targetAvg);
