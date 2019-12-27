#include "test.h"
#include <iostream>
#include <vector>

using namespace std;
void Ticket::inputQuestion(){
    cout << "������� ����� �������" << "\n";
    cin >> question;
}

void Ticket::addAnswer(Ticket &ticket){
    cout << "������� ����� ������ �1" << "\n";
    cin >> answer[0];
    cout << "������� ����� ������ �2" << "\n";
    cin >> answer[1];
    cout << "������� ����� ������ �3" << "\n";
    cin >> answer[2];
}

void Ticket::addTicket(vector<Ticket> &questions) {
    while(stop_word == 1) {
        questions.push_back(*this);
        questions[this->number].inputQuestion();
        questions[this->number].addAnswer(*this);
        cout << "������� ����� ����������� ������ \n";
        cin >> questions[this->number].answer_correct_number;
        questions[this->number].answer_correct_number--;
        cout << "��������� ������� ������?|1|0|";
        cin >> stop_word;
        this->number++;
    }
}

void runQuest(vector<Ticket> &questions, Person &person, Ticket &ticket){
    for(int i = 0; i < ticket.number; i++) {
        cout << questions[i].question << "\n" << "1) " << questions[i].answer[0] << "\n"
             << "2) " << questions[i].answer[1] << "\n" << "1) " << questions[i].answer[2] << "\n";
        cout << "������� ��� ����� (�����)\n";
        cin >> person.answer;
        person.answer--;
        if (person.answer == questions[i].answer_correct_number) {
            person.score++;
        }
        cout << "������� " << person.score << "/" << ticket.number << "\n";
    }
    cout << "���������� ���������� �������: "<< person.score <<"\n";

}

void Ticket::setQuestion(){

}

void Ticket::setAnswer(){

}