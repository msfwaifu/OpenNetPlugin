/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-08-24
    Notes:
        Load servers from a CSV file.
        #host, servermodule, license
*/

#pragma once
#include "..\STDInclude.h"

class ModuleManager
{
    static std::vector<struct onModule *>   ModuleList;

public:
    // Decrypt a module using the license key.
    static bool DecryptModule(const char *Filename, const char *License);

    // Load the module into memory.
    static bool LoadModule(struct onModule *Module);

    // Create a server with the specified host.
    static class IServer *CreateServerInstance(struct onModule *Module, const char *Hostname);

    // Load the CSV, create servers for each entry
    static int32_t LoadAllModules();
};
