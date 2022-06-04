#include "functions.h"

extern "C"
{
    int wx_entry(int argc, char **argv)
    {
        return wxEntry(argc, argv);
    }
}
