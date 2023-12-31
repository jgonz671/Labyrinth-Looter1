#include <iostream>
#include "character.h"
#include "monster.h"
#include "item.h"
#include <cstdlib>
#include <limits>
using namespace std;

Character::Character() : Entity(), currency(0), speed(0){}

Character::Character(double h, double d, int c, int s) : Entity(h, d), currency(c), speed(s) {}

bool Character::attemptRun() {
    //if fails ofc
    int chance = rand() % 20;
    //25% chance for now :)
    if(chance < 5){
        //figure out what to do. what i was thinking was to make this a bool method and just check the chance and do everything else in game.cpp
        cout << "########## Escape successful! ##########" << endl;
        return true;
    }else{
        takeDamage(5);
        cout << "########## Escape failed ##########" << endl << endl; //stub
        cin.ignore(); cin.ignore();
        return false;
    }
}


void Character::addItemToInventory(Item* item){
    inventory.push_back(item);
    cout << "Added " << item->getName() << " to inventory." << endl; 
}

int Character::getSpeed() { return speed; }

int Character::getCurrency()  { return currency; }

void Character::addCurrency(int amount){
    currency += amount; 
}

void Character::setCurrency(int currency){
    this->currency = currency;
}

void Character::setSpeed(int speed){
    this->speed = speed;
}

void Character::listInventory(){
    for(int i = 0; i < inventory.size(); i++){
        cout << "   " << i << ". " << inventory.at(i)->getName() << endl;
    }
    cout << endl;
}


void Character::useItemFromInventory(int index) {
    if(index < 0 || index >= inventory.size()){
        cout << "Invalid item index!" << endl;
        return;
    }
    Item* item = inventory.at(index);
    if(item->getName() == "Health Pack"){
        healthPack* hp = dynamic_cast<healthPack*>(item); 
            if(hp){
                setHealth(getHealth() + hp->getHealthAmount());
            }
    }
    inventory.erase(inventory.begin() + index);
}

int Character::getInventorySize(){
    return inventory.size();
}