
#include "Header.h"
#include <iostream>
#include <string>
#include <fstream>


Quiz* quiz;
int countQuiz = 0;

void add()
{
    ofstream fout;
    fout.open("Quiz.txt", fstream::app);
    bool isOpen = fout.is_open();
    if (isOpen == true)
    {
        Quiz* temp = new Quiz[countQuiz + 1];
        for (int i = 0; i < countQuiz; i++)
        {
            temp[i] = quiz[i];
        }

        temp[countQuiz].question = new Questions[5];

        cout << "Enter name of quiz" << endl;
        cin >> temp[countQuiz].nameQuiz;
        cout << "Enter questions" << endl << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "enterr " << i + 1 << "questin" << endl;
            cin >> temp[countQuiz].question[i].question1;
            cout << "enter answer of " << i + 1 << "question" << endl;
            cin >> temp[countQuiz].question[i].answer;
        }

        fout << temp[countQuiz].nameQuiz << endl;
        for (int i = 0; i < 5; i++)
        {
            fout << temp[countQuiz].question[i].question1 << endl;
            fout << temp[countQuiz].question[i].answer << endl;
        }

        fout.close();
        countQuiz++;
        delete  quiz;
        quiz = temp;
    }

}

void pass()
{
    {
        cout << "Sellect quiz\n";
        cout << "Quizzes that are available:\n";
        list();
        string name;
        string result;
        int countResult = 0;
        cout << "Enter name  pass\n";
        cin >> name;
        for (int i = 0; i < countQuiz; i++)
        {
            if (quiz[i].nameQuiz == name)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << "questin" << j + 1 << "-" << endl;
                    cout << quiz[i].question[j].question1;
                    cout << "answer-> ";
                    cin >> result;
                    if (result == quiz[i].question[j].answer)
                    {
                        countResult++;
                    }
                    else
                    {
                        cout << " wrong";
                    }
                }
                cout << "You have " << countResult << endl;
            }

        }
    }

}

void list()
{
    for (int i = 0; i < countQuiz; i++)
    {
        cout << quiz[i].nameQuiz << endl;
    }

}