#ifndef CHARACTER
#define CHARACTER

#include "entity.h"
#include "item.h"
#include <vector>



class Character : public Entity {
    private:
        double health;
        double damage;
        int currency;
        int speed;
        vector<Item*> inventory; 
    public:
        Character();
        Character(double h, double d, int c, int s);
        bool attemptRun();
        int getSpeed();
        int getCurrency();
        void setCurrency(int);
        void setSpeed(int);
        void addCurrency(int amount); 
        void addItemToInventory(Item*); 
        void useItemFromInventory(int );
        void listInventory();
        int getInventorySize();
        virtual void resetValues() = 0;
};

#endif