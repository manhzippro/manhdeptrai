#include "../include/FlyBehavior.h "
#include "../include/FightingStrategy.h "
#include "../include/Wizard.h "
#include "../include/Warrior.h "
#include "../include/Knight.h "

void FlyBehavior::fight()
{   
    int number;
    cout<< "Please choose your character (1-Wizard, 2-Warrior, 3-Knight)" << endl;
   
   switch (number)
   {
   case 1: ();
       break;
    
   
   default:
       break;
   }


    // y/c nguoi choi chon kieu nhan vat (1-Wizard, 2-Warrior, 3-Knight)

    // nguoi choi chon kieu nhan vao nao thi tao ra strategy tuong ung
    strategy *number = new Wizard(name);
    strategy->kick();
    strategy->punch();

    strategy = new Warrior(name);
    strategy->kick();
    strategy->punch();

    strategy = new Knight(name);
    strategy->kick();
    strategy->punch();

}
FlyBehavior::~FlyBehavior()
{
    //delete strategy;
}