<?php
/**
 *
 * 关于文章权限设置的说明
 * 文章权限设置限制形式如下：
 * 如果指定了会员等级，那么必须到达这个等级才能浏览
 * 如果指定了金币，浏览时会扣指点的点数，并保存记录到用户业务记录中
 * 如果两者同时指定，那么必须同时满足两个条件
 *
 * @version        $Id: view.php 1 15:38 2010年7月8日Z tianya $
 * @package        DedeCMS.Site
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
require_once(dirname(__FILE__)."/../include/common.inc.php");
require_once(DEDEINC.'/arc.archives.class.php');

$t1 = ExecTime();

if(empty($okview)) $okview = '';
if(isset($arcID)) $aid = $arcID;
if(!isset($dopost)) $dopost = '';

$arcID = $aid = (isset($aid) && is_numeric($aid)) ? $aid : 0;
if($aid==0) die(" Request Error! ");

$arc = new Archives($aid);
if($arc->IsError) ParamError();

$arc->Display();