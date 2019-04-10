inherit ROOM;

void create()
{
	set("short", "一号楼");
	set("long", @LONG
这是一栋四层的大楼，看起来可以住下很多人。
LONG );
	set("exits", ([
		"enter" : __DIR__"sushe11",
		"south" : __DIR__"sushe2",
		"east" : __DIR__"xiqudamen",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}