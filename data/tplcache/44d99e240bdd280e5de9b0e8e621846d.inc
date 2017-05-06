
-----------------------------------------------

<m:top mapitem='1' item='1_' name='内容管理' display='block'>
    <m:item name='普通文章' ischannel='1' link='content_list.php?channelid=1' linkadd='article_add.php?channelid=1' channelid='1' rank='' target='main' />

  <m:item name='专题管理' ischannel='1' link='content_s_list.php' linkadd='spec_add.php' channelid='-1' rank='spec_New' target='main' />
</m:top>

<m:top mapitem='1' item='1_' name='频道模型' display='block' rank='t_List,t_AccList,c_List,temp_One'>
  <m:item name='内容模型管理' link='mychannel_main.php' rank='c_List' target='main' />
  <m:item name='自定义表单' link='diy_main.php' rank='c_List' target='main' />
</m:top>

<m:top mapitem='3' item='1_3_3' name='批量维护' display='block'>
  <m:item name='更新系统缓存' link='sys_cache_up.php' rank='sys_ArcBatch' target='main' />
  <m:item name='文档批量维护' link='content_batch_up.php' rank='sys_ArcBatch' target='main' />
  <m:item name='搜索关键词维护' link='search_keywords_main.php' rank='sys_Keyword' target='main' />
  <m:item name='文档关键词维护' link='article_keywords_main.php' rank='sys_Keyword' target='main' />
  <m:item name='自动摘要|分页' link='article_description_main.php' rank='sys_Keyword' target='main' />
  <m:item name='TAG标签管理' link='tags_main.php' rank='sys_Keyword' target='main' />
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
  <m:item name='系统基本参数' link='sys_info.php' rank='sys_Edit' target='main' />
  <m:item name='系统用户管理' link='sys_admin_user.php' rank='sys_User' target='main' />
  <m:item name='用户组设定' link='sys_group.php' rank='sys_Group' target='main' />
  <m:item name='验证安全设置' link='sys_safe.php' rank='sys_verify' target='main' />
  <m:item name='图片水印设置' link='sys_info_mark.php' rank='sys_Edit' target='main' />
  <m:item name='数据库备份/还原' link='sys_data.php' rank='sys_Data' target='main' />
  <m:item name='SQL命令行工具' link='sys_sql_query.php' rank='sys_Data' target='main' />
  <m:item name='文件校验[S]' link='sys_verifies.php' rank='sys_verify' target='main' />
  <m:item name='病毒扫描[S]' link='sys_safetest.php' rank='sys_verify' target='main' />
  <m:item name='系统错误修复[S]' link='sys_repair.php' rank='sys_verify' target='main' />
</m:top>

<m:top mapitem='2' item='10_7_' name='模板管理' display='none' rank='temp_One,temp_Other,temp_MyTag,temp_test,temp_All'>
  <m:item name='默认模板管理' link='templets_main.php' rank='temp_All' target='main'/>
</m:top>


<m:top mapitem='6' name='模块管理' c='6,' display='block'>
  <m:item name='模块管理' link='module_main.php' rank='sys_module' target='main' />
  <m:item name='上传新模块' link='module_upload.php' rank='sys_module' target='main' />
  <m:item name='模块生成向导' link='module_make.php' rank='sys_module' target='main' />
</m:top>

<m:top mapitem='6' item='7' name='辅助插件' display='block'>
  <m:item name='插件管理器' link='plus_main.php' rank='10' target='main' />
  <m:item name='挑错管理' link='erraddsave.php' rank='plus_挑错管理' target='main' />
<m:item name='百度新闻' link='baidunews.php' rank='plus_百度新闻' target='main' />
<m:item name='文件管理器' link='file_manage_main.php' rank='plus_文件管理器' target='main' />
<m:item name='广告管理' link='ad_main.php' rank='plus_广告管理' target='main' />
<m:item name='友情链接' link='friendlink_main.php' rank='plus_友情链接' target='main' />

</m:top>
