// Room: /d/songshan/chaotian.c
// Last Modified by Winder on Jul. 15 2001

inherit ROOM;

void create()
{
	set("short", "朝天门");
	set("long", @LONG
陡见双峰中断，天然出现一个门户，疾风从断绝处吹出，云雾随风
扑面而至，这里就是朝天门了。天门望去，便见箕山。路人到此，感受
山风送爽，亦不让“箕阴避暑”(jing)之处了。
LONG );
	set("item_desc", ([
		"jing" : "
    箕山背险坡上，树林茂密，林荫浓厚。龙潭泉处，山凋深长。两崖
石壁如剑，石洞阴润整洁，芳草苔蔓如毯，溪水淙淙似琴。炎夏仲秋之
时，此处环境幽雅，景色秀美，空气湿润，闵爽无比。因而，人们常常
云集于此觉胜避暑。箕山之阴的山间崖壁上，摩刻有许多游人题记，如
“幽谷”、“潜龙潭”、“溪溪凋冷”、“箕阴避暑处”等。字大如斗，
惹人注目。相传上古时代，高士许由不受尧让帝位，隐居于此。许由、
巢父在箕山隐居，劳累之余，便来箕阴乘凉避暑。
    西汉元封元年，武帝游历中岳，猎于箕山，正是炎夏酷暑季节，天
当午时，武帝收弓，汗流浃背，挥之不尽。来到箕阴避暑胜地，坐息片
刻，即有暑收入秋之感。武帝不禁哈哈大笑，顾从曰：“涯暑收矣！”。
古往今来，每到暑夏，常有游人到此消夏避暑，故称“箕阴避暑胜地”。
    时付梅《箕阴避暑》诗日：
                  独爱云林境界幽，绿荫蔽日翠光浮。
                  弃标崖畔排烦热，洗耳溪边枕细流。
                  每有凉风来树底，更无尘事到心头。
                  许由巢父今何在，千古箕山五月秋。
",
	]));
	set("exits", ([
		"northup"   : __DIR__"shandao6",
		"southdown" : __DIR__"shandao5",
	]));
	set("objects", ([
		CLASS_D("songshan")+"/wan" : 1,
	]));
	set("outdoors", "songshan");
	set("no_clean_up", 0);
	set("coor/x", -20);
	set("coor/y", 830);
	set("coor/z", 60);
	setup();
	replace_program(ROOM);
}
