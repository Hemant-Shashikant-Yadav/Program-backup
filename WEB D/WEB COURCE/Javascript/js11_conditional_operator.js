// Love calculator
var loveScore = Math.floor(Math.random() * 100 + 1);

if (loveScore > 75) {
  console.log(
    "Your love score is " + loveScore + "%." + " You love each other a lot. You are lucky."
  );
} else if(loveScore > 35 && loveScore<=75) {
  console.log("Your love score is " + loveScore + "%. Good.");
}
else{
    console.log("Your love score is " + loveScore + "%. "+"Try to improve, Good luck.");
}
  