// Room: /d/5lt/huikeshi.c
inherit  ROOM;

#include <room.h>


void  create  ()
{
	set  ("short",  "�����");
	set  ("long",  @LONG
�����Ǵ�֧���Ļ���ҡ�����������Ŀ�Ľ��졢��״������֤�飬
���㲻���������ۡ�
LONG);
	set("exits",  ([  //sizeof()  ==  1
		"north"  :  __DIR__"czoffice",
	]));
	set("objects",  ([
	]));

        create_door("north", "ľ��", "south", DOOR_CLOSED);
	set("no_fight", 1);
	set("coor/x", -170);
	set("coor/y", 20);
	set("coor/z", 0);
	setup();
}
