#include <room.h>
#include <ansi.h>
inherit ROOM;

void init();
int do_jump(string arg);

void create()
{
	set("short", "虫洞");
	set("long", @LONG
这是一间伸手不见五指的黑屋子，只是屋子正中似乎有口深井，不时发
出红光，引诱着你跳进去。
LONG );
	set("exits", ([
		"out" : __DIR__"nanqi",
	]));
	//set("no_clean_up", 0);
	create_door("out", "门", "enter", DOOR_CLOSED);
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
    message_vision("$N＂嗖＂地一声跳进深井里。\n", me);
	me->move("d/keda/chongdong");
   return 1;
}
