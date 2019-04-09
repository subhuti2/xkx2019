// linghu.c �����

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("�����", ({ "linghu chong", "linghu", "chong" }));
	set("nickname", "��ʦ��");
	set("long", 
"��������Ľ��ݣ�����Ũü���ۣ������Ѱ�������\n"
"ͬ���������ϴ��ǻ�ɽ������һ���еĶ�����֡�\n");
	set("gender", "����");
	set("age", 28);
	set("class", "swordsman");
	set("attitude", "peaceful");
	set("shen_type", 1);
	set("str", 30);
	set("int", 40);
	set("con", 30);
	set("dex", 30);
	
	set("qi", 2800);
	set("max_qi", 2800);
	set("jing", 1600);
	set("max_jing", 1600);
	set("neili", 2400);
	set("max_neili", 2400);
	set("jiali", 60);

	set("combat_exp", 800000);
	set("score", 100000);

	set_skill("blade", 60);
	set_skill("cuff", 60);
	set_skill("feiyan-huixiang", 250);
	set_skill("hand", 60);
	set_skill("finger", 60);
	set_skill("strike",60);
	set_skill("claw", 60);
	set_skill("unarmed",125);
	set_skill("force", 150);
	set_skill("zixia-shengong", 130);
	set_skill("dodge", 180);
	set_skill("parry", 140);
	set_skill("sword", 190);
	set_skill("huashan-sword", 250);
	set_skill("chongling-sword", 250);
	set_skill("lonely-sword", 160);
	set_skill("literate", 80);

	map_skill("force", "zixia-shengong");
	map_skill("unarmed", "huashan-zhangfa");
	map_skill("dodge", "feiyan-huixiang");
	map_skill("parry", "huashan-sword");
	map_skill("sword", "lonely-sword");
	set("env/wimpy", 60);
	set("chat_chance_combat", 60);
	set("chat_msg_combat", ({
		(: perform_action, "sword.po" :),
		(: perform_action, "sword.po" :),
		(: perform_action, "sword.poqi" :),
		(: perform_action, "sword.pozhong" :),
		(: exert_function, "powerup" :),
		(: exert_function, "regenerate" :),
		(: exert_function, "recover" :),
	}) );
	set("card2_count",1);

	create_family("��ɽ��", 14, "����");

	set("inquiry", ([
		"������" : "�����Ѿ��ܾ�û�м��������˼��ˡ���������\n",
		"��ӯӯ" : "������������Ϣ��˵�գ��Լ������鼤���������۾����ģ�\n",
	]));
	setup();	 	
	carry_object("/d/heimuya/npc/obj/cloth")->wear();
	carry_object("/clone/weapon/changjian")->wield();
}

void init()
{
	object ob;
	ob = this_player();	
	::init();
	if( interactive(ob) && !is_fighting() )
	{
		remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}
}

void greeting(object ob)
{
	if( !ob || environment(ob) != environment() ) return;
	say("���ղ��ܼ���ӯӯ����"+RANK_D->query_respect(ob)+"�������������Ϣ��\n");
}


int accept_object(object who, object ob)
{
	object obn;

	if( !who || environment(who) != environment() ) return 0;
	if ( !objectp(ob) ) return 0;
	if (query("card2_count") == 0)
	{ 
		say( "������: ���Ѿ�������ӯӯȥ�ˣ���л����!\n" );
		return 1;
	}
	if ( !present(ob, who) ) return notify_fail("��û�����������\n");

	if (  (string)ob->query("id") != "qing xin")
		return notify_fail("����岻��Ҫ���������\n");
	say( "�����˫��������ӯӯ���ţ���������, ���׻�����������ȥ����ӯӯ,
�������Ҿ�ȥ����!\n" );
	obn = new("/d/heimuya/npc/obj/card2");
	obn->move(who);
	set("card2_count",0);
	return 1;
}

void attempt_apprentice(object ob)
{
	int student_num;
	string temp, line;
	mapping myfam;

	temp = read_file("/data/FENG", 1, 1);
	student_num = atoi(temp);

	line = "���������ڹ���" + temp + "��ͽ�ܡ�\n";
	write(line);

	if ((int)ob->query("shen") < 0)
	{
		command("say �һ�ɽ�����������������ɣ��Ե���Ҫ���ϡ�");
		command("say �ڵ��з��棬" + RANK_D->query_respect(ob) +
			"�Ƿ����ò�����");
		return;
	}

	if ((int)ob->query_int() < 25)
	{
		command("say ���ҿ�" + RANK_D->query_respect(ob) + "�������ƺ����ʺ�ѧ�һ�ɽ���书��");
		return;
	}

	command("say �ðɣ��Ҿ��������ˡ�");
	command("recruit " + ob->query("id"));
/*
        myfam = (mapping)ob->query("family");
	if( (myfam["master_id"] == "feng qingyang") || (myfam["master_name"] == "������"))
	{
		temp = read_file("/data/FENG", 1, 1);
		student_num = atoi(temp);
		if(student_num == 1) temp = "0";
		else if(student_num == 2) temp = "1";
		else if(student_num == 3) temp = "2";
		write_file("/data/FENG", temp, 1);
		line = "���������ڹ���" + temp + "��ͽ�ܡ�\n";
		write(line);
	}
*/
	return;
}