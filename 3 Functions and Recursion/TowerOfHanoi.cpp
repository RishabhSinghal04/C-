/*
 * Three towers and 'n' number of disks from smallest to largest.
 * Move all disks from source tower (1st tower) to destination tower (3rd tower) provided:-
    1. Move disks one by one.
    2. Cannot place larger disk on smaller disk.
 * Use 2nd tower as auxiliary.
 */

#include <iostream>
#include <conio.h>

using namespace std;

/**
 * @brief Pass number of disks only
 * @param short : number of disks
 * @param char : Source Tower
 * @param char : Auxiliary Tower
 * @param char : Destination Tower
 */
void TowerOfHanoi(unsigned short, char, char, char);

int main()
{
    unsigned short numberOfDisks;
    char sourceTower = 'S', auxiliaryTower = 'A', destinationTower = 'D';

    cout << "Enter total number of disks: ";
    cin >> numberOfDisks;

    cout << "\nSource Tower : S, Auxiliary Tower : A, Destination Tower : D\n";
    TowerOfHanoi(numberOfDisks, sourceTower, auxiliaryTower, destinationTower);

    getch();
    return 0;
}

void TowerOfHanoi(unsigned short numberOfDisks, char sourceTower, char auxiliaryTower, char destinationTower)
{
    if (numberOfDisks < 1)
    {
        cout << "No disk to move";
        return;
    }
    if (numberOfDisks == 1)
    {
        // Move disk 1 from Source Tower to Destination Tower
        cout << "\nMove disk " << numberOfDisks << " from " << sourceTower << " to " << destinationTower;
        return;
    }
    // Move n - 1 disks from Source Tower to Auxiliary Tower with the help of Destination Tower
    TowerOfHanoi(numberOfDisks - 1, sourceTower, destinationTower, auxiliaryTower);

    // Move nth disk from Source Tower to Destination Tower
    cout << "\nMove disk " << numberOfDisks << " from " << sourceTower << " to " << destinationTower;

    // Move n - 1 disks from Auxiliary Tower to Destination Tower with the help of Source Tower
    TowerOfHanoi(numberOfDisks - 1, auxiliaryTower, sourceTower, destinationTower);
}