// Room: /d/nanyang/yidao1.c
// Last Modified by winder on Nov. 20 2001

inherit ROOM;

void create()
{
	set("short", "逍遥津");
	set("long", @LONG
这里风景不错，算是合肥的核心地区。据说历史上张辽曾经在此打败数
倍的东吴军队，令江东小儿不敢夜啼。
LONG );
	set("exits", ([
		"northeast" : __DIR__"yidao",
		"south" : __DIR__"nanqi",
	]));
	set("no_clean_up", 0);
	set("outdoors", "nanyang");
	set("coor/x", 0);
	set("coor/y", 81);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}
