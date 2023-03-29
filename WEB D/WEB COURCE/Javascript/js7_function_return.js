function walk(distance) {
  console.log("Get ready");
  console.log("Go out");
  console.log("Start walking");
  console.log("Walk " + distance + " Kms");
  var miles = kmsToMiles(distance);
  console.log("You walked " + miles + " miles");
  console.log("You walked " + Math.floor(miles) + " miles");
  console.log("You walked extra " + remainderDistance(miles) + " miles");
  console.log("Reach Destination");
  console.log("Stop");
  console.log("Start walking");
  console.log("Reach home");
  console.log("Stop");
  console.log("Done");
}

walk(10);

function kmsToMiles(distance) {
  return distance *0.621371 ;
}

function remainderDistance(miles) {
  return miles % 0.621371;
}
