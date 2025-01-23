<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Html Form with handled by php</title>
</head>

<body>
    <h1>
        <?php
        if (isset($_GET["username"])) {

            echo "Hello " . $_GET['username'];
        } else {

            echo "No username";
        }
        ?>
    </h1>
</body>

</html>