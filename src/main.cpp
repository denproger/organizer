#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <math.h>
#include <iostream>
#include <ctype.h>



//#include <turl.h>

//#include "ttasktreemanager.h"

#include <tapplication.h>

int main(int argc, char *argv[])
{

    TApplication app;
    if( !(app.init(argc, argv)) )
    {
        return 1;
    }
    return app.run(argc, argv);
}

///------------------------------
// Test
/*
int main(int argc, char *argv[]) {

//TTaskTreeManager    manager;
    TUrl url("http://www.example.com/List of holidays.xml");

    std::cout << toConstCharPtr(url.getScheme()) << "\n";
    std::cout << toConstCharPtr(url.getHost()) << "\n";
    std::cout << url.getPort() << "\n";
    std::cout << toConstCharPtr(url.getPath()) << "\n";
    std::cout << toConstCharPtr(url.getQuery()) << "\n";

return 0;
}*/
