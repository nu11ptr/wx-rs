#include "functions.h"

extern "C"
{
    int wx_entry(int &argc, wxChar **argv)
    {
        return wxEntry(argc, argv);
    }
}
