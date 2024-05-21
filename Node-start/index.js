const http = require('http');


http.createServer(function(req,res){

    res.write("Test .js");
    res.end();
    // console.log("complete")
}).listen(3000);