var count = 1;
var arr = [];

function fixbuzz() {
  if (count % 3 == 0 && count % 5 == 0) {
    arr.push("fizzbuzz");
  } else if (count % 3 === 0) {
    arr.push("fizz");
  } else if (count % 5 === 0) {
    arr.push("buzz");
  } else {
    arr.push(count);
  }

  count++;
  console.log(arr);
}

fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();
fixbuzz();