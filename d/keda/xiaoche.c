inherit ROOM;

void create()
{
	set("short", "У��");
	set("long", @LONG
���������һ�䷿����ô���кܶ���λ������������һ��һ������
���ӵĴ���˵���������ȡ����á���û������Ҳû������������Ȼ�Լ�
�Ͷ������������ŵ�Ŀ�ɿڴ���һ������Ǹ�����˵�������ˣ�����
�³��ɡ���
LONG );
	set("exits", ([
		"out" : __DIR__"xiqudamen",
		"down" : __DIR__"chongdong",
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}