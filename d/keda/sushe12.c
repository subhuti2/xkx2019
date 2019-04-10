inherit ROOM;

void create()
{
	set("short", "一号楼二层");
	set("long", @LONG
这是第二层，上楼梯左手边几个屋子传出一阵喧哗的声音，“二楼足球
联赛开始了”。你不禁好奇地想走过去看看。
有楼梯可以上下楼。
LONG );
	set("exits", ([
		"east" : __DIR__"sushe120",
		"up" : __DIR__"sushe13",
		"down" : __DIR__"sushe11",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}