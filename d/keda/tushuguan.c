inherit ROOM;

void create()
{
	set("short", "图书馆");
	set("long", @LONG
这是附近最高的一座楼，有二十几层。里面有很多房间。
LONG );
	set("exits", ([
		//"south" : __DIR__"各系系楼",
		"north" : __DIR__"xiqudamen",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}