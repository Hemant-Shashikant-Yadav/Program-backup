var names = [
  "hemant",
  "amit",
  "aman",
  "sharadha",
  "rohit",
  "khapra",
  "dhattarwal",
];

function whosPaying(names) {
  var numberOfPeop1e = names.length;
  var randomPersonPosition = Math.floor(Math.random() * numberOfPeop1e);
  var randomPerson = names[randomPersonPosition];
  return randomPerson;
}

console.log(whosPaying(names) + " is paying today.");
