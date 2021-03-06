<?php
/**
 * 菜单地图
 *
 * @version        $Id: inc_menu_map.php 1 10:32 2010年7月21日Z tianya $
 * @package        DedeCMS.Administrator
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
require_once(dirname(__FILE__)."/../config.php");

$maparray = array(1=>'文档相关',2=>'系统设置',3=>'必须辅助功能',6=>'基本模块插件');

//载入可发布频道
$addset = '';

//检测可用的内容模型
if($cfg_admin_channel = 'array' && count($admin_catalogs) > 0)
{
    $admin_catalog = join(',', $admin_catalogs);
    $dsql->SetQuery(" SELECT channeltype FROM `#@__arctype` WHERE id IN({$admin_catalog}) GROUP BY channeltype ");
}
else
{
    $dsql->SetQuery(" SELECT channeltype FROM `#@__arctype` GROUP BY channeltype ");
}
$dsql->Execute();
$candoChannel = '';
while($row = $dsql->GetObject())
{
    $candoChannel .= ($candoChannel=='' ? $row->channeltype : ','.$row->channeltype);
}
if(empty($candoChannel)) $candoChannel = 1;
$dsql->SetQuery("SELECT id,typename,addcon,mancon FROM `#@__channeltype` WHERE id IN({$candoChannel}) AND id<>-1 AND isshow=1 ORDER BY id ASC");
$dsql->Execute();
while($row = $dsql->GetObject())
{
    $addset .= "  <m:item name='{$row->typename}' ischannel='1' link='{$row->mancon}?channelid={$row->id}' linkadd='{$row->addcon}?channelid={$row->id}' channelid='{$row->id}' rank='' target='main' />\r\n";
}
//////////////////////////
$menusMain = "
-----------------------------------------------

<m:top mapitem='1' item='1_' name='内容管理' display='block'>
  $addset
  <m:item name='专题管理' ischannel='1' link='content_s_list.php' linkadd='spec_add.php' channelid='-1' rank='spec_New' target='main' />
</m:top>

<m:top mapitem='1' item='1_' name='频道模型' display='block' rank='t_List,t_AccList,c_List,temp_One'>
  <m:item name='内容模型管理' link='mychannel_main.php' rank='c_List' target='main' />
  <m:item name='自定义表单' link='diy_main.php' rank='c_List' target='main' />
</m:top>

<m:top mapitem='3' item='1_3_3' name='批量维护' display='block'>
  <m:item name='更新系统缓存' link='sys_cache_up.php' rank='sys_ArcBatch' target='main' />
  <m:item name='文档关键词维护' link='article_keywords_main.php' rank='sys_Keyword' target='main' />
  <m:item name='数据库内容替换' link='sys_data_replace.php' rank='sys_ArcBatch' target='main' />
</m:top>

<m:top mapitem='1' item='1_' name='自动任务' notshowall='1'  display='block' rank='sys_MakeHtml'>
  <m:item name='一键更新网站' link='makehtml_all.php' rank='sys_MakeHtml' target='main' />
  <m:item name='更新系统缓存' link='sys_cache_up.php' rank='sys_ArcBatch' target='main' />
</m:top>

<m:top mapitem='3' item='1_6_' name='附件管理' display='none' rank='sys_Upload,sys_MyUpload,plus_文件管理器'>
  <m:item name='文件式管理器' link='media_main.php?dopost=filemanager' rank='plus_文件管理器' target='main' />
</m:top>

<m:top mapitem='2' item='10_' name='系统设置' display='none' rank='sys_User,sys_Group,sys_Edit,sys_Log,sys_Data'>
  <m:item name='验证安全设置' link='sys_safe.php' rank='sys_verify' target='main' />
  <m:item name='SQL命令行工具' link='sys_sql_query.php' rank='sys_Data' target='main' />
  <m:item name='文件校验[S]' link='sys_verifies.php' rank='sys_verify' target='main' />
  <m:item name='病毒扫描[S]' link='sys_safetest.php' rank='sys_verify' target='main' />
  <m:item name='系统错误修复[S]' link='sys_repair.php' rank='sys_verify' target='main' />
</m:top>

<m:top mapitem='2' item='10_7_' name='模板管理' display='none' rank='temp_One,temp_Other,temp_MyTag,temp_test,temp_All'>
  <m:item name='默认模板管理' link='templets_main.php' rank='temp_All' target='main'/>
</m:top>

";

//载入插件菜单
$plusset = '';
$dsql->SetQuery("SELECT * FROM `#@__plus` WHERE isshow=1 ORDER BY aid ASC");
$dsql->Execute();
while($row = $dsql->GetObject()) 
{
    $plusset .= $row->menustring."\r\n";
}

$menusMain .= "
<m:top mapitem='6' name='模块管理' c='6,' display='block'>
  <m:item name='模块管理' link='module_main.php' rank='sys_module' target='main' />
  <m:item name='上传新模块' link='module_upload.php' rank='sys_module' target='main' />
  <m:item name='模块生成向导' link='module_make.php' rank='sys_module' target='main' />
</m:top>

<m:top mapitem='6' item='7' name='辅助插件' display='block'>
  <m:item name='插件管理器' link='plus_main.php' rank='10' target='main' />
  $plusset
</m:top>
";

$mapstring = '';
$dtp = new DedeTagparse();
$dtp->SetNameSpace('m','<','>');
$dtp->LoadString($menusMain);

foreach($maparray as $k=>$bigname)
{
    $mapstring .= "<dl class='maptop'>\r\n";
    $mapstring .= "<dt class='bigitem'>$bigname</dt>\r\n";
    $mapstring .= "<dd>\r\n";
    foreach($dtp->CTags as $ctag)
    {
        if($ctag->GetAtt('mapitem') == $k)
        {
            $mapstring .= "<dl class='mapitem'>\r\n";
            $mapstring .= "<dt>".$ctag->GetAtt('name')."</dt>\r\n";
            $mapstring .= "<dd>\r\n<ul class='item'>\r\n";
            $dtp2 = new DedeTagParse();
            $dtp2->SetNameSpace('m', '<', '>');
            $dtp2->LoadSource($ctag->InnerText);
            foreach($dtp2->CTags as $j=>$ctag2)
            {
                $mapstring .= "<li><a href='".$ctag2->GetAtt('link')."' target='".$ctag2->GetAtt('target')."'>".$ctag2->GetAtt('name')."</a></li>\r\n";
            }
            $mapstring .= "</ul>\r\n</dd>\r\n</dl>\r\n";
        }
    }
    $mapstring .= "</dd>\r\n</dl>\r\n";
}