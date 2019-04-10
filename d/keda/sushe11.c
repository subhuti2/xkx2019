inherit ROOM;

void create()
{
	set("short", "一号楼大厅");
	set("long", @LONG
这是一个大厅，往里走是办公室。一个大爷坐在传达室里，摇着扇子。
有楼梯可以上楼。
LONG );
	set("exits", ([
		"up" : __DIR__"sushe12",
		"out" : __DIR__"sushe1",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}