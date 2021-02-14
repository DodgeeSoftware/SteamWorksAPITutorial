// C/C++ Includes
#include <cstdlib>>
#include <iostream>

// STEAMWORKS API
#include <steam/steam_api.h>
//#include <steam/steam_gameserver.h> // Only include this if we are using the GameServer API

// Program Entry Point
int main()
{
    // Init SteamAPI
    if (SteamAPI_Init() == false)
    {
        // Send a message to the console
        std::cout << "ERROR: Steam must be open and logged in to run this game" << std::endl;
        return EXIT_FAILURE;
    }


    // Grab SteamFriends
    ISteamFriends* pSteamFriends = SteamFriends();
    // Send a message to the Console
    std::cout << pSteamFriends->GetPersonaName() << std::endl;


    // Shutdown SteamAPI
    SteamAPI_Shutdown();

    return EXIT_SUCCESS;
}
