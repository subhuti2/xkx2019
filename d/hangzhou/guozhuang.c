// guozhuang.c
// Date: Nov.1997 by Venus
#include <room.h>
inherit ROOM;
int do_knock(string arg);

void create()
{
        set("short", "郭庄");
        set("long", @LONG
庄园的大匾上是“郭庄”两个大字。大门(gate)紧闭，里面静悄
悄的一点声音都没有。
LONG);
        set("exits", ([
            "east"      : __DIR__"dadao1",
        ]));
        set("item_desc", ([
           "gate" : "朱红的大门紧闭着，敲敲(knock)看吧。\n"
        ]));
        set("objects", ([
                __DIR__"npc/wolfdog" : 2,
        ]));
//        set("no_clean_up", 0);
	set("coor/x", 4060);
	set("coor/y", -1450);
	set("coor/z", 0);
	setup();
}
void init()
{
        add_action("do_knock", "knock");
}

int do_knock(string arg)
{
        object me;

        me = this_player();
message_vision("$N“咚，咚，咚，。。。”地敲着门，可里面却一点动静都没有。\n", me);
        return 1;
}