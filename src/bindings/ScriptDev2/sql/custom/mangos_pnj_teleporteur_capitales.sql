DELETE FROM `creature_template` WHERE (`entry`=100000);
INSERT INTO `creature_template` (`entry`, `heroic_entry`, `modelid_A`, `modelid_A2`, `modelid_H`, `modelid_H2`, `name`, `subname`, `minlevel`, `maxlevel`, `minhealth`, `maxhealth`, `minmana`, `maxmana`, `armor`, `faction_A`, `faction_H`, `npcflag`, `speed`, `rank`, `mindmg`, `maxdmg`, `dmgschool`, `attackpower`, `baseattacktime`, `rangeattacktime`, `dynamicflags`, `family`, `trainer_type`, `trainer_spell`, `class`, `race`, `minrangedmg`, `maxrangedmg`, `rangedattackpower`, `type`, `lootid`, `pickpocketloot`, `skinloot`, `resistance1`, `resistance2`, `resistance3`, `resistance4`, `resistance5`, `resistance6`, `spell1`, `spell2`, `spell3`, `spell4`, `mingold`, `maxgold`, `AIName`, `MovementType`, `InhabitType`, `RacialLeader`, `RegenHealth`, `equipment_id`, `ScriptName`) VALUES (100000, 0, 22387, 0, 22386, 0, 'Jumper', '<MaÃ®tre des tÃ©lÃ©porteurs>', 65, 65, 5100, 5100, 1528, 1528, 0, 35, 35, 65537, 1, 0, 152, 239, 0, 1367, 1440, 1584, 0, 0, 0, 0, 0, 0, 301.34, 422.17, 100, 7, 0, 3296, 3296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 215, '', 0, 3, 0, 1, 133, 'teleporteur_capitales');
DELETE FROM `creature` WHERE `id`=100000;
INSERT INTO `creature` (`guid`,`id`,`map`,`modelid`,`equipment_id`,`position_x`,`position_y`,`position_z`,`orientation`,`spawntimesecs`,`spawndist`,`currentwaypoint`,`curhealth`,`curmana`,`DeathState`,`MovementType`) VALUES
(200000,100000,1,0,122,'1476.36','-4410.59','25.2355','3.93092',25,0,0,5100,1528,0,0),
(200001,100000,1,0,122,'1477.58','-4424.84','25.2356','2.77639',25,0,0,5100,1528,0,0),
(200002,100000,530,0,133,'9422.1','-7278.55','14.2024','3.12981',25,0,0,5100,1528,0,0),
(200003,100000,0,0,133,'1810.13','238.246','62.7536','6.27455',25,0,0,5100,1528,0,0),
(200004,100000,1,0,133,'-1275.76','113.168','130.666','2.20854',25,0,0,5100,1528,0,0),
(200005,100000,0,0,133,'-8919.03','539.843','94.7009','2.1694',25,0,0,5100,1528,0,0),
(200006,100000,0,0,133,'-8927.36','551.106','94.3107','5.32903',25,0,0,5100,1528,0,0),
(200007,100000,1,0,133,'9951.77','2280.4','1341.39','0.0149949',25,0,0,5100,1528,0,0),
(200008,100000,0,0,133,'-4974.18','-891.809','501.598','2.28551',25,0,0,5100,1528,0,0),
(200009,100000,530,0,133,'-3995.12','-11849.4','0.280837','5.13572',25,0,0,5100,1528,0,0),
(200010,100000,530,0,133,'-3984.39','-11855.4','0.384883','4.07543',25,0,0,5100,1528,0,0);

