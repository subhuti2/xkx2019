// Room: /d/henshan/wangritai.c
// Modified By Java Feb.14.1998

#include <room.h>
inherit ROOM;
void create()
{
        set("short", "����̨");
        set("long", @LONG
����̨����ף�ڵ����ҹ�𣬵�̨������ң�����ţ���ˮ�Գ࣬
ٿ����ʣ����ֵ�����������������֮��ӿ���𣬹�ҫ��Ŀ��
LONG);
        set("exits", ([ /* sizeof() == 4 */
           "southdown"  : __DIR__"shiziyan",
           "northup"    : __DIR__"zhurongdian",
        ]));
        set("outdoors", "henshan");
        set("no_clean_up", 0);
	set("coor/x", -310);
	set("coor/y", -1000);
	set("coor/z", 40);
	setup();
        replace_program(ROOM);
}
