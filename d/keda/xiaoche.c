inherit ROOM;

void create()
{
	set("short", "校车");
	set("long", @LONG
这个东西有一间房子那么大，有很多座位整整齐齐排在一起。一个满脸
胡子的大叔说道，“坐稳、扶好”。没有人推也没有马拉，它居然自己
就动了起来。你吓得目瞪口呆。一会儿，那个大叔说，“到了，请大家
下车吧。”
LONG );
	set("exits", ([
		"out" : __DIR__"xiqudamen",
		"down" : __DIR__"chongdong",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}