inherit ROOM;

void create()
{
	set("short", "һ��¥��������");
	set("long", @LONG
���ǵڶ�������ȣ����߶��Ƿ��䡣һ������Ĵ���վ���������ţ�
���ţ�����Mio�����ˣ���
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