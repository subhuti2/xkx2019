inherit ROOM;

void create()
{
	set("short", "һ��¥����");
	set("long", @LONG
���ǵڶ��㣬��¥�����ֱ߼������Ӵ���һ������������������¥����
������ʼ�ˡ����㲻����������߹�ȥ������
��¥�ݿ�������¥��
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