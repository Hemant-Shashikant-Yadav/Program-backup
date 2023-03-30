var guestList = [
  "hemant",
  "amit",
  "aman",
  "sharadha",
  "rohit",
  "khapra",
  "dhattarwal",
];

console.log(guestList);
console.log(guestList.length);
console.log(guestList.includes("hemant"));
if (guestList.includes("hemant")) {
  console.log("Yuor name is in the guest list.");
} else {
  console.log("Yuor name is not in the guest list.");
}
