// Room: /d/nanyang/yidao1.c
// Last Modified by winder on Nov. 20 2001

inherit ROOM;

void create()
{
	set("short", "大蜀山");
	set("long", @LONG
大蜀山虽说叫山，其实就是一个大点的土堆，不过倒是郁郁葱葱长满了
树木。这里往东就是庐州的首县合肥，自古的兵家必争之地。据说后世
发展不可限量。
LONG );
	set("exits", ([
		"east" : __DIR__"nanqi",
		"northwest" : __DIR__"yidao1",
	]));
	set("no_clean_up", 0);
	set("outdoors", "nanyang");
	set("coor/x", -2);
	set("coor/y", 80);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}
