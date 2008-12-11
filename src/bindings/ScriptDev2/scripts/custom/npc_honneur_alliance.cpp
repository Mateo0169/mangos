#include "precompiled.h"


#define GOSSIP_ITEM_HONNEUR_ALLIANCE "Echange marques contre honneur"

bool GossipHello_npc_honneur_alliance(Player *player, Creature *_Creature)
{
    player->ADD_GOSSIP_ITEM(0, GOSSIP_ITEM_HONNEUR_ALLIANCE, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 1);	
    player->SEND_GOSSIP_MENU(3961,_Creature->GetGUID());
    return true;	
}

bool GossipSelect_npc_honneur_alliance(Player *player, Creature *_Creature, uint32 sender, uint32 action)
{
    if ( player->HasItemCount(20560, 1) && player->HasItemCount(20559, 1) && player->HasItemCount(20558, 1) && player->HasItemCount(29024, 1))
    {
        player->DestroyItemCount(20560, 1, true);
        player->DestroyItemCount(20559, 1, true);
        player->DestroyItemCount(20558, 1, true);
        player->DestroyItemCount(29024, 1, true);

        player->ModifyHonorPoints(+314);
        player->ModifyFactionReputation(1577,100);		

        player->CLOSE_GOSSIP_MENU();
    }
    else
    {
         _Creature->Say("Vous n'avez pas assez de marques", LANG_UNIVERSAL, NULL); player->CLOSE_GOSSIP_MENU();
    }

    return true;
}

void AddSC_npc_honneur_alliance()
{
    Script *newscript;

    newscript = new Script;
    newscript->Name="npc_honneur_alliance";
    newscript->pGossipHello =  &GossipHello_npc_honneur_alliance;
    newscript->pGossipSelect = &GossipSelect_npc_honneur_alliance;
    newscript->RegisterSelf();
}
