inherit ROOM;

void create()
{
	set("short", "����¥");
	set("long", @LONG
����һ���Ĳ�Ĵ�¥������������ס�ºܶ��ˡ������кܶ෿�����˯
����
LONG );
	set("exits", ([
		"north" : __DIR__"sushe1",
		"south" : __DIR__"sushe3",
	]));
	set("no_clean_up", 0);
    set("sleep_room", 1);
	setup();
	replace_program(ROOM);
}