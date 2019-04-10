inherit ROOM;

void create()
{
	set("short", "一号楼三层");
	set("long", @LONG
这是第三层，房间里都没人，每间屋子都有四张上下床，你似乎可以去
睡觉。
有楼梯可以上下楼。
LONG );
	set("exits", ([
		"up" : __DIR__"sushe14",
		"down" : __DIR__"sushe12",
	]));
	set("no_clean_up", 0);
    set("sleep_room", 1);
	setup();
	replace_program(ROOM);
}