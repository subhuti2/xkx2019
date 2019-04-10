inherit NPC;
inherit F_DEALER;

void create()
{
	set_name("小贩", ({ "seller" }) );
	set("gender", "男性" );
	set("age", 32);
	set("long", "这是个合肥土著，满口安徽口音的官话。\n别看他长的老老实实，可你别想从他那儿占便宜。\n");
	set("str", 30);
	set("dex", 30);
	set("con", 30);
	set("int", 30);
	set("attitude", "friendly");
	
	set("max_qi", 1500);
	set("max_jing", 800);
	set("neili", 1000);
	set("max_neili", 1000);
	set("jiali", 30);
	set("combat_exp", 60000);
	set("score", 1000);
	
	set_skill("force", 60);
	set_skill("taiji-shengong", 40);
	set_skill("dodge", 60);
	set_skill("tiyunzong", 90);
	set_skill("unarmed", 60);
	set_skill("taiji-quan", 90);
	set_skill("parry", 60);
	set_skill("sword", 60);
	set_skill("taiji-jian", 90);
	set_skill("taoism", 60);
	set_skill("literate", 50);

	map_skill("force", "taiji-shengong");
	map_skill("dodge", "tiyunzong");
	map_skill("unarmed", "taiji-quan");
	map_skill("parry", "taiji-jian");
	map_skill("sword", "taiji-jian");
	
	set("env/wimpy", 60);
	set("vendor_goods", ({
		"/d/village/npc/obj/egg",
	}) );
	setup();
	carry_object("/d/village/npc/obj/cloth")->wear();
	carry_object("/d/village/obj/zhujian")->wield();
	add_money("gold", 10);
}
void init()
{
	::init();
	add_action("do_buy", "buy");
	add_action("do_list", "list");
}

