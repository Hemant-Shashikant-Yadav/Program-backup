//1



// const student = {
// //   name: "hy",
// //   roll: "11",
// // };

// // console.log(student.name);

// // var s = "dfhvhdlvsnf";
// // console.log(typeof s);

// var bodymain = document.body;
// var element = document.createElement("p");
// element.textContent = "hello world 2";

// var div = document.getElementById("div1");
// var element1 = document.createElement("p");
// element1.textContent = "hello world 3";

// bodymain.appendChild(element);
// div.appendChild(element1);


// 2
// console.log(document.getElementsByTagName('span')[0]);
// console.dir(document.getElementsByTagName('span')[0]);

// console.log(first.innerHTML); // output: Hey I am span
// first.innerHTML = "Hey I am changed"; // reload the page to see the change

// console.log(first.outerHTML); // output: <span>Hey I am span</span>
// first.outerHTML = "<h1 id=\"first\">Hey I am changed</h1>"; // reload the page to see the change
// console.log(first.outerHTML); 
// first.outerHTML = "<div id=\"first\" style=\"background-color: red;\" >Hey</div>";
// console.log(document.body.firstChild); // " Hello World "

// console.log(first.textContent); // output: Hey I am span
// first.textContent = "Hey I am changed"; // reload the page to see the change

// document.getElementsByTagName('div')[0].hidden = true;
// document.getElementsByTagName('div')[0].hidden = false;


// 3

// let first = document.getElementById("first");
// let a = first.getAttribute("class")
// console.log(a)
// console.log(first.hasAttribute("class"))
// console.log(first.hasAttribute("style"))
// // first.setAttribute("hidden", "true")
// first.setAttribute("class", "true sachin")
// first.removeAttribute("class")
// console.log(first.attributes)
// console.log(first.attributes[0].nodeValue)
// console.log(first.dataset)
// // console.log(first.dataset.game)
// // console.log(first.dataset.player)


// 4
// first.insertAdjacentHTML('beforebegin', '<div class="test">beforebegin</div>');
// first.insertAdjacentHTML('beforeend', '<div class="test">beforeend</div>');
// first.insertAdjacentHTML('afterbegin', '<div class="test">afterbegin</div>');
// first.insertAdjacentHTML('afterend', '<div class="test">afterend</div>');
// // first.remove()
// document.write("hi")

// const sum = (a, b, c) => {
//   console.log("Yes I am running " + (a + b + c))
//   a + b
// }

// setTimeout(sum, 5000, 1, 2, 7)


// setInterval(function() {
//   alert("setinterval")
// }, 5000)

// let a = setTimeout(function() {
//   alert("I am inside of settimeout")
// }, 5000)

// let b = prompt("Do you want to run the settimout?")
// if ("n" == b) {
//   clearTimeout(a)
// }
// console.log(a)

let p1 = new Promise((resolve, reject) => {
  setTimeout(() => {
          resolve("Value 1");
  }, 5000);
});

let p2 = new Promise((resolve, reject) => {
  setTimeout(() => {
          resolve("Value 2");
          // reject(new Error("Error"));
  }, 2000);
});

let p3 = new Promise((resolve, reject) => {
  setTimeout(() => {
          resolve("Value 3");
  }, 3000);
});

// p1.then((value) => {
//   console.log(value)
//   // console.log(error);
// })

// p2.then((value) => {
//   console.log(value)
// })

// p3.then((value) => {
//   console.log(value)
// })

let promise_all = Promise.all([p1, p2, p3])
// let promise_all = Promise.allSettled([p1, p2, p3])
// let promise_all = Promise.race([p1, p2, p3])
// let promise_all = Promise.resolve(6)
// let promise_all = Promise.reject(new Error("Hey"))
promise_all.then((value) => {
        console.log(value)
})