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
    // alert("You clicked a button.");
    // this.style.color = "white";
    // console.log(this.innerHTML);

    playSound(this.innerHTML);
    bottonAnimation(this.innerHTML);
  });
}   

document.addEventListener("keydown", function (event) {
  playSound(event.key);
  bottonAnimation(event.key);
});

function playSound(key) {
  switch (key) {
    case "w":
      var audio = new Audio("sounds/tom-1.mp3");
      audio.play();

      break;
    case "a":
      var audio = new Audio("sounds/tom-2.mp3");
      audio.play();

      break;
    case "s":
      var audio = new Audio("sounds/tom-3.mp3");
      audio.play();

      break;
    case "d":
      var audio = new Audio("sounds/tom-4.mp3");
      audio.play();
      break;
    case "j":
      var audio = new Audio("sounds/snare.mp3");
      audio.play();
      break;
    case "k":
      var audio = new Audio("sounds/crash.mp3");
      audio.play();

      break;
    case "l":
      var audio = new Audio("sounds/kick-bass.mp3");
      audio.play();

      break;
  }
}

function bottonAnimation(currentKey) {
  var activrButton = document.querySelector("." + currentKey);

  activrButton.classList.add("pressed");

  setTimeout(function () {
    activrButton.classList.remove("pressed");
  }, 100);
}
