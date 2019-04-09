// Room: /binghuo/lingsheroad1.c
// Date: Oct.28 1999 by Winder

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
你走在树林中的小路上，四周僻静得让你感到窒息般的异常。密
密层层的树林遮天蔽日，你甚至听不到一点虫鸣。这里就是灵蛇岛？
怎么没有其他人呢？
LONG );
	set("outdoors", "lingshe");
	set("no_clean_up", 0);
	set("exits", ([
		"west"    : __DIR__"lingshedao",
		"northup" : __DIR__"lingsheroad2",
	]));
	setup();
	replace_program(ROOM);
}

