#include "functions.h"

extern "C"
{
    int global_wxEntry(int argc, char **argv)
    {
        return wxEntry(argc, argv);
    }
}
