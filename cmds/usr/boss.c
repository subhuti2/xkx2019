// /cmds/usr/boss.c
inherit F_CLEAN_UP;

#include <ansi.h>

int main(object me, string arg)
{
	string msg;
	write(CLR);
	if(arg)
	{
		msg = read_file("/open/shit.txt");
		write(msg);
	}
	me->set_temp("block_msg/all",1);
	me->set_temp("boss_screen", 1);
//	message("channel:chat",RED"�����塿"+me->name(1)+"�Ҵҹ�����Ļ����ͷ���ܡ��������ϰ����ˡ�\n"NOR,users());
	return 1;
}

int help(object me)
{
	write(@HELP
ָ���ʽ: boss <arg>

    ���ָ���������ϰ����ǰһ����ʱ����Ļ�����е�������
������� <arg>������Ļ��������л��������Ļ����ʾ��һЩ
���¡����ͬʱ���㽫�ܲ����κ����Է��Ƶ�ѶϢ��ֱ��������
bossgoneָ�

�й�ָ�bossgone
HELP
	);
	return 1;
}