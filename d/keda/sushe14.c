inherit ROOM;

void create()
{
	set("short", "һ��¥�Ĳ�");
	set("long", @LONG
���ǵ��Ĳ㣬��¥�����ֱ߼������Ӵ���һ���������������ƺ���˵��
ʲô�������ʡ���ϸɲ������㲻���������ȥ������
��¥�ݿ�����¥��
LONG );
	set("exits", ([
		//"up" : __DIR__"sushe13",
		"down" : __DIR__"sushe13",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}