<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = trim($_POST["name"]);
    $email = trim($_POST["email"]);
    $age = trim($_POST["age"]);

    $errors = [];

    // Validate Name
    if (empty($name)) {
        $errors[] = "Name is required.";
    } elseif (!preg_match("/^[a-zA-Z-' ]*$/", subject: $name)) {
        $errors[] = "Only letters and white space allowed in name.";
    }

    // Validate Email
    if (empty($email)) {
        $errors[] = "Email is required.";
    } elseif (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
        $errors[] = "Invalid email format.";
    }

    // Validate Age
    if (empty($age)) {
        $errors[] = "Age is required.";
    } elseif (!filter_var($age, filter: FILTER_VALIDATE_INT)) {
        $errors[] = "Age must be a valid number.";
    }

    // Display Errors or Process Data
    if (empty($errors)) {
        echo "Validation successful!";
        // Process the sanitized data
    } else {
        foreach ($errors as $error) {
            echo "<p style='color:red;'>$error</p>";
        }
    }
}
?>
