#include "core/subject.h"
#include "core/observer.h"

Subject::Subject()
{
}

void Subject::notifyObservers()
{
    for (Observer* o : observers)
        o->notify();
}

void Subject::registerObserver(Observer* observer)
{
    observers.push_back(observer);
}
