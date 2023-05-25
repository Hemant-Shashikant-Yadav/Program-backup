var btn = document.getElementById("menu");
var ul1 = document.querySelector(".nav-ul");
var navsticky = document.querySelector(".nav-sticky");
var dflex = document.querySelector(".disp-flex");

btn.addEventListener("click", () => {
  ul1.classList.toggle("nav-ul");
  navsticky.classList.toggle("nav-sticky");
  //    ul1
});


  var fff = document.getElementById("flktCar");
  var fff1 = document.getElementById("flktCar1");
  if (window.innerWidth <= 515) {
    fff.setAttribute("data-flickity", '{ "wrapAround": true }');
    fff1.setAttribute("data-flickity", '{ "wrapAround": true }');
    fff.classList.remove("disp-flex")
    fff1.classList.remove("disp-flex")
  }else{
    fff.removeAttribute("data-flickity", '{ "wrapAround": true }');
    fff1.removeAttribute("data-flickity", '{ "wrapAround": true }');
    fff.classList.add("disp-flex")
    fff1.classList.add("disp-flex")
  }

// console.log(window.innerWidth);

if (element.hasAttribute("target")) {
    element.setAttribute("target", "_self");
  }