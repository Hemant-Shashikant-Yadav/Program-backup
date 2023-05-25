const http = require("http");
const port = 8000;
const fs = require("fs");

function requestHandler(req, res) {
  console.log(req.url);
  res.writeHead(200, { "Content-type": "text/html" });

  //   fs.readFile("Y:/Coding/Codes/WEB\ D/WEB\ COURCE/10\ Node/2/1/index.html", function (error, data) {
  //     if (error) {
  //       console.log(error);
  //       return res.end("<h1>Error</h1>");
  //     }

  //     return res.end(data);
  //   });
  var path = "Y:/Coding/Codes/WEB D/WEB COURCE/10 Node/2/1/";
  switch (req.url) {
    case "/":
      path = path + "index.html";
      break;
    case "/about":
      path = path + "about.html";
      break;
    case "/contact":
      path = path + "contact.html";
      break;
    case "/error":
      path = path + "error.html";
      break;

    default:
      path = path + "error.html";

      break;
  }

  fs.readFile(path, function (error, data) {
    if (error) {
      console.log(error);
      return res.end("<h1>Error</h1>");
    }

    return res.end(data);
  });
}

const server = http.createServer(requestHandler);

server.listen(port, function (error) {
  if (error) {
    console.log(error);
    return;
  }

  console.log("Server is running on port: " + port);
});
