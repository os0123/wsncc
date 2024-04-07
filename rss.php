<h3><p>choose category: </h3></p>
<form method="post" id="form1">
<select name="rss" required>
<option value="">select</option>
<option value="https://timesofindia.indiatimes.com/rssfeeds/66949542.cms">science</option>
</select>
<input type="submit" value="Load"/>
</form>

<?php
if(isset($_POST['rss']))
{
echo '<h1> serach result for rss: '.$_POST['rss'].'</h1>';
$rssurl=$_POST['rss'];
$rss=new DOMDocument();
$rss->load($rssurl);
$feed=array();
foreach($rss->getElementsByTagName('item') as $node)
{
$item=array( 'title'=>$node->getElementsByTagName('title')->item(0)->nodeValue,
             'link'=>$node->getElementsByTagName('link')->item(0)->nodeValue,
             'desc'=>$node->getElementsByTagName('description')->item(0)->nodeValue,
             'date'=>$node->getElementsByTagName('pubDate')->item(0)->nodeValue);
array_push($feed,$item);
}
$limit=5;
for($x=0;$x<$limit;$x++)
{
$title=str_replace('&','&amp;',$feed[$x]['title']);
$link=$feed[$x]['link'];
$description=$feed[$x]['desc'];
$date=date('I F d,Y', strtotime($feed[$x]['date']));
echo '<p><strong><a href="'.$link.'" title="'.$title.'">'.$title.'</p></a></strong><br>';
echo '<p> '.$desc.' </p>';
echo '<small><em> posted on : '.$date.' </small></em>';
}
}
?>
