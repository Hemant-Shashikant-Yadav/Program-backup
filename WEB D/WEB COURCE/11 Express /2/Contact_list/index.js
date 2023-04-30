const express = require("express");
const path = require("path");
const port = 3000;

const app = express();

app.set("view engine", "ejs");
app.set("views",path.join(__dirname,'views'));

app.get("/", (req, res) => {
 //   console.log(req);
//   console.log(__dirname);
//   res.send("<h1>Server is running smoothly.<h1>");

  return res.render('home',{title:"Rendered from index.js"})
});

app.listen(port, (err) => {
  if (err) {
    console.log("We got error in code: ", err);
  }

  console.log("The express server is up and running on port: ", port);
});
