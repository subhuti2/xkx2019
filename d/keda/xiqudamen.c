inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
һ�����ţ�����д�š��й���ѧ������ѧ�������������ſ�С�㳡����
һ�������һ���ķ��������Ĵ����ӵĶ������ƺ������Լ�����
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