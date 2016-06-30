#include <iostream>
#include "avltree.h"
#include <time.h>


using namespace std;

int main()
{
    AVLtree<int> a;
    srand(time(0));
    int xRan;
    int testNum = 10000;


    // Insert
    for (int i = 1; i <= testNum; i++)
        a.add(i);

    // Search for random number
    for (int i = 1; i <= testNum; i++) {
        xRan = rand() % testNum + 1;
        a.find(xRan);
    }

    // Delete
    for (int i = 1; i <= testNum; i++)
        a.remove(i);

    cout << "done" << endl;





    //cout << "Memory Used: " << UI_MemoryUsed;
    return 0;
}
