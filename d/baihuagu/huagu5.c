// Room: /d/baihuagu/huagu5.c
// Last Modified by Winder on Mar. 5 2001
inherit ROOM;

#include <ansi.h>

void create()
{
	set("short", HIR"�ٻ���"NOR);
	set("long", 
HIG"�����˴�����ͻȻ��ǰһ�������������ȣ���׺�Ż����ϣ�
��ƻ�׵��ʻ������ǻ���һ�����硣������һ���������������ޡ�\n"NOR);  
	set("outdoors", "baihuagu");
	set("exits", ([
		"east" :__DIR__"huagu4",
		"north":__DIR__"huagu2",
		"south":__DIR__"huagu6",
		"west" :__DIR__"huagu5",
	]));
	set("objects", ([
	]));
	set("no_clean_up", 0);
	set("coor/x", -450);
	set("coor/y", -360);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}