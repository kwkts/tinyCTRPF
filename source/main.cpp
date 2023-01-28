#include <CTRPluginFramework.hpp>
#include "types.h"

namespace CTRPluginFramework
{
    int     main(void)
    {
        PluginMenu *menu = new PluginMenu("", 0, 0, 0, "");

        menu->SynchronizeWithFrame(true);

        menu->Run();

        delete menu;

        return (0);
    }
}