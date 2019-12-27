#include <iostream>
#include "test.h"
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    Person person;
    Ticket ticket;
    vector <Ticket> questions;
    ticket.addTicket(questions);
    runQuest(questions, person, ticket);
}
