#include "ConcreteMediator.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"

int main(int argc, char *argv[])
{
    ConcreteMediator *cM = new ConcreteMediator();

    ConcreteColleagueA *cA = new ConcreteColleagueA(cM);
    ConcreteColleagueB *cB = new ConcreteColleagueB(cM);

    cM->concreteColleagueA = cA;
    cM->concreteColleagueB = cB;

    cA->send();
    cB->send();

    delete cB;
    delete cA;
    delete cM;

    return 0;
}
