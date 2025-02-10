<?php


$a = fopen("hello.txt","a");

$result = fwrite($a,"Is very danger");

fclose($a);

// $b = fopen("hello.txt","r");




echo $result;


?>