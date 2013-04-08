<?php

$pincode_arr = array();
  $pincode_arr = array(
    'key' => '1fddc6bbd390dc1ff95eaf0261d2fa94',
    'zip' => 210301,
  );
  //print_r(serialize($pincode_arr));die;
  $pincode_status = file_get_contents('http://localhost/pc/pcv.php?p=' . serialize($pincode_arr)); 
  $final_pincode = unserialize($pincode_status);
  //return $final_pincode['status'];
  print_r($final_pincode['status']);
  
  ?>