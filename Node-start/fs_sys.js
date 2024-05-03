const http = require('http')

const fs = require('fs')

http.createServer(function(req,res){

    fs.readFile('index.html',function(err,d){
        res.writeHead(200,{"Content-Type":"text/html"});
        res.write(d);
        res.end();
    });
}).listen(3000);