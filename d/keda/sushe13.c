inherit ROOM;

void create()
{
	set("short", "һ��¥����");
	set("long", @LONG
���ǵ����㣬�����ﶼû�ˣ�ÿ�����Ӷ����������´������ƺ�����ȥ
˯����
��¥�ݿ�������¥��
LONG );
	set("exits", ([
		"up" : __DIR__"sushe14",
		"down" : __DIR__"sushe12",
	]));
	set("no_clean_up", 0);
    set("sleep_room", 1);
	setup();
	replace_program(ROOM);
}