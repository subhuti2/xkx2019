// Room: /d/nanshaolin/cyzi-4
// Last Modified by winder on May. 29 2001

inherit ROOM;

void create()
{
	set("short", "菜园子");
	set("long", @LONG
这里是少林寺的菜园子，方圆有两百来亩地，寺内所需的蔬菜，大
多数都是这里产的。对于犯戒的僧人，也常被罚到这里，做些劈柴，浇
地的苦役，已赎其过。园内正有十几名僧人忙碌的耕做着，其中有几人
身上居然带着镣铐。
LONG );
	set("outdoors", "nanshaolin");
	set("exits", ([
		"west"  : __DIR__"cyzi-1",
		"south" : __DIR__"cyzi-3",
	]));
	set("coor/x", 1880);
	set("coor/y", -6320);
	set("coor/z", 10);
	setup();
	replace_program(ROOM);
}

