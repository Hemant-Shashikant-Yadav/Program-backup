// var H;
// var M;
// var S;
// var Da;
// var Mo;
// var Yr;

// var Hr = document.getElementById("hour");
// var Mn = document.getElementById("minute");
// var Sc = document.getElementById("second");

// var Dt = document.getElementById("date");
// var Mt = document.getElementById("month");
// var Ya = document.getElementById("year");

// function a() {
//   var D = new Date();

//   H = D.getHours();
//   M = D.getMinutes();
//   S = D.getSeconds();
//   Da = D.getDate();
//   Mo = D.getMonth();
//   Yr = D.getFullYear();
//   Hr.innerHTML = H;
//   Mn.innerHTML = M;
//   Sc.innerHTML = S;
//   Dt.innerHTML = Da;
//   Mt.innerHTML = Mo;
//   Ya.innerHTML = Yr;
// }

// setInterval(a, 1000);

var Hr = document.getElementById("hour");
var Mn = document.getElementById("minute");
var Sc = document.getElementById("second");

var Dt = document.getElementById("date");
var Mt = document.getElementById("month");
var Ya = document.getElementById("year");

setInterval(() => {
  var D = new Date();

  Hr.innerHTML = D.getHours();
  Mn.innerHTML = D.getMinutes();
  Sc.innerHTML = D.getSeconds();
  Dt.innerHTML = D.getDate();
  Mt.innerHTML = D.getMonth();
  Ya.innerHTML = D.getFullYear();
}, 1000);
