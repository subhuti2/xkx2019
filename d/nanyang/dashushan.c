// Room: /d/nanyang/yidao1.c
// Last Modified by winder on Nov. 20 2001

inherit ROOM;

void create()
{
	set("short", "����ɽ");
	set("long", @LONG
����ɽ��˵��ɽ����ʵ����һ���������ѣ��������������дг�����
��ľ��������������®�ݵ����غϷʣ��Թŵı��ұ���֮�ء���˵����
��չ����������
LONG );
	set("exits", ([
		"east" : __DIR__"nanqi",
		"northwest" : __DIR__"yidao1",
	]));
	set("no_clean_up", 0);
	set("outdoors", "nanyang");
	set("coor/x", -2);
	set("coor/y", 80);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}
