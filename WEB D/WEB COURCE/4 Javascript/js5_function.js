// function walk() {
//   console.log("Get ready");
//   console.log("Go out");
//   console.log("Start walking");
//   console.log("Reach Destination");
//   console.log("Stop");
//   console.log("Start walking");
//   console.log("Reach home");
//   console.log("Stop");
//   console.log("Done");
// }

// walk();

// function walk(distance) {
//   console.log("Get ready");
//   console.log("Go out");
//   console.log("Start walking");
//   console.log("Walk "+distance+" Kms");
//   console.log("Reach Destination");
//   console.log("Stop");
//   console.log("Start walking");
//   console.log("Reach home");
//   console.log("Stop");
//   console.log("Done");
// }

// walk(10);

function walk(distance) {
  console.log("Get ready");
  console.log("Go out");
  console.log("Start walking");
  console.log("Walk " + distance + " Kms");
  var miles = distance * 0.621371;
  console.log("You walked " + miles + " miles");
  console.log("You walked " + Math.floor(miles) + " miles");
  console.log("Reach Destination");
  console.log("Stop");
  console.log("Start walking");
  console.log("Reach home");
  console.log("Stop");
  console.log("Done");
}

walk(10);
