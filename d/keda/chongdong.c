#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "新生接待处");
	set("long", @LONG
这是一个小广场，摆着几张桌子，桌子后面几个形容猥琐的青年正在四
处观望。桌子左边有一面大旗，写着“中国科学技术大学”。右面有一
个黑盒子，发出人说话的声音：“欢迎跨越时空的朋友们，请乘坐校车
到科大西区！”。你对这一切感到非常陌生，有点害怕。看到广场一侧
有个门上写着：“回家之门”，就快步走了过去。不经意间看到一个大
轿子一样的方方正正的带轮子的东西，似乎可以自己动！
LONG );
	set("exits", ([
		"out" : "d/nanyang/chongdong",
		"up" : __DIR__"xiaoche",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}