<?php
$z[0]=Array("top","\r\n  <m:item name='网站栏目管理' link='catalog_main.php' ischannel='1' addalt='创建栏目' linkadd='catalog_add.php?listtype=all' rank='t_List,t_AccList' target='main' />\r\n  <m:item name='所有档案列表' link='content_list.php' rank='a_List,a_AccList' target='main' />\r\n  <m:item name='等审核的档案' link='content_list.php?arcrank=-1' rank='a_Check,a_AccCheck' target='main' />\r\n  <m:item name='我发布的文档' link='content_list.php?mid=1' rank='a_List,a_AccList,a_MyList' target='main' />\r\n  <m:item name='评论管理' link='feedback_main.php' rank='sys_Feedback' target='main' />\r\n  <m:item name='内容回收站' link='recycling.php' ischannel='1' addalt='清空回收站' addico='images/gtk-del.png' linkadd='archives_do.php?dopost=clear&aid=no&recycle=1' rank='a_List,a_AccList,a_MyList' target='main' />\r\n",53,902);
$z[0][4]['item']="1_";
$z[0][4]['name']="常用操作";
$z[0][4]['display']="block";
$z[1]=Array("top","\r\n  <m:item name='更新主页HTML' link='makehtml_homepage.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新栏目HTML' link='makehtml_list.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新文档HTML' link='makehtml_archives.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新网站地图' link='makehtml_map_guide.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新RSS文件' link='makehtml_rss.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='获取JS文件' link='makehtml_js.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新专题HTML' link='makehtml_spec.php' rank='sys_MakeHtml' target='main' />\r\n",904,1655);
$z[1][4]['item']="5_";
$z[1][4]['name']="HTML更新";
$z[1][4]['notshowall']="1";
$z[1][4]['display']="none";
$z[1][4]['rank']="sys_MakeHtml";
$z[2]=Array("top","\r\n  <m:item name='内容模型管理' link='mychannel_main.php' rank='c_List' target='main' />\r\n  <m:item name='自定义表单' link='diy_main.php' rank='c_List' target='main' />\r\n",1661,1928);
$z[2][4]['item']="1_";
$z[2][4]['name']="频道模型";
$z[2][4]['display']="block";
$z[2][4]['rank']="t_List,t_AccList,c_List,temp_One";
$z[3]=Array("top","\r\n  <m:item name='一键更新网站' link='makehtml_all.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新系统缓存' link='sys_cache_up.php' rank='sys_ArcBatch' target='main' />\r\n  \r\n",1934,2217);
$z[3][4]['item']="5_";
$z[3][4]['name']="自动任务";
$z[3][4]['notshowall']="1";
$z[3][4]['display']="block";
$z[3][4]['rank']="sys_MakeHtml";
$z[4]=Array("top","\r\n  <m:item name='默认模板管理' link='templets_main.php' rank='temp_All' target='main'/>\r\n  <m:item name='标签源码管理' link='templets_tagsource.php' rank='temp_All' target='main'/>\r\n  <m:item name='自定义宏标记' link='mytag_main.php' rank='temp_MyTag' target='main'/>\r\n  <m:item name='智能标记向导' link='mytag_tag_guide.php' rank='temp_Other' target='main'/>\r\n  <m:item name='全局标记测试' link='tag_test.php' rank='temp_Test' target='main'/>\r\n",2225,2784);
$z[4][4]['item']="7_";
$z[4][4]['name']="模板管理";
$z[4][4]['display']="none";
$z[4][4]['rank']="temp_One,temp_Other,temp_MyTag,temp_test,temp_All";
$z[5]=Array("top","\r\n  <m:item name='系统基本参数' link='sys_info.php' rank='sys_Edit' target='main' />\r\n  <m:item name='系统用户管理' link='sys_admin_user.php' rank='sys_User' target='main' />\r\n  <m:item name='用户组设定' link='sys_group.php' rank='sys_Group' target='main' />\r\n  <m:item name='验证安全设置' link='sys_safe.php' rank='sys_verify' target='main' />\r\n  <m:item name='图片水印设置' link='sys_info_mark.php' rank='sys_Edit' target='main' />\r\n  <m:item name='数据库备份/还原' link='sys_data.php' rank='sys_Data' target='main' />\r\n  <m:item name='SQL命令行工具' link='sys_sql_query.php' rank='sys_Data' target='main' />\r\n  <m:item name='文件校验[S]' link='sys_verifies.php' rank='sys_verify' target='main' />\r\n  <m:item name='病毒扫描[S]' link='sys_safetest.php' rank='sys_verify' target='main' />\r\n  <m:item name='系统错误修复[S]' link='sys_repair.php' rank='sys_verify' target='main' />\r\n",2788,3778);
$z[5][4]['item']="10_";
$z[5][4]['name']="系统设置";
$z[5][4]['display']="none";
$z[5][4]['rank']="sys_User,sys_Group,sys_Edit,sys_Log,sys_Data";

?>