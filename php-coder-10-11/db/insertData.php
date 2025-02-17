<?php
   
   
   $server = "localhost";
   $username = "root";
   $password = "";
   $db = "newdb";
   

   $connection = new mysqli($server,$username,$password,$db);


   if($connection -> connect_error){

    die("Error while Connecting ".$connection->connect_error);
   }

   echo " Connection Done";



   $sql = "INSERT INTO students(StudentName,StudentRollNo) VALUES('Tisha','22')";

   if($connection ->query($sql) === true){

    echo("Data inserted !");
   }
   else{

    echo("error".$sql ."".mysqli_errno(mysql: ($connection)));
   }

   ?>