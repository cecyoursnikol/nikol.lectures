<?php


$server = "localhost";
$username = "root";
$password = "";
$db = "newdb";



$connection = mysqli_connect($server,$username,$password,$db);


if($connection ->connect_error){

    die("Error While Conntecting to DB" . $connection ->connect_error);
}
echo "Connetected to DB";






// Creating Table in database

$sql = "CREATE TABLE students(

id INT(4) AUTO_INCREMENT PRIMARY KEY,

StudentName VARCHAR(100),
StudentRollNo INT(10)

)";


if($connection ->query($sql) === true){

    echo("Table Created !");
}

// echo("Err")

?>