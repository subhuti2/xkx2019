// yang.c 
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("杨莲亭", ({ "yang lianting", "yang" }));
	set("long","他身形魁梧，满脸虬髯，形貌极为雄健。\n");
        set("gender", "男性");
	set("age", 40);
	set("per", 29);

	set("max_qi",500);
	set_skill("unarmed", 50);
	set_skill("dodge", 50);
	set_skill("parry", 50);
	set_temp("apply/attack", 40);
	set_temp("apply/defense", 40);
	set_temp("apply/damage", 10);

	set("combat_exp", 50000);
	set("shen_type", -1);
	set("party/party_name", HIB"日月神教"NOR);
	set("party/rank", CYN"总坛总管"NOR);
	setup();
	add_money("silver", 50);
	carry_object(__DIR__"obj/yaoshi");
        carry_object(__DIR__"obj/zaohong")->wear();
}
	
