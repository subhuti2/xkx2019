// Room: /d/nanyang/yidao1.c
// Last Modified by winder on Nov. 20 2001

inherit ROOM;

void create()
{
	set("short", "��ң��");
	set("long", @LONG
����羰�������ǺϷʵĺ��ĵ�������˵��ʷ�����������ڴ˴����
���Ķ�����ӣ����С������ҹ�䡣
LONG );
	set("exits", ([
		"northeast" : __DIR__"yidao",
		"south" : __DIR__"nanqi",
	]));
	set("no_clean_up", 0);
	set("outdoors", "nanyang");
	set("coor/x", 0);
	set("coor/y", 81);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}
