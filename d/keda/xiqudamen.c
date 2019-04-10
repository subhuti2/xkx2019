inherit ROOM;

void create()
{
	set("short", "西区大门");
	set("long", @LONG
一个大门，上面写着“中国科学技术大学（西区）”。门口小广场上有
一个大轿子一样的方方正正的带轮子的东西，似乎可以自己动！
LONG );
	set("exits", ([
		"enter" : __DIR__"xiaoche",
		"south" : __DIR__"tushuguan",
		"west" : __DIR__"sushe1",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}