document.getElementsByTagName("li")[2].style.color = "red";
// document.getElementsByTagName("li");
// document.getElementsByTagName("li").length;

// document.getElementsByClassName("btn");

// document.getElementById("title")
document.getElementById("title").innerHTML = "The hy";

// query selectors (if more then one objects present, it gives only first output.)
document.querySelector("#title").innerHTML = "The hy";
document.querySelector(".btn").innerHTML = "The yadav";

// hairachical selector (inside element)
document.querySelector("li a").style.color = "red";

// inside same element
document.querySelector("li.list");

// query selector all (it guves all the objects present in it)
document.querySelectorAll("#itemList .list");
document.querySelectorAll("#itemList .list")[1].style.color = "green";

// see all classes present in current element
// document.querySelector("bitton").classList;
// document.querySelector("bitton").classList.add("new-class")

// text manupulation
/*
eg. <h1 id="title">Hello</h1>
    document.getElementById("title").innerHTML;        output = Hello
    document.getElementById("title").textContent;        output = Hello


eg. <h1 id="title"><strong>Hello</strong></h1>
    document.getElementById("title").innerHTML;        output = <strong>Hello</strong>
    document.getElementById("title").textContent;        output = Hello


*/

// use of innerHTML
/*
eg. code before = <h1 id="title">Hello</h1>

document.querySelector("h1").innerHTML = "<em>The yadav</em>";

code after <h1 id="title"><em>The yadav</em></h1>
oputput = emphasised text on web page.

*/

//  Attributr manipulation
/*

document.querySelector("a");
<a href="https://www.google.com">Google</a>;

document.querySelector("a").attributes;
// {0: href, href: href, length: 1}

document.querySetector("a").getAttribute("href");
//www.google.com

https: document.querySetector("a").setAttribute("href", "https://www.bing.com");
   
 */


/*
Event listner = 
document.querySelectorAll("element like =  class id element").addEventListener("operation on which it triggers function",function name eg.clickAlert);

// function clickAlert() {
//   alert("You clicked a button.");
// }


document.querySelectorAll("element like =  class id element").addEventListener("operation on which it triggers function", function () {
  alert("You clicked a button.");
});

document.querySelectorAll("button").addEventListener("click", function () {
  alert("You clicked a button.");
});

 */