//Room: /d/dali/shulinwai.c
//Date: June. 29 1998 by Java

inherit ROOM;
void create()
{
	set("short","������");
	set("long",@LONG
��������һƬ��ɭɭ��������ǰ��������ȥ����������Ķ���
��ľ�����Ҿ�����������Լ�ɼ���ЩС·��������������ϸ�۲죬
��������Ȼ�Ǹ�������Թ������а������а��ԣ����Ŷݼף��˵�
��ͬС�ɣ�ǧ��ҪðȻ��ȥ��
LONG);
	set("outdoors", "dalic");
	set("exits",([ /* sizeof() == 1 */
	    "north"      : __DIR__"heilongling",
//	    "south"      : __DIR__"migongshulin",
	]));
	set("no_clean_up", 0);
	set("coor/x", -38000);
	set("coor/y", -71000);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}