// Getting modules from npm
const express = require("express");
const path = require("path");

// Port number
const port = 8000;

// creatinf servrer
const app = express();

// Settinf Ejs and view path
app.set("view engine", "ejs");
app.set("views", path.join(__dirname, "views"));
app.use(express.urlencoded());

// contats imformation for contacts page
var contact = [
  {
    name: "hy",
    ph_no: "8516327968",
  },
  {
    name: "hu",
    ph_no: "9865321548",
  },
  {
    name: "we",
    ph_no: "7589653215",
  },
  {
    name: "ij",
    ph_no: "4865321995",
  },
  {
    name: "pq",
    ph_no: "1029752039",
  },
];

// getting homepage
app.get("/", function (req, res) {
  return res.render("home");
});

// getting contacts page
app.get("/contact", function (req, res) {
  return res.render("contact", {
    title: "This is contact page.",
    contact_list: contact,
  });
});

// posting new contact to existing list
app.post("/create-contact", function (req, res) {
  //   console.log(req);
  //   console.log(req.body);
  contact.push({
    name: req.body.name,
    ph_no: req.body.ph_no,
  });
  return res.redirect("/contact");
});


// calling server
app.listen(port, function (err) {
  if (err) {
    console.log("Error occured = " + err);
    return;
  }
  console.log("Server running smoothly.");
});
