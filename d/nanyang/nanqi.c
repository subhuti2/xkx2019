#include <room.h>
inherit ROOM;

void create()
{
	set("short", "南七");
	set("long", @LONG
这里是合肥的南郊，稀稀落落有几座不起眼的建筑。一个小贩在这里卖
些吃的，嘴里嘟嘟囔囔说着土话：“买个子弹切切？”。旁边的草棚门上
模模糊糊写着“南七技校”几个字，似乎有股莫名的力量在吸引着你。你
有点害怕，只想赶紧离开这里。
LONG );
	set("exits", ([
		"west" : __DIR__"dashushan",
		"north" : __DIR__"xiaoyaojin",
		"enter" : __DIR__"chongdong",
	]));
	set("objects", ([
		CLASS_D("keda") + "/seller" : 1,
	]));
	
//	set("no_clean_up", 0);
	create_door("enter", "门", "out", DOOR_CLOSED);
//	create_door("enter", "门", "north", DOOR_CLOSED, "west", DOOR_CLOSED);
	set("outdoors", "nanyang");
	set("coor/x", 0);
	set("coor/y", 80);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}
