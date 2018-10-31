<?php

//PHP是世界最好的语言

$stime=microtime(true); //获取程序开始执行的时间

$i=0;$val =1000000000 ;
$count=0;
for(;$i<$val;$i++)
$count+=$i;

$etime=microtime(true);//获取程序执行结束的时间
$total=$etime-$stime;   //计算差值
echo "最后:i{$i} 共:{$count}  时间:{$total}秒";
