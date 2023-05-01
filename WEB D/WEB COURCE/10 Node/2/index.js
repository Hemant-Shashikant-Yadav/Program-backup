const https = require("http");
const file = require("fs");
const { log } = require("console");

const port = 3000;

// function requestHandler(req, res) {
//   console.log(req.url);

//   // res.writeHead(200, { "content-type": "text/html" });

//   // file.readFile("./index.html", (err, data) => {
//   //   if (err) {
//   //     console.log("error", err);
//   //     return res.end("<h1>Hello This is an Error <h1>");
//   //   }

//   //   return res.end(data);
//   // });

//   // res.end("<h1>Hello This is heamant <\h1>")
// }

function requestHandler(req, res) {
  console.log(req.url);
  res.writeHead(200, { "content-type": "text/html" });

  var filePath;

  switch (req.url) {
    case "/":
      filePath = "./index.html";
      break;

    case "/contact":
      filePath = "./Contact.html";
      break;

    default:
      filePath = "./404.html";
      break;
  }

  file.readFile(filePath, (err, data) => {
    if (err) {
      console.log("error", err);
      return res.end("<h1>Hello This is an Error <h1>");
    }

    return res.end(data);
  });
}

const server = https.createServer(requestHandler);

server.listen(port, (error) => {
  if (error) {
    console.log(error);
    console.error();
  } else {
    console.log("Server is started and running without error.");
  }
});
