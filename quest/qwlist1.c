//qwlist.c
//Last Modified by firefly    2004/3/31

// /d/���µĶ������ӽ�ȥ��
/*��ע����ȥ���Ķ����⣬��ȥ���ˣ�
�� ��� �ܵ� �ɵ� ѩ�� ���� �˲�
�׳�ȹ �ֲ��� ��˿�� ���ɵ� ��ɽ�� ˮ��Ь
��ɫҩ�� ��ɫҩ�� ��ɫҩ�� ��ɫҩ�� ��ɫҩ�� ���Ჷ�� ��ɽ���� ѩ����󸵤 
��ҩ �ò�����   
�������� ���˲�Ҫ  */

inherit SKILL;
#include <ansi.h>


mapping *quest1 = ({
  //������
  ([  "quest":  "[31m��ͥ��[2;37;0m"]),
  ([  "quest":  "[1;32m��ͥ����[2;37;0m"]),
  ([  "quest":  "[33m��������[2;37;0m"]),
  ([  "quest":  "���ܹ�"]),
  ([  "quest":  "���̾ƺ�"]), 
  ([  "quest":  "�������䵶"]),
  ([  "quest":  "ˮ��"]),                               
  ([  "quest":  "�׷�"]), 
  ([  "quest":  "����"]),
  ([  "quest":  "�ߵ���"]), 
  ([  "quest":  "����"]), 
  ([  "quest":  "����"]), 
  ([  "quest":  "[36m��ש[2;37;0m"]),        
  ([  "quest":  "[1;36m����[2;37;0m"]),        
  ([  "quest":  "[1;33m��ٸ[2;37;0m"]),  
  ([  "quest":  "������"]), 
  ([  "quest":  "���ָ"]), 
  ([  "quest":  "�廨СЬ"]), 
  ([  "quest":  "�ۺ����"]),
  ([  "quest":  "��Ƥ"]),
  ([  "quest":  "[31mѪ��[2;37;0m"]),                 
  ([  "quest":  "����"]),                               
  ([  "quest":  "[33m����[2;37;0m"]), 
  ([  "quest":  "[32m�ⵣ[2;37;0m"]), 
  ([  "quest":  "������"]),  
  ([  "quest":  "��"]),                                 
  ([  "quest":  "[33m��Ƥѥ[2;37;0m"]),
  ([  "quest":  "[1;33m��������[2;37;0m"]), 
  ([  "quest":  "[1;36mǳ��ɫ����[2;37;0m"]),                        

});
mapping *quest2 = ({
 //"normal":
// ��ɼ��ʸߵ�
  ([  "quest":  "����"]), 
  ([  "quest":  "���ݴ�"]),                             
  ([  "quest":  "��ɫ����"]),
  ([  "quest":  "��ɽ����"]),
  ([  "quest":  "��˹����"]),
  ([  "quest":  "������"]), 
  ([  "quest":  "ά����峤��"]),
  ([  "quest":  "����"]),
  ([  "quest":  "����о�ɢ"]),
  ([  "quest":  "������"]),                             
///////////////////////////
// Ҫ���ɴ��׵�
  ([  "quest":  "[1;35m��Ů�ľ��ϲ�[2;37;0m"]),
  ([  "quest":  "����"]),
  ([  "quest":  "ҩ����"]),
  ([  "quest":  "��ҩ��"]),
  ([  "quest":  "[1;36m����ͼ��[2;37;0m"]),
  ([  "quest":  "[1;37m�쳤�Ʒ���[2;37;0m"]),
  ([  "quest":  "[1;33m����Ʒ���[2;37;0m"]),
  ([  "quest":  "��������"]),
  ([  "quest":  "������ƪ"]), 
  ([  "quest":  "��������"]),
  ([  "quest":  "��ɽ����"]),
  ([  "quest":  "̫��ȭ��"]),
  ([  "quest":  "�����ķ�"]),
  ([  "quest":  "���ǽ��ĵ�"]),
  ([  "quest":  "[1;37m����[2;37;0m"]),
  ([  "quest":  "���β���"]),
  ([  "quest":  "�����潣����"]),
  ([  "quest":  "��ɽ�����Ʒ�ͼ�ϲ�"]),
  ([  "quest":  "��ɽ�����Ʒ�ͼ�²�"]),
  ([  "quest":  "��ɽ��÷�ַ�ͼ�Ͼ�"]),
  ([  "quest":  "��ɽ��÷�ַ�ͼ�¾�"]),
  ([  "quest":  "����"]),
  ([  "quest":  "[1;36m���������[2;37;0m"]),
  ([  "quest":  "����"]),                   
//////////////////////
///add new///
  ([  "quest":  "�ƺ�"]),
  ([  "quest":  "�����"]),
  ([  "quest":  GRN"��ƿ"NOR]),
  ([  "quest":  HIR"��������"NOR]),
  ([  "quest":  HIC"���ϱ�ȹ��"NOR]),
  ([  "quest":  HIG"����"HIW"����"HIY"��"NOR]),
  ([  "quest":  HIR"������"NOR]),
  ([  "quest":  HIW"����"HIC"����"HIY"��"NOR]),
  ([  "quest":  HIC"��"HIW"����"NOR]),
  ([  "quest":  HIY"��Ƥ"NOR]),
  ([  "quest":  HIW"��ë��"NOR]),
  ([  "quest":  HIY"ͭ��"NOR]),
  ([  "quest":  HIY"�ŻƱ�"NOR]),
  ([  "quest":  HIC"����"HIR"��"HIY"��"NOR]),
  ([  "quest":  HIY"����"NOR]),
  ([  "quest":  "�м�����"]),
  ([  "quest":  HIM"�һ�"NOR]),
  ([  "quest":  "з�ư���"]),
  ([  "quest":  "��"]),
  ([  "quest":  "��䶹��"]),
  ([  "quest":  HIG"������"NOR]),
  ([  "quest":  "���޷�Ƭ"]),
  ([  "quest":  "����Һ"]),
  ([  "quest":  "�ɾ�"]),
  ([  "quest":  HIG "������" NOR]),
  ([  "quest":  "��ײ�"]),
  ([  "quest":  HIW "�ٺ�" NOR]),
  ([  "quest":  HIW"����ܰ"NOR]),
  ([  "quest":  MAG"ԧ����"NOR]),
  ([  "quest":  HIW "����" NOR]),
  ([  "quest":  HIY"��õ��"NOR]),
  ([  "quest":  "����"]),
  ([  "quest":  YEL"��Ƥ��ҩ"NOR]),
  ([  "quest":  "���Ǻ�«"]),
  ([  "quest":  "�廨��"]),
  ([  "quest":  HIY "������" NOR]),
  ([  "quest":  HIW "�׻�Ƥ��" NOR]),
  ([  "quest":  WHT "�ֲ���" NOR]),
  ([  "quest":  "�ڱ�"]),
  ([  "quest":  HIC "�����ְ�ʦ�ض���" NOR]),
  ([  "quest":  "С������"]),
  ([  "quest":  "������"]),
  ([  "quest":  "�˿���"]),
  ([  "quest":  YEL"�ջ���"NOR]),
  ([  "quest":  "����"]),
  ([  "quest":  "�޹Ǽ�"]),
  ([  "quest":  "������"]),
  ([  "quest":  "��Ƥȹ"]),
  ([  "quest":  "����"]),
  ([  "quest":  "��ˮ����"]),
  ([  "quest":  "����"]),

///////////////
  ([  "quest":  "����"]),                             
  ([  "quest":  "ʯ��"]),
  ([  "quest":  "����"]),
  ([  "quest":  "����Ƭ"]),
  ([  "quest":  "��ʯ��"]),
  ([  "quest":  "Ѫ����"]),
  ([  "quest":  "ʮ��ľż"]),                      
  ([  "quest":  "ʮ����ż"]),
  ([  "quest":  "��а����"]),
  ([  "quest":  "��ʫ����"]),
  ([  "quest":  "�Ʒ�����"]),
  ([  "quest":  "�ַ���Ҫ"]),
  ([  "quest":  "�ȷ�ͨ��"]),
  ([  "quest":  "��ɽ����"]),
  ([  "quest":  "����ǹ��"]),
  ([  "quest":  "��Ů����"]),
  ([  "quest":  "̫��ʮ����"]),
  ([  "quest":  "�׽��ѧƪ"]),
  ([  "quest":  "���ҵ��ײ�ƪ"]),
  ([  "quest":  "[1;36m��ʯƬ[2;37;0m"]),
  ([  "quest":  "Ⱥ����ͼ"]),
  ([  "quest":  "��������"]),
  ([  "quest":  "�嶾�澭"]),
  ([  "quest":  "������ƪ"]),
  ([  "quest":  "���־Ŵ�"]),
  ([  "quest":  "[1;36m��ѩ����[2;37;0m"]),
  ([  "quest":  "[1;37mѩɽ����[2;37;0m"]),
  ([  "quest":  "�׾�"]),
  ([  "quest":  "���������Ͼ���"]),
  ([  "quest":  "���������¾���"]),
  ([  "quest":  "���Ͼ�"]),
  ([  "quest":  "������"]),
  ([  "quest":  "��վ�"]),
  ([  "quest":  "������"]),
  ([  "quest":  "άĦ��"]),
  ([  "quest":  "������"]),
  ([  "quest":  "�����پ�"]),
  ([  "quest":  "������;�"]),                     
  ([  "quest":  "�����۶��ľ�"]), 
  ([  "quest":  "���ٵ���"]),
  ([  "quest":  "���¾����Ͼ���"]),
  ([  "quest":  "���¾����¾���"]),
  ([  "quest":  "�������澭���ϲ�"]),
  ([  "quest":  "�������澭���²�"]),
  ([  "quest":  "�����޶������ϲ᡽��"]),
  ([  "quest":  "�����޶������²᡽��"]),
  ([  "quest":  "�Ź�����ͼ��"]),
  ([  "quest":  "[1;33m�Ƶ��ھ�[2;37;0m"]),
  ([  "quest":  "[1;33m��˼��ǧ��[2;37;0m"]),
/*  ([  "quest":  "ɢ���Ʒ�"]),
  ([  "quest":  "�޺�ȭ��"]),
  ([  "quest":  "�����Ʒ�"]),
  ([  "quest":  "Τ���Ʒ�"]),
  ([  "quest":  "��צ����"]),
  ([  "quest":  "����צ��"]),
  ([  "quest":  "Ħڭָ��"]),
  ([  "quest":  "һָ����"]),
  ([  "quest":  "���޵���"]),
  ([  "quest":  "Τ�ӹ���"]),
  ([  "quest":  "�ն��ȷ�"]),
  ([  "quest":  "��ħ����"]),
  ([  "quest":  "�����ȷ�"]),
  ([  "quest":  "��������"]),
  ([  "quest":  "�������ַ�"]),
  ([  "quest":  "����ȭ��"]),
  ([  "quest":  "����ǧҶ���ַ�"]),
  ([  "quest":  "��Ӱ�������ȷ�"]),*/
  ([  "quest":  "[35m��ϼ��ܸ[2;37;0m"]),
  ([  "quest":  "�Ʋ�����"]),
  ([  "quest":  "��������"]),
  ([  "quest":  "�Ҳ��������"]),                  
  ([  "quest":  "�ײ��ڱ�����"]),
  ([  "quest":  "�಼�������"]),
  ([  "quest":  "��ߺڲ�����"]),
  ([  "quest":  "[30m��ɫ����[2;37;0m"]),    //xueshan                  
  ([  "quest":  "[35m��ɫ����[2;37;0m"]),    //xueshan
  ([  "quest":  "[1;36m��ɫ����[2;37;0m"]),  //xueshan  
  ([  "quest":  "[1;31m��ɫ����[2;37;0m"]),  //xueshan
  ([  "quest":  "[1;33m��ɫ����[2;37;0m"]),  //xueshan
  ([  "quest":  "Կ��"]),
  ([  "quest":  "����"]),
  ([  "quest":  "����"]),                               
  ([  "quest":  "��ݮ"]),
  ([  "quest":  "��Ƥ"]),
  ([  "quest":  "��"]),
  ([  "quest":  "ľ��"]),
  ([  "quest":  "����"]),
  ([  "quest":  "���ߵ�"]),
  ([  "quest":  "���ߵ�"]),
  ([  "quest":  "�ߵ���"]),
  ([  "quest":  "�廨Ь"]), 
  ([  "quest":  "��·����"]),
  ([  "quest":  "��ɫ����"]),                        
  ([  "quest":  "����"]), 
  ([  "quest":  "��Ƥ"]),
  ([  "quest":  "��Ҷ"]), 
  ([  "quest":  "����"]),
  ([  "quest":  "����"]),
  ([  "quest":  "���"]),
  ([  "quest":  "Ů����"]),
  ([  "quest":  "��Կ��"]),
  ([  "quest":  "�಼ɮ��"]), 
  ([  "quest":  "��ʷ����"]),        
  ([  "quest":  "����"]),                               
  ([  "quest":  "ҩ��"]),
  ([  "quest":  "�л���"]),
  ([  "quest":  "���۷�"]),
  ([  "quest":  "������"]),
  ([  "quest":  "������"]),
//  ([  "quest":  "��ɳ��"]), 
  ([  "quest":  "�η�Կ��"]), 
  ([  "quest":  "[32m����֦[2;37;0m"]),
  ([  "quest":  "[1;36m����ʯ[2;37;0m"]),
  ([  "quest":  "[1;37m��ʯͷ[2;37;0m"]),  
  ([  "quest":  "[1;36m������[2;37;0m"]),
  ([  "quest":  "��Ƥ"]),                               
  ([  "quest":  "����"]),
  ([  "quest":  "����"]),
  ([  "quest":  "Ͳȹ"]),
  ([  "quest":  "ë̺"]),
  ([  "quest":  "����"]),
  ([  "quest":  "����"]),
  ([  "quest":  "����"]),
  ([  "quest":  "�׳���"]),
  ([  "quest":  "��ɴ��"]),
  ([  "quest":  "����ѩ��"]),
  ([  "quest":  "���Ķ�ȹ"]),
  ([  "quest":  "��ɫ����"]),
  ([  "quest":  "���¾���"]),
  ([  "quest":  "���¾���"]),
  ([  "quest":  "̨�Ķ�ȹ"]),
  ([  "quest":  "̨��ͷ��"]),
  ([  "quest":  "���ĳ�ȹ"]),
  ([  "quest":  "���Ĵ���"]),
  ([  "quest":  "Բ��С��"]),
  ([  "quest":  "��������"]),
  ([  "quest":  "[1;37m����[2;37;0m"]),                
  ([  "quest":  "[1;31mɽ�軨[2;37;0m"]),
  ([  "quest":  "[1;31m����Ů[2;37;0m"]),
  ([  "quest":  "[1;32m�˱�ױ[2;37;0m"]),
  ([  "quest":  "[1;34m���ɹ���[2;37;0m"]),
  ([  "quest":  "[1;33m������[2;37;0m"]), 
  ([  "quest":  "[1;32mʮ��̫��[2;37;0m"]),
  ([  "quest":  "[1;31mʮ��ѧʿ[2;37;0m"]),
  ([  "quest":  "[1;31m��[37m��[2;37;0m"]),
  ([  "quest":  "[1;34m��[1;37m����[2;37;0m"]),
  ([  "quest":  "[1;31m��ױ[1;37m�ع�[2;37;0m"]),
  ([  "quest":  "[35m��[37m����[1;31m��[2;37;0m"]),
  ([  "quest":  "[1;37m��[1;32m��[1;31m��[2;37;0m"]),
  ([  "quest":  "[1;37mץ��[1;32m��[2;37;0m��[1;31m��[2;37;0m"]),
  ([  "quest":  "���"]),                   
  ([  "quest":  "������"]),                 
  ([  "quest":  "��������"]),
  ([  "quest":  "ܽ�ػ���"]),   //����
  ([  "quest":  "��֭��ź"]),   //����
  ([  "quest":  "��ˮ��«"]),
  ([  "quest":  "[37m��ɫ����[2;37;0m"]),
  ([  "quest":  "�˵�"]),                               
  ([  "quest":  "����"]), 
  ([  "quest":  "[1;37mʯ��[2;37;0m"]),
  ([  "quest":  "[32mС��֦[2;37;0m"]),
  ([  "quest":  "[1;37m�׺ϻ�[2;37;0m"]),              
  ([  "quest":  "[1;31mɯ须�[2;37;0m"]),
  ([  "quest":  "[1;34mޥ����[2;37;0m"]),
  ([  "quest":  "[1;36m������[2;37;0m"]),
  ([  "quest":  "[1;33m����ͭ��[2;37;0m"]),
  ([  "quest":  "�˳�"]),                                
  ([  "quest":  "����"]),                              
  ([  "quest":  "�����ⵣ"]),
  ([  "quest":  "��ֽ����"]),
  ([  "quest":  "[1;32m�಼��[2;37;0m"]),
  ([  "quest":  "[1;31m��籰�[2;37;0m"]),
  ([  "quest":  "��佬"]),                               
  ([  "quest":  "�����"]),
  ([  "quest":  "�佬ƿ"]),  
  ([  "quest":  "[1;32m���̽�[2;37;0m"]),              
  ([  "quest":  "[1;37m���߸�[2;37;0m"]),
  ([  "quest":  "[1;34m�ڹ��[2;37;0m"]),
  ([  "quest":  "�Ͻ�"]),                            
  ([  "quest":  "����"]),
  ([  "quest":  "��ͭ��"]),
  ([  "quest":  "�ϳ���"]),
  ([  "quest":  "����Կ��"]),
  ([  "quest":  "����������"]),
  ([  "quest":  "�׻�������"]),
  ([  "quest":  "����������"]),
  ([  "quest":  "������Ƥ��"]),   
  ([  "quest":  "ҹ�в���"]),                            
  ([  "quest":  "[1;31m�첼[2;37;0m"]),                
  ([  "quest":  "[1;37m�ײ�[2;37;0m"]),
  ([  "quest":  "[1;31m�첼С��[2;37;0m"]),
  ([  "quest":  "[1;37m�ײ�С��[2;37;0m"]),
  ([  "quest":  "[1;33m�Ʋ�С��[2;37;0m"]),
  ([  "quest":  "����"]), 
  ([  "quest":  "��ɫ����"]),                           
  ([  "quest":  "���޳���"]),                                  
  ([  "quest":  "[1;32m����[2;37;0m"]),
  ([  "quest":  "[1;36m����[2;37;0m"]), 
  ([  "quest":  "��ͷ"]),
  ([  "quest":  "��ˮ��"]),
  ([  "quest":  "���ɲ�"]), 
  ([  "quest":  "ɥ�Ÿ�"]), 
  ([  "quest":  "�಼��"]),  
  ([  "quest":  "ҹ��ˮ��"]),
  ([  "quest":  "�𲼳���"]),
  ([  "quest":  "[1;36m�йٱ�[2;37;0m"]),
  ([  "quest":  "����"]),
  ([  "quest":  "��ֽ"]),                                
  ([  "quest":  "������"]),
  ([  "quest":  "[35m����[2;37;0m"]),
  ([  "quest":  "[33m���׷�[2;37;0m"]),
  ([  "quest":  "[36m��Ȫ��[2;37;0m"]), 
  ([  "quest":  "[1;32m��ˮ��[2;37;0m"]),
  ([  "quest":  "���"]),                                   
  ([  "quest":  "����"]),
  ([  "quest":  "�ɵ�"]),        
  ([  "quest":  "����"]),                 
  ([  "quest":  "��ţ��"]),
  ([  "quest":  "[1;32m����[2;37;0m"]),          
  ([  "quest":  "[1;33m����[2;37;0m"]),
  ([  "quest":  "[1;36m�̽�[2;37;0m"]),
  ([  "quest":  "[1;33m�ۻ���[2;37;0m"]),
  ([  "quest":  "[32m��������[2;37;0m"]),
  ([  "quest":  "[33m��ʫѡ��[2;37;0m"]),
  ([  "quest":  "[1;33m��Ѯ��[2;37;0m"]),
  ([  "quest":  "[1;32m��ˮ�̲�[2;37;0m"]),                
  ([  "quest":  "����֮��"]),                           
  ([  "quest":  "ҹ����"]),
  ([  "quest":  "[1;36m��������[2;37;0m"]),                 
  ([  "quest":  "����"]),                               
  ([  "quest":  "С����"]),
  ([  "quest":  "������"]),
  ([  "quest":  "[33m����׶[2;37;0m"]),  
  ([  "quest":  "С����"]), 
  ([  "quest":  "[30m������[2;37;0m"]),
  ([  "quest":  "[1;33m������[2;37;0m"]),
  ([  "quest":  "[1;33m��ʯͷ[2;37;0m"]),
  ([  "quest":  "[1;37m�׻���[2;37;0m"]),
  ([  "quest":  "[1;33m������[2;37;0m"]),                 
  ([  "quest":  "[1;32m�����޻�[2;37;0m"]),
  ([  "quest":  "[1;33m����ɫ����[2;37;0m"]),
  ([  "quest":  "[37m�ڱ߰�ɫ����[2;37;0m"]),
  ([  "quest":  "[34m�ױ���ɫ����[2;37;0m"]),
  ([  "quest":  "[33m�ױ߻�ɫ����[2;37;0m"]),
  ([  "quest":  "[1;36m�ױ���ɫ����[2;37;0m"]),
  ([  "quest":  "����"]),                               
  ([  "quest":  "��÷��"]),
  ([  "quest":  "�����ܵ���"]),
  ([  "quest":  "��ѩ����"]),  
  ([  "quest":  "����"]),
  ([  "quest":  "[1;31m����Ѫ[2;37;0m"]),
  ([  "quest":  "[1;37m������[2;37;0m"]),
  ([  "quest":  "����"]),                             
  ([  "quest":  "���Ǻ컨"]),                         
  ([  "quest":  "÷������"]),
  ([  "quest":  "��ɫ����"]), 
  ([  "quest":  "��÷����"]),
  ([  "quest":  "�����йٱ�"]),
  ([  "quest":  "[30m��ľ��[2;37;0m"]),
  ([  "quest":  "[1;37m��������[2;37;0m"]),
  ([  "quest":  "[1;31m����Կ��[2;37;0m"]),        
  ([  "quest":  "ʬ��"]),                               
  ([  "quest":  "��«"]),
  ([  "quest":  "ľ��"]),
  ([  "quest":  "������"]),
  ([  "quest":  "�ײ�����"]), 
  ([  "quest":  "[1;36mɮЬ[2;37;0m"]), 
  ([  "quest":  "����ͷ��"]),                           
  ([  "quest":  "[33m��[2;37;0m"]),
  ([  "quest":  "[33m�ƾ�̳��[2;37;0m"]),                     
  ([  "quest":  "��ˮ��"]), 
  ([  "quest":  "����Բ"]), 
  ([  "quest":  "�಼����"]),
  ([  "quest":  "������"]),                             
  ([  "quest":  "��ɫ����"]),                            
  ([  "quest":  "[33m����[2;37;0m"]),                 
  ([  "quest":  "[1;37mûҩ[2;37;0m"]),
  ([  "quest":  "[1;33m����[2;37;0m"]),
  ([  "quest":  "����"]),                              
  ([  "quest":  "ľ���"]), 
  ([  "quest":  "[1;33mС��֦[2;37;0m"]),                       
  ([  "quest":  "ͷ��"]),                                
  ([  "quest":  "��ͷ"]),
  ([  "quest":  "��ì"]), 
  ([  "quest":  "����"]), 
  ([  "quest":  "������ǹ"]),
  ([  "quest":  "����"]),                                 
  ([  "quest":  "����"]),
  ([  "quest":  "����"]),
  ([  "quest":  "�׷�"]),
  ([  "quest":  "ʯ��"]),
  ([  "quest":  "��ľ��"]),
  ([  "quest":  "������"]),
  ([  "quest":  "�һ���"]),
  ([  "quest":  "���ɲ�"]),
  ([  "quest":  "���򻨲�"]),   
  ([  "quest":  "�������"]),
  ([  "quest":  "[35m������[2;37;0m"]),
  ([  "quest":  "��ƿ"]),                               
  ([  "quest":  "���׷�"]),                           
  ([  "quest":  "����ţ��"]),
  ([  "quest":  "[30m����[2;37;0m"]),
  ([  "quest":  "[1;36m����[2;37;0m"]), 
  ([  "quest":  "[1;34m����[2;37;0m"]),
  ([  "quest":  "[1;33mƬƤ����[2;37;0m"]),
  ([  "quest":  "�պ������"]),                          
  ([  "quest":  "�廨Ь"]),
//  ([  "quest":  "[1;36m����[2;37;0m"]),  
  ([  "quest":  "���"]),                              
  ([  "quest":  "ˮ����"]),
  ([  "quest":  "�ִŴ���"]),                             
  ([  "quest":  "��ɫ����"]),
  ([  "quest":  "��ɫ����"]),                           
//wudujiao (ȥ��"����"��"����"��"����"��"ͭ��"��"��"��"�ⶾ��"��"���߶�Һ")
  ([  "quest":  "��¨"]),                               
  ([  "quest":  "����"]),                               
  ([  "quest":  "����"]),                               
  ([  "quest":  "���߶�Һ"]),                               
  ([  "quest":  "�ɲ�"]),
  ([  "quest":  "�ֹ�"]),
  ([  "quest":  "����"]),
  ([  "quest":  "�嶾��"]),
  ([  "quest":  "������"]),
  ([  "quest":  "Ұ����"]),
  ([  "quest":  "���̴�"]),
  ([  "quest":  "���ߴ�"]),
  ([  "quest":  "�߶���"]),
  ([  "quest":  "Ы�Ӷ���"]),
  ([  "quest":  "֩�붾��"]),
  ([  "quest":  "��򼶾��"]),
  ([  "quest":  "��ܶ���"]), 
  ([  "quest":  "����֮��"]),
  ([  "quest":  "���Ჷ��"]),
  ([  "quest":  "ȱ�ڵ��໨����"]),
  ([  "quest":  "[1;36m������[2;37;0m"]),             

//wuliang (��������ɽһ��) (ȥ��"ç�����")

  ([  "quest":  "ҩ��"]),                                
  ([  "quest":  "С����"]),
  ([  "quest":  "[1;32mͨ���[2;37;0m"]),
                                                    
//xiakedao (ȥ��"����"��"����"��"Ҭ��"��"â��"��"���Ĳ�"��"����ͭ��"��"����ͭ��"��"���Ʒ�����")

//        ([  "quest":  "ʯ��"]),                                
  ([  "quest":  "��ͷ"]),
  ([  "quest":  "����"]), 
  ([  "quest":  "����"]), 
  ([  "quest":  "������"]),                          
  ([  "quest":  "�׺罣"]),
  ([  "quest":  "���Ʒ���"]),
  ([  "quest":  "[1;36m�����̻��[2;37;0m"]),          
  ([  "quest":  "�ڲ���"]),

//xiangyang
  
//  ([  "quest":  "�ɹ��䵶"]),
  ([  "quest":  "[1;31m�����׷�[2;37;0m"]),
  ([  "quest":  "[1;32mҰ������[2;37;0m"]),
                          
//xiaoyao

  ([  "quest":  "[1;31m��������[2;37;0m"]),         
  ([  "quest":  "[1;32m��������[2;37;0m"]),
  
//xingxiu (�������޺�һ��)

  ([  "quest":  "ͭ��"]),                                
  ([  "quest":  "ͭ��"]),
  ([  "quest":  "ͭ��"]),
  ([  "quest":  "���"]), 
  ([  "quest":  "����"]), 
  ([  "quest":  "����"]),
  ([  "quest":  "�ɺ�ҩ"]), 
  ([  "quest":  "����ɢ"]),
  ([  "quest":  "Сë¿"]),
  ([  "quest":  "[1;32m���«[2;37;0m"]),
  ([  "quest":  "��ɽѩ��"]),
  ([  "quest":  "[1;37m�׺���[2;37;0m"]),
  ([  "quest":  "[1;32m���ĵ�[2;37;0m"]),
  ([  "quest":  "[32m��ɽ����[2;37;0m"]),

//xuedao 
  ([  "quest":  "������"]),
  
//xueshan   
  ([  "quest":  "����"]),                               
  ([  "quest":  "ľ��"]), 
  ([  "quest":  "ɮ��"]),
  ([  "quest":  "[1;37m����[2;37;0m"]),
  ([  "quest":  "[1;31mɮñ[2;37;0m"]),
  ([  "quest":  "[1;31mѪ��[2;37;0m"]),
  ([  "quest":  "[1;33m����[2;37;0m"]),

//yanziwu(ȥ��"���������"��"���̳���")

  ([  "quest":  HIG"���̳���"NOR]),
  ([  "quest":  "[1;37m�ۺ�[2;37;0m"]),
  ([  "quest":  "[1;37mѩ��[2;37;0m"]),
  ([  "quest":  "[1;31mõ�廨¶[2;37;0m"]),
  ([  "quest":  "[1;37m����¶[2;37;0m"]),
  ([  "quest":  "[1;33m��÷��¶[2;37;0m"]),
  ([  "quest":  "����"]),
});
mapping *quest3 = ({
//hard
/// ��һЩ
  ([  "quest":  "�޷��ܾ�"]),
  ([  "quest":  "����ͨ��"]),
  ([  "quest":  "��������"]),                           
  ([  "quest":  "���Է�"]),
  ([  "quest":  "���з�"]),
  ([  "quest":  "[33mϴ�辭[2;37;0m"]),
  ([  "quest":  "[1;33m������[2;37;0m"]),
  ([  "quest":  "���콣"]),
  ([  "quest":  "�����"]), 
  ([  "quest":  "�������Ź�"]),
  ([  "quest":  "�������Ź�"]),
  ([  "quest":  "����������"]),
  ([  "quest":  "�߾�"]),
  ([  "quest":  "[1;31m���˿ȹ[2;37;0m"]),           
  ([  "quest":  "��ɳ��Ӱ"]),
  ([  "quest":  "[1;33m���ڵ���[2;37;0m"]),
  ([  "quest":  "[1;36m����ţҽ��[2;37;0m"]),
  ([  "quest":  "[1;36m���ѹö���[2;37;0m"]),
  ([  "quest":  "����ɨҶ�ȷ�"]),
  ([  "quest":  "[1;35m��Ů�ľ��²�[2;37;0m"]),
  ([  "quest":  "��Ƥ"]),
  ([  "quest":  "[33m���߽�[2;37;0m"]),                
  ([  "quest":  "[1;32m������[2;37;0m"]),         
  ([  "quest":  "��Ц��ңɢ"]),
  ([  "quest":  "ľ�㴸"]), 
  ([  "quest":  "�μҸ���"]),
  ([  "quest":  "[1;37m������[2;37;0m"]),                       
  ([  "quest":  "[1;36m������[2;37;0m"]),
//  ([  "quest":  "[1;33m�������澭��[2;37;0m"]),
//��һ����
  ([  "quest":  "[1;36m����ͼ��[2;37;0m"]),
  ([  "quest":  "[1;36m�����项[2;37;0m"]),
  ([  "quest":  "[1;33m���׾�����ƪ��[2;37;0m"]),
  ([  "quest":  "[1;33m���׾�˵��ƪ��[2;37;0m"]),
  ([  "quest":  "[1;33m���׾�����ƪ��[2;37;0m"]),
  ([  "quest":  "[1;33m���׾�ϵ��ƪ��[2;37;0m"]),
  ([  "quest":  "�����ľ�"]),
  ([  "quest":  "������ʽ�ַ�"]),
  ([  "quest":  "��������"]),
  ([  "quest":  "ɺ���ײ�"]),
  ([  "quest":  "[1;34m��ʯ[2;37;0m"]),                         
  ([  "quest":  "��Ƥ��"]),
  ([  "quest":  "����ʮ����"]), 
  ([  "quest":  "����"]),       //��ɽ
  ([  "quest":  "���˷���"]),                          
  ([  "quest":  "��������"]), //��ɽ  
  ([  "quest":  "����ײ�"]),   //��ɽ
  ([  "quest":  "����ݩ��"]),   //����
  ([  "quest":  "��˿ɽҩ"]),   //����
  ([  "quest":  "[1;36m��׶[2;37;0m"]),   
  ([  "quest":  "[1;36m�׹���[2;37;0m"]), 
  ([  "quest":  "[1;33m��٢����ͼ[2;37;0m"]),
  ([  "quest":  "[1;33m���������[2;37;0m"]),
  ([  "quest":  "[1;33m������ľ�[2;37;0m"]),
  ([  "quest":  "������"]),
//  ([  "quest":  "[32m����[2;37;0m"]),
//  ([  "quest":  "[1;33m�׷�[2;37;0m"]),
  ([  "quest":  "���¾�����һ�¡�"]),
  ([  "quest":  "���¾����ڶ��¡�"]),
  ([  "quest":  "���¾����ڰ��¡�"]),
  ([  "quest":  "���¾�����ʮ���¡�"]),
  ([  "quest":  "���¾�����ʮ���¡�"]),
  ([  "quest":  "���¾�����ʮ���¡�"]),
  ([  "quest":  "[1;31m������[2;37;0m"]),
  ([  "quest":  "[1;35m�������[2;37;0m"]),
  ([  "quest":  "[1;35m��뵴���[2;37;0m"]),
  ([  "quest":  "[1;35m�������[2;37;0m"]),
  ([  "quest":  "�������澭����һ��"]),
  ([  "quest":  "�������澭���ڶ���"]),
  ([  "quest":  "�������澭��������"]),
  ([  "quest":  "�������澭�����ľ�"]),
  ([  "quest":  "ǧ����"]),
  ([  "quest":  "������"]),
  ([  "quest":  "������"]),
  ([  "quest":  "ȭ���ܾ�"]),
  ([  "quest":  "�Ͳ���"]),
  ([  "quest":  "���黨"]),    
  ([  "quest":  "�����Ϻ�ɢ"]),
  ([  "quest":  "������"]), 
  ([  "quest":  "�����"]),          
  ([  "quest":  "������"]), 
  ([  "quest":  "[1;36m�����[2;37;0m"]),
  ([  "quest":  "[1;32m���㻨[2;37;0m"]),   
  ([  "quest":  "��䶤"]), 

});

mapping query_quest(string arg)
{
  if (arg=="easy_quest")
        return quest1[random(sizeof(quest1))];
  if (arg=="hard_quest")
        return quest3[random(sizeof(quest3))];
  if (!arg || arg=="normal_quest")
        return quest2[random(sizeof(quest2))];
}
