#pragma once
#include "../../game/WorldHandlers/GossipDef.h"

using namespace std;

namespace immersive
{
    class Immersive
    {
    public:
        Immersive();

    public:
        static void GetPlayerLevelInfo(Player *player, PlayerLevelInfo* info);
        static void OnGossipSelect(Player *player, uint32 gossipListId, GossipMenuItemData *menuData);

    private:
        static void PrintHelp(Player *player, bool detailed = false);
        static void IncreaseStat(Player *player, uint32 type);
        static void ResetStats(Player *player);

    private:
        static uint32 GetTotalStats(Player *player);
        static uint32 GetUsedStats(Player *player);
        static uint32 GetStatCost(Player *player);

    private:
        static uint32 GetValue(uint32 owner, string type);
        static uint32 SetValue(uint32 owner, string type, uint32 value);

    private:
        static map<Stats, string> statValues;
    };
}


#define sImmersive MaNGOS::Singleton<immersive::Immersive>::Instance()
