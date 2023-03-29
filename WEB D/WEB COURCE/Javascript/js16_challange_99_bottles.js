function beerBottelSong() {
  var i = 99;
  while (i > 1) {
    console.log(i + " bottles of beer on the wall, " + i + " bottles of beer.");
    i--;
    console.log(
      "Take one down and pass it around," + i + " bottles of beer on the wall."
    );
  }
  console.log(i + " bottles of beer on the wall, " + i + " bottles of beer.");
  console.log(
    "Take one down and pass it around, no more bottles of beer on the wall."
  );
  console.log("No more bottles of beer on the wall, no more bottles of beer.");
  console.log(
    "Go to store and buy some more, 99 bottles of beer on the wall."
  );
}

beerBottelSong();
