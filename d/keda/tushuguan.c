inherit ROOM;

void create()
{
	set("short", "ͼ���");
	set("long", @LONG
���Ǹ�����ߵ�һ��¥���ж�ʮ���㡣�����кܶ෿�䡣
LONG );
	set("exits", ([
		//"south" : __DIR__"��ϵϵ¥",
		"north" : __DIR__"xiqudamen",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}