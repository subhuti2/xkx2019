// Room: /d/nanyang/ruzhou.c
// Last Modified by winder on Nov. 20 2001

inherit ROOM;

void create()
{
	set("short", "���ݳ�");
	set("long", @LONG
���ݳ��Ǳ����Ĵ�ǣ������Ǳ��ұ���֮�ء��������ڴ�פ
���ر����̲��������������ˣ����������𸽽�ɽ�ϵĲݿܡ���
��һ�Ӷӹٱ�����ȥȥ��һ��ɭ�����������򶫱�����������֮
һ����ɽ��
LONG );
	set("exits", ([
		"south" : __DIR__"yidao3",
		"northeast"  : "/d/songshan/taishique",
		"north" : "/d/beijing/road10",
	]));
	set("objects", ([
		"/d/city/npc/wujiang" : 1,
		"/d/city/npc/bing" : 3,
	]));
	set("outdoors", "nanyang");
	set("coor/x", -20);
	set("coor/y", 650);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}
