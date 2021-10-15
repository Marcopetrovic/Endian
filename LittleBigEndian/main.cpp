#include <time.h>
#include <iostream>
#include <bitset>
#include <string>
#include <fstream>

using namespace std;


//Skapar fil och skriver till filen
void generator() {
    ofstream bigEndians("generated_input.txt");
    int min = 1;
    int max = 65535;
    srand(time(NULL));

    for(int i = 0; i < 8; i++) {
        int output = min + (rand() % static_cast<int>(max - min + 1));
        bigEndians << output << endl;
    }

    bigEndians.close();
}

int main() {


    //Kallar på method som genererar mina bigendians
    generator();

    //Läser från filen
    ifstream generatedInputs("generated_input.txt");
    //Skriver till filerna
    ofstream littleEndians("little_endian.txt");
    ofstream middleBytes("middle_byte.txt");

    //Loopar igenom mina värden och gör big/little endians.
    long inputLoop;
    while (generatedInputs >> inputLoop) {

        unsigned short bigEndian = inputLoop;
        unsigned char c1 = (bigEndian >> 8) & 0xFF;
        unsigned char c2 = bigEndian & 0xFF;
        unsigned short littleEndian = (c2 << 8) | c1;

        //Skriver till filerna
        littleEndians << littleEndian << endl;
        middleBytes << ((littleEndian >> 4) & 0xFF) << endl;
    }

    //Stänger mina filer.
    generatedInputs.close();
    littleEndians.close();
    middleBytes.close();

    return 0;
}