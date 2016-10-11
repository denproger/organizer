#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <math.h>
#include <iostream>
#include <ctype.h>
#include <tapplication.h>

int main(int argc, char *argv[])
{
    TApplication app;
    if( !(app.init(argc, argv)) )
    {
        return 1;
    }
    return app.run();
}
