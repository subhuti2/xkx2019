// Room: /d/shaolin/shulin2.c
// Date: YZC 96/01/19

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����ǰ��Ȼһ�ڣ������У�ֻ������ǰ�󣬵������������
�ص������֡���ʮ�ɸߵĴ���������һ�飬��ʵ��֦Ҷ��һ����
��ɡ��������գ��������ڵ�˿��Ҳ�ޡ��߰Ѻ��������ڵ��ϣ�
һ�Ų���ȥ������β����������ƺ���ʧ�˷�����ûͷ��Ӭ��
�����Ҵ���
LONG );
	set("exits", ([
		"east" : __DIR__"shulin3",
		"south" : __DIR__"shulin"+(random(10)+2),
		"west" : __DIR__"shulin1",
		"north" : __DIR__"shulin"+(random(10)+2),
	]));

	set("no_clean_up", 0);
	set("outdoors", "shaolin");
	set("coor/x", -20);
	set("coor/y", 790);
	set("coor/z", 100);
	setup();
	replace_program(ROOM);
}