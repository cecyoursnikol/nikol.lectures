<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Connection with mysql</title>
</head>
<body>
   <?php
   
   
   $server = "localhost";
   $username = "root";
   $password = "";
   

   $connection = new mysqli($server,$username,$password);


   if($connection -> connect_error){

    die("Error while Connecting ".$connection->connect_error);
   }

   echo " Connection Done";


//    Create db with php 

$sql = "CREATE DATABASE phpCoder";

if($connection -> query($sql) === true){

    echo "Db Created";
}

else{

    echo "Error in creating db ". $connection->error;
}



$connection ->close();






   ?>







</body>
</html>