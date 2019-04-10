inherit ROOM;

void create()
{
	set("short", "一号楼二层走廊");
	set("long", @LONG
这是第二层的走廊，两边都是房间。一个魁梧的大汉正站在那里拍门，
喊着，“捞Mio，宝姿！”
LONG );
	set("exits", ([
		"east" : __DIR__"sushe121",
		"west" : __DIR__"sushe12",
		"south" : __DIR__"room215",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}