inherit ROOM;

void create()
{
	set("short", "һ��¥");
	set("long", @LONG
����һ���Ĳ�Ĵ�¥������������ס�ºܶ��ˡ�
LONG );
	set("exits", ([
		"enter" : __DIR__"sushe11",
		"south" : __DIR__"sushe2",
		"east" : __DIR__"xiqudamen",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}