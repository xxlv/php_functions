<?php
/*
 * array_map的php实现
 */
function x_array_map($callback,$arr){

	if (!function_exists($callback)) die('function not found !');
	if (!is_array($arr)) 		 die('should give array');
	
	$new_array=[];

	foreach($arr as $k =>$v){
		$new_array[$k]=$callback($v);
	}
	
	return $new_array;
}

//demo 
$arr=[1,2,3,4,5];

function testFunc($v){
	return '<'.$v." > ";
}

$res=array_map('testFunc', $arr);
var_dump($res);
$res=x_array_map("testFunc",$arr);
var_dump($res);




