#include <room.h>
#include <ansi.h>
inherit ROOM;

void init();
int do_jump(string arg);

void create()
{
	set("short", "�涴");
	set("long", @LONG
����һ�����ֲ�����ָ�ĺ����ӣ�ֻ�����������ƺ��п������ʱ��
����⣬������������ȥ��
LONG );
	set("exits", ([
		"out" : __DIR__"nanqi",
	]));
	//set("no_clean_up", 0);
	create_door("out", "��", "enter", DOOR_CLOSED);
	//replace_program(ROOM);
	setup();
}

void init()
{
        add_action("do_jump", "jump");
}

int do_jump(string arg)
{
	object me = this_player();
    if (arg != "well" && arg != "jing") return command("jump "+arg);
    message_vision("$N��ಣ���һ��������\n", me);
	me->move("d/keda/chongdong");
   return 1;
}
