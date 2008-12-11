#include "precompiled.h"


#define GOSSIP_ITEM_HONNEUR_HORDE "Echange de marques contre des points d'Honneur"

bool GossipHello_npc_honneur_horde(Player *player, Creature *_Creature)
{
    player->ADD_GOSSIP_ITEM(0, GOSSIP_ITEM_HONNEUR_HORDE, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 1);	
    player->SEND_GOSSIP_MENU(3961,_Creature->GetGUID());
    return true;	
}

bool GossipSelect_npc_honneur_horde(Player *player, Creature *_Creature, uint32 sender, uint32 action)
{
    if ( player->HasItemCount(20560, 1) && player->HasItemCount(20559, 1) && player->HasItemCount(20558, 1) && player->HasItemCount(29024, 1))
    {
        player->DestroyItemCount(20560, 1, true);
        player->DestroyItemCount(20559, 1, true);
        player->DestroyItemCount(20558, 1, true);
        player->DestroyItemCount(29024, 1, true);

        player->ModifyHonorPoints(+314);
        player->ModifyFactionReputation(1214,100);		

        player->CLOSE_GOSSIP_MENU();
    }
    else
    {
         _Creature->Say("Vous n'avez pas assez de marques", LANG_UNIVERSAL, NULL); player->CLOSE_GOSSIP_MENU();
    }

    return true;
}

void AddSC_npc_honneur_horde()
{
    Script *newscript;

    newscript = new Script;
    newscript->Name="npc_honneur_horde";
    newscript->pGossipHello =  &GossipHello_npc_honneur_horde;
    newscript->pGossipSelect = &GossipSelect_npc_honneur_horde;
    newscript->RegisterSelf();
}
