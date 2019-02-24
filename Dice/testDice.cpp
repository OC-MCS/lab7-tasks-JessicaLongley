
// client code to use the Die class goes here
#include <iostream>
#include "Die.h"

using namespace std;

void displayPct(float counter[], int size);

int main()
{
    //create a six sided die and a twelve sided die
    Die sixDie(6), twelveDie(12);

    float sixCounters[7] = { 0,0,0,0,0,0,0 }, twelveCounters[13] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };
    //counters are one too big to fill so that the array number will line up with the number rolled, 1 to [1], 2 to [2], ect.

    int sixTemp, twelveTemp; //temperary numbers that are rolled
 
    for (float count = 0; count < 1000000; count++)
    {
        sixDie.roll();
        sixTemp = sixDie.getValue();
            sixCounters[sixTemp]++;

        twelveDie.roll();
        twelveTemp = twelveDie.getValue();
            twelveCounters[twelveTemp]++;
    }


    displayPct(sixCounters, sixDie.getSides());
    displayPct(twelveCounters,twelveDie.getSides());

    return 0;
}

//size is the size of the array, not the die
void displayPct(float counter[], int size)
{
    //stats for six sided die

    cout << "Stats for " << size  << "sided die. " << endl;
    for (int count = 1; count <= size; count++)
    {
        cout << "Side " << count << ":   " << counter[count]/10000 << endl; //divided by 10000 instead of multiplied by 1000000 and divided by 100
    }
}
