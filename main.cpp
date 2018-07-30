#include <iostream>
#include "Hashpipe.h"


int main()
{

    if(true)
    {
        Hashpipe hp("Toets");
        //hp.messageDump();

        hp.testEnc((unsigned char*)"Sleutel", (unsigned char*)"Dit is die boodskap.");
    }
    return 0;
}