// document.querySelector("button").addEventListener("click",clickAlert);

// function clickAlert() {
//   alert("You clicked a button.");
// }

// document.querySelector("button").addEventListener("click", function () {
//   alert("You clicked a button.");
// });

var noOfDrumButtons = document.querySelectorAll(".drum").length;

for (var i = 0; i < noOfDrumButtons; i++) {
  document.querySelectorAll(".drum")[i].addEventListener("click", function () {
    alert("You clicked a button.");
  });
}
 