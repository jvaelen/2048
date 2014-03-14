#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>

using namespace std;

class Observer;

class Subject
{
public:
    Subject();
    void notifyObservers();
    void registerObserver(Observer* observer);

private:
    vector<Observer*> observers;
};

#endif // SUBJECT_H
