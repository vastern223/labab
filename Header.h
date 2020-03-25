#pragma once
#include <string>
#include <Windows.h>

using namespace std;

struct Questions
{
    string question1;
    string answer;
};

struct Quiz
{
    string nameQuiz;
    Questions* question;
};

void add();
void list();
void pass();