inherit ROOM;

void create()
{
	set("short", "一号楼二层走廊");
	set("long", @LONG
这是第二层的走廊，两边都是房间。一个小伙子正快活地说，“要是娶
个有钱的老婆，相当于少奋斗二十年啊！”
LONG );
	set("exits", ([
	//	"east" : __DIR__"sushe122",
		"west" : __DIR__"sushe120",
	//	"south" : __DIR__"room216",
	//	"north" : __DIR__"room228",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}