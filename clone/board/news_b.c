// /clone/board/news_b.c

inherit BULLETIN_BOARD;

void create()
{
	seteuid(getuid());
	set_name("���¹����", ({ "board" }) );
	set("location", "/u/lijia/workroom");
	set("board_id", "news_b");
	set("long", "����һ����ʦ�ṩ������Ϣʱ�õ����԰塣\n" );
	setup();
	set("capacity", 100);
	replace_program(BULLETIN_BOARD);
}

