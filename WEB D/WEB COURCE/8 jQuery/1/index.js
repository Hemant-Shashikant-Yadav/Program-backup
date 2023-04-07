// $("h1").css("color", "red");

$(document).ready(function () {
  $("h1").css("color", "red");
});o

// $("h1");
// $("button");
// console.log($("h1").css("color", "red"));//changes to red
// console.log($("h1").css("color"));//Gives rgb value of color

$("h1").addClass("bigTitle backgroundc borderh1");

// manipulate text

$("h1").text("BYE");

$("button").text("Do not click here"); //click here --> Do not click here
$("button").text("<em> Do not click here </em>"); //click here --> <em> Do not click here </em>
$("button").html("<em> Do not click here </em>"); //click here -->  Do not click here (in etalic)

// manipulate attrribute

// $("img").attr("src");

// console.log($("img").attr("src"));

$("a").text("bing");

$("a").attr("href", " https://www./bing.com/");

// console.log($("a").attr("href"));
// console.log($("a").attr("href", " https://www.bing.com/"));

// console.log($("h1").attr("class"));

// event listrner
$("h1").click(function () {
  $("h1").css("color", "purple");
});

// for (
//   var index = 0;
//   index < document.querySelectorAll("button").length;
//   index++
// ) {
//   document
//     .querySelectorAll("button")
//     [index].addEventListener("click", function () {
//       document.querySelector("h1").style.color = "purple";
//     });
// }

$("button").click(function () {
  $("h1").css("color", "blue");
});

// $("input").keydown(function (event) {
//     console.log(event.key);
// })
$("body").keydown(function (event) {
  console.log(event.key);
  $("h1").text(event.key);
});

$("h1").on("mouseenter", function () {
  $("h1").css("color", "yellow");
});

/*
$("h1").before("<button>new</button>");
$("h1").after("<button>new</button>");
$("h1").prepend("<button>new</button>");
$("h1").append("<button>new</button>");
$("button").remove();
*/

/*
$("button").on("click",function(){
    $("h1").hide();
});

$("h1").show();

$("button").on("click",function(){
    $("h1").toggle();
});

*/

/*
$("button").on("click",function(){
    $("h1").fadeout();
});

$("h1").fadein();

$("button").on("click",function(){
    $("h1").fadetoggle();
});

*/

/*
$("button").on("click",function(){
    $("h1").slideup();
});

$("h1").slidedown();

$("button").on("click",function(){
    $("h1").slidetoggle();
});

*/

/*

$("button").on("click",function(){
    $("h1").animate({
        // opacity: 0.5
        margin:20% 
    });
});

$("button").on("click",function(){
    $("h1").animate({
        slideup().slidedown().animate({opacity: 0.5}) 
    });
});


*/