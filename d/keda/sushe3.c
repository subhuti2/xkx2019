inherit ROOM;

void create()
{
	set("short", "三号楼");
	set("long", @LONG
这是一栋四层的大楼，看起来可以住下很多人。女生可以在这里睡觉。
LONG );
	set("exits", ([
		//"west" : __DIR__"shitang",
		//"south" : __DIR__"sushe4",
		"north" : __DIR__"sushe2",
	]));
	set("no_clean_up", 0);
    set("sleep_room", 1);
	setup();
	replace_program(ROOM);
}