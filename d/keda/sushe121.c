inherit ROOM;

void create()
{
	set("short", "һ��¥��������");
	set("long", @LONG
���ǵڶ�������ȣ����߶��Ƿ��䡣һ��С����������˵����Ҫ��Ȣ
����Ǯ�����ţ��൱���ٷܶ���ʮ�갡����
LONG );
	set("exits", ([
	//	"east" : __DIR__"sushe122",
		"west" : __DIR__"sushe120",
	//	"south" : __DIR__"room216",
	//	"north" : __DIR__"room228",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}