// yangfr.c

inherit ITEM;
void create()
{
	set_name("�������Ź�", ({ "yang furen corpse" }) );
	set_weight(30000);
	set_max_encumbrance(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��" );
		set("long", "����һ������ǰ�ν�����������˵��Źǡ����ؿڲ���һ�ھ�����ذ�ס�\n");
	}
	setup();
}
