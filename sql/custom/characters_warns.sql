CREATE TABLE `warns` (
  `id` int(24) unsigned NOT NULL auto_increment,
  `PlayerAccountId` int(11) unsigned NOT NULL,
  `GmAccountId` int(11) unsigned NOT NULL,
  `PlayerName` varchar(12) NOT NULL,
  `Raison` text NOT NULL,
  `Date` int(12) unsigned NOT NULL,
  PRIMARY KEY  (`id`),
  KEY `id` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;

