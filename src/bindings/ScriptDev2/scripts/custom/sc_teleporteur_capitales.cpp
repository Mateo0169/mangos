#include "precompiled.h"
#include "../../../../game/Player.h"
#include "../../../../game/GossipDef.h"
long argent;
long cout;
long coutot;

bool GossipHello_teleporteur_capitales(Player *player, Creature *_Creature )
{
    if ( player->GetTeam() == HORDE && player->getLevel() >= 68 )
    {
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers les Pitons du Tonnerre  1 Po", GOSSIP_SENDER_MAIN, 1200);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Orgrimmar  1 Po", GOSSIP_SENDER_MAIN, 1201);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers les Fossoyeuses  1 Po", GOSSIP_SENDER_MAIN, 1202);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Lune d\'Argent  1 Po", GOSSIP_SENDER_MAIN, 1203);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Shattrath  10 Po", GOSSIP_SENDER_MAIN, 1211);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers La Grande ArÃšne  1 Po", GOSSIP_SENDER_MAIN, 1209);
    }
    else if ( player->GetTeam() == HORDE && player->getLevel() >= 62 )
    {
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers les Pitons du Tonnerre  1 Po", GOSSIP_SENDER_MAIN, 1200);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Orgrimmar  1 Po", GOSSIP_SENDER_MAIN, 1201);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers les Fossoyeuses  1 Po", GOSSIP_SENDER_MAIN, 1202);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Lune d\'Argent  1 Po", GOSSIP_SENDER_MAIN, 1203);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers l\'OutreTerre  10 Po", GOSSIP_SENDER_MAIN, 1208);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers La Grande ArÃšne  1 Po", GOSSIP_SENDER_MAIN, 1209);;
    }
    else if ( player->GetTeam() == HORDE && player->getLevel() >= 50 )
    {
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers les Pitons du Tonnerre  1 Po", GOSSIP_SENDER_MAIN, 1200);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Orgrimmar  1 Po", GOSSIP_SENDER_MAIN, 1201);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers les Fossoyeuses  1 Po", GOSSIP_SENDER_MAIN, 1202);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Lune d\'Argent  1 Po", GOSSIP_SENDER_MAIN, 1203);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers La Grande ArÃšne  1 Po", GOSSIP_SENDER_MAIN, 1209);
    }
    else if ( player->GetTeam() == HORDE && player->getLevel() < 50)
    {
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers les Pitons du Tonnerre  1 Po", GOSSIP_SENDER_MAIN, 1200);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Orgrimmar  1 Po", GOSSIP_SENDER_MAIN, 1201);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers les Fossoyeuses  1 Po", GOSSIP_SENDER_MAIN, 1202);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Lune d\'Argent  1 Po", GOSSIP_SENDER_MAIN, 1203);
    }
    else if ( player->GetTeam() == ALLIANCE && player->getLevel() >= 68 )
    {
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Hurlevent  1 Po", GOSSIP_SENDER_MAIN, 1204);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Forgefer  1 Po", GOSSIP_SENDER_MAIN, 1205);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Darnassus  1 Po", GOSSIP_SENDER_MAIN, 1206);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers l\'Exodar  1 Po", GOSSIP_SENDER_MAIN, 1207);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Shattrath  10 Po", GOSSIP_SENDER_MAIN, 1211);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers La Grande ArÃšne  1 Po", GOSSIP_SENDER_MAIN, 1210);
    }
    else if ( player->GetTeam() == ALLIANCE && player->getLevel() >= 62 )
    {
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Hurlevent  1 Po", GOSSIP_SENDER_MAIN, 1204);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Forgefer  1 Po", GOSSIP_SENDER_MAIN, 1205);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Darnassus  1 Po", GOSSIP_SENDER_MAIN, 1206);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers l\'Exodar  1 Po", GOSSIP_SENDER_MAIN, 1207);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers l\'OutreTerre  10 Po", GOSSIP_SENDER_MAIN, 1208);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers La Grande ArÃšne  1 Po", GOSSIP_SENDER_MAIN, 1210);
    }
    else if ( player->GetTeam() == ALLIANCE && player->getLevel() >= 50 )
    {
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Hurlevent  1 Po", GOSSIP_SENDER_MAIN, 1204);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Forgefer  1 Po", GOSSIP_SENDER_MAIN, 1205);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Darnassus  1 Po", GOSSIP_SENDER_MAIN, 1206);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers l\'Exodar  1 Po", GOSSIP_SENDER_MAIN, 1207);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers La Grande ArÃšne  1 Po", GOSSIP_SENDER_MAIN, 1210);
    }
    else if ( player->GetTeam() == ALLIANCE && player->getLevel() < 50)
    {
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Hurlevent  1 Po", GOSSIP_SENDER_MAIN, 1204);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Forgefer  1 Po", GOSSIP_SENDER_MAIN, 1205);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers Darnassus  1 Po", GOSSIP_SENDER_MAIN, 1206);
        player->ADD_GOSSIP_ITEM( 2, "Voyager vers l\'Exodar  1 Po", GOSSIP_SENDER_MAIN, 1207);
    }

    _Creature->Say("Vers où voulez vous voyager?", LANG_UNIVERSAL, NULL);
    player->SEND_GOSSIP_MENU(5,_Creature->GetGUID());

    return true;
}

void SendDefaultMenu_teleporteur_capitales(Player *player, Creature *_Creature, uint32 action )
{
    if (player->getLevel() < 20 )
    {
        _Creature->Say("Vous n'avez pas le niveau pour vous tÃ©lÃ©porter", LANG_UNIVERSAL, NULL); player->CLOSE_GOSSIP_MENU();
        return;
    }

    argent = player-> GetMoney();
    cout = 10000;
    coutot = 100000;

    if ( cout > argent ) 
    {
        _Creature->Say("Vous n'avez pas l'argent pour vous tÃ©lÃ©porter", LANG_UNIVERSAL, NULL); player->CLOSE_GOSSIP_MENU();
        return;
    }
    else if (action == 1208 && coutot > argent)
    {
        _Creature->Say("Vous n'avez pas l'argent pour vous tÃ©lÃ©porter en OutreTerre", LANG_UNIVERSAL, NULL); player->CLOSE_GOSSIP_MENU();
        return;
    }

    //Pitons
    if (action == 1200 && player->getLevel() > 19)
    {
    _Creature->Say("Vous partez pour les Pitons du Tonnerre", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-cout);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -1285.42f, 176.523f, 130.994f, 0.0f);
    }

    //Orgri
    if (action == 1201 && player->getLevel() > 19)
    {
    _Creature->Say("Vous partez pour Orgrimmar", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-cout);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 1552.5f, -4420.66f, 8.94802f, 0.0f);
    }

    //Foss
    if (action == 1202 && player->getLevel() > 19)
    {
    _Creature->Say("Vous partez pour Fossoyeuse", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-cout);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 1831.26f, 238.53f, 61.52f, 0.0f);
    }

    //Lune d'Argent
    if (action == 1203 && player->getLevel() > 19)
    {
    _Creature->Say("Vous partez pour Lune d'Argent", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-cout);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(530, 9414.18f, -7278.97f, 15.2031f, 0.0f);
    }

    //Hurlevent
    if (action == 1204 && player->getLevel() > 19)
    {
    _Creature->Say("Vous partez pour Hurlevent", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-cout);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -8913.23f, 554.633f, 93.7944f, 0.0f);
    }

    //Forgefer
    if (action == 1205 && player->getLevel() > 19)
    {
    _Creature->Say("Vous partez pour Forgefer", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-cout);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -4981.25f, -881.542f, 501.66f, 0.0f);
    }

    //Darna
    if (action == 1206 && player->getLevel() > 19)
    {
    _Creature->Say("Vous partez pour Darnassus", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-cout);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 9948.55f, 2413.59f, 1327.23f, 0.0f);
    }

    //Exodar
    if (action == 1207 && player->getLevel() > 19)
    {
    _Creature->Say("Vous partez pour l'Exodar", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-cout);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(530, -4073.03f, -12020.4f, -1.47f, 0.0f);
    }

    //OutreTerre
    if (action == 1208 && player->getLevel() > 61)
    {
    _Creature->Say("Vous partez pour l'OutreTerre", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-coutot);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(530, -238.0000f, 968.0000f, 84.0000f, 0.0f);
    }

    //Arene H2
    if (action == 1209 && player->getLevel() > 49)
    {
    _Creature->Say("Vous partez pour La Grande arÃšne", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-cout);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -13257.063f, 224.33f, 42.976f, 0.0f);
	}

    //Arene A2
    if (action == 1210 && player->getLevel() > 49)
    {
    _Creature->Say("Vous partez pour La Grande arÃšne", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-cout);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -13215.92f, 202.097f, 42.975f, 0.0f);
    }

    //Shattrath
    if (action == 1211 && player->getLevel() > 67)
    {
    _Creature->Say("Vous partez pour Shattrath", LANG_UNIVERSAL, NULL);
    player->ModifyMoney(-coutot);
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(530, -1838.1600f, 5301.7900f, -12.4270f, 0.0f);
    }
}

bool GossipSelect_teleporteur_capitales(Player *player, Creature *_Creature, uint32 sender, uint32 action)
{
    if (sender == GOSSIP_SENDER_MAIN)
        SendDefaultMenu_teleporteur_capitales(player, _Creature, action   );

    return true;
}

void AddSC_teleporteur_capitales()
{
    Script *newscript;

    newscript = new Script;
    newscript->Name="teleporteur_capitales";
    newscript->pGossipHello = &GossipHello_teleporteur_capitales;
    newscript->pGossipSelect = &GossipSelect_teleporteur_capitales;
    newscript->pItemHello = NULL;
    newscript->pGOHello = NULL;
    newscript->pAreaTrigger = NULL;
    newscript->pItemQuestAccept = NULL;
    newscript->pGOQuestAccept = NULL;
    newscript->pGOChooseReward = NULL;

    newscript->RegisterSelf();
}

