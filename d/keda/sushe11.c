inherit ROOM;

void create()
{
	set("short", "һ��¥����");
	set("long", @LONG
����һ���������������ǰ칫�ҡ�һ����ү���ڴ������ҡ�����ӡ�
��¥�ݿ�����¥��
LONG );
	set("exits", ([
		"up" : __DIR__"sushe12",
		"out" : __DIR__"sushe1",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}