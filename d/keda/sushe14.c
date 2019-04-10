inherit ROOM;

void create()
{
	set("short", "一号楼四层");
	set("long", @LONG
这是第四层，上楼梯左手边几个屋子传出一阵喧哗的声音，似乎是说有
什么“中央大省的老干部”。你不禁好奇地想去看看。
有楼梯可以下楼。
LONG );
	set("exits", ([
		//"up" : __DIR__"sushe13",
		"down" : __DIR__"sushe13",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}