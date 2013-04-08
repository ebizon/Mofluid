<?php 
header('X-Frame-Options: GOFORIT'); 
?>
<html>
<head>
<script> 
  function showPreview(){
   // var stagingUrl = 'http://ebizontech.com/~mofluid-mobile?rss=';
   var stagingUrl = 'http://localhost/';
    document.getElementById('mofluid-preview-frame').src = stagingUrl+document.getElementById('preview-rss').value;
  }
</script>
<style>
#mobile-preview{
	background: url("http://localhost/iphone-frame.png") no-repeat top center;
	width: 317px;
	height: 477px;
	padding: 142px 40px 133px 43px;
	float: left;
	margin-left: 60px;
}
</style>
</head>
<body>
<form action="index.php" onsubmit="showPreview();return false;" method="post">
  <input type="text" value="" name = "site_name" id='preview-rss'/>
  <input type="submit" value="preview" onclick="showPreview()" />
</form>
<hr />

<div id="mobile-preview" class="right" >
<iframe src="http://www.w3schools.com" style="width: 100%; height: 100%; border: 0;  position: relative; z-index: 1; " id="mofluid-preview-frame">
</iframe>
</div>
</body>
</html>
