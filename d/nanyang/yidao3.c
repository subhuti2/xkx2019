// Room: /d/nanyang/yidao3.c
// Last Modified by winder on Nov. 20 2001

inherit ROOM;

void create()
{
	set("short", "大驿道");
	set("long", @LONG
你走在一条尘土飞扬的大驿道上。四周人来人往。挑担子的行商，
赶着大车的马夫，上京赶考的书生，熙熙攘攘，非常热闹。不时还有两
三骑快马从身边飞驰而过，扬起一路尘埃。道路两旁是整整齐齐的杨树
林。
LONG );
	set("exits", ([
		"south" : __DIR__"beimen",
		"north" : __DIR__"ruzhou",
	]));
	set("no_clean_up", 0);
	set("outdoors", "nanyang");
	set("coor/x", -20);
	set("coor/y", 600);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}
