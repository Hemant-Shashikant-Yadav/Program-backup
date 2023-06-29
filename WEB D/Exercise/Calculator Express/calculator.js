const express = require("express");
const port = 8000;

const app = express();

app.get("/", (req,res) => {
  // console.log(req);
  res.send("<h1>Hello World!!! </h1>")
});
app.listen(port, function (err) {
  if (err) {
    console.log("Error occured = " + err);
    return;
  }
  console.log("Server running smoothly.");
});
