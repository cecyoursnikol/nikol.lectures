function login(){

    let username = "admin";

let password = "123";

var Useer;

var Pass;
Useer = document.getElementById("user").value;

Pass = document.getElementById("pass").value;

if(Useer === "admin" && Pass === "123"){

    alert("Login Completed");
}

else{

    alert('not completed');
}
}