// ⁡⁢⁣⁢​‌‌ 𝗖𝗼𝗱𝗲 𝗳𝗼𝗿 𝗴𝗲𝗻𝗲𝗿𝗮𝘁𝗶𝗻𝗴 𝗿𝗮𝗻𝗱𝗼𝗺 𝗰𝗼𝗹𝗼𝗿𝘀​⁡

var buttonColours = ["red", "blue", "green", "yellow"];
var gamePattern = [];
var userClickedPattern = [];
var checkFirst = true;
var level = 0;

function nextSequence() {
  level++;
  $("#level-title").text("Level " + level);

  var randomNumber = Math.floor(Math.random() * 4);

  randomChosenColour = buttonColours[randomNumber];
  gamePattern.push(randomChosenColour);

  $("#" + randomChosenColour)
    .fadeOut(100)
    .fadeIn(100)
    .fadeOut(100)
    .fadeIn(100);
  var audio = new Audio("sounds/" + randomChosenColour + ".mp3");
  audio.play();
}

$(".btn").on("click", function () {
  var userChosenColour = $(this).attr("id");
  userClickedPattern.push(userChosenColour);
  console.log(userChosenColour);

  $("#" + userChosenColour).addClass("pressed");
  setTimeout(function () {
    $("#" + userChosenColour).removeClass("pressed");
  }, 100);

  $("#" + userChosenColour)
    .fadeOut(100)
    .fadeIn(100)
    .fadeOut(100)
    .fadeIn(100);
  var audio = new Audio("sounds/" + userChosenColour + ".mp3");
  audio.play();
  console.log(userClickedPattern);

});

$("body").on("keydown", function name(params) {
  if (checkFirst) {
    $("#level-title").text("Level " + level);

    nextSequence();
    checkFirst = false;
  }
});
