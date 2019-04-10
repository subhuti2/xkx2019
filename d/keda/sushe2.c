inherit ROOM;

void create()
{
	set("short", "二号楼");
	set("long", @LONG
这是一栋四层的大楼，看起来可以住下很多人。里面有很多房间可以睡
觉。
LONG );
	set("exits", ([
		"north" : __DIR__"sushe1",
		"south" : __DIR__"sushe3",
	]));
	set("no_clean_up", 0);
    set("sleep_room", 1);
	setup();
	replace_program(ROOM);
}