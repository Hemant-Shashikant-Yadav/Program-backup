const express = require("express");
const port = 8000;

const app = express();

app.get("/", function (req, res) {
  console.log(req);
  // res.send(path)
});

app.listen(port, function (err) {
  if (err) {
    console.log("Error occured = " + err);
    return;
  }
  console.log("Server running smoothly.");
});
