inherit ROOM;

void create()
{
	set("short", "����¥");
	set("long", @LONG
����һ���Ĳ�Ĵ�¥������������ס�ºܶ��ˡ�Ů������������˯����
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