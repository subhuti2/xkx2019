#include <room.h>
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����ǺϷʵ��Ͻ���ϡϡ�����м��������۵Ľ�����һ��С����������
Щ�Եģ�����������˵��������������ӵ����У������ԱߵĲ�������
ģģ����д�š����߼�У�������֣��ƺ��й�Ī�����������������㡣��
�е㺦�£�ֻ��Ͻ��뿪���
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
	create_door("enter", "��", "out", DOOR_CLOSED);
//	create_door("enter", "��", "north", DOOR_CLOSED, "west", DOOR_CLOSED);
	set("outdoors", "nanyang");
	set("coor/x", 0);
	set("coor/y", 80);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}
