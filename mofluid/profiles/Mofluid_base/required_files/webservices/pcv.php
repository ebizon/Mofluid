<?php
$valid_pin_codes = array(
'key' => '1fddc6bbd390dc1ff95eaf0261d2fa94',
'zip' => array('721302','210301'),
);
$pin_code = $_GET['p'];
/*if(!(in_array($pin_code,$valid_pin_codes))){
	print '0';
}else print '1';*/
$pin_code_array = unserialize($pin_code);
// print_r($letsee);die;

if(!(in_array($pin_code_array['zip'],$valid_pin_codes['zip'])) || $pin_code_array['key'] != $valid_pin_codes['key']){
	$valid = array('status' => 'false');
}else $valid = array('status' => 'true');
$output = serialize($valid);
print_r($output);
?>