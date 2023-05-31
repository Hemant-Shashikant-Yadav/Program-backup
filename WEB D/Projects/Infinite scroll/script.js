/*
const count = 30;
var photoArray = [];
const APIkey = "qStYM8vI-T1y02VhGnbUlfKxwg0QK6HJr5S08lzPHgM";

const API = `https://api.unsplash.com/photos/random/?client_id=${APIkey}&count=${count}`;
var imgContainer = document.getElementById("img-container");
var loader = document.getElementById("loader");

function setAttribute(element, attributes) {
  for (const key in attributes) {
    element.setAttribute(key, attributes[key]);
  }
}

// update photos
function updatePhotos() {
  photoArray.forEach((photo) => {
    const item = document.createElement("a");
    // item.setAttribute("href", photo.links.html);
    // item.setAttribute("target", "_blank");

    setAttribute(item, {
      href: photo.links.html,
      target: "_blank",
    });

    const img = document.createElement("img");
    // img.setAttribute("src", photo.urls.regular);
    // img.setAttribute("alt", photo.alt_description);
    // img.setAttribute("title", photo.alt_description);

    setAttribute(img, {
      src: photo.urls.regular,
      alt: photo.alt_description,
      title: photo.alt_description,
    });

    item.appendChild(img);
    imgContainer.append(item);
  });
}

// Get photos

async function getPhotos() {
  try {
    const respance = await fetch(API);
    // const data = await respance.json();
    photoArray = await respance.json();
    console.log(photoArray);
    updatePhotos();
  } catch (error) {
    console.log("An error occured during fetching images");
  }
}

getPhotos();

document.addEventListener('scroll',function () {
  console.log('scrolled');
})
*/

/*Getting elements */
// loader
var load_img = document.getElementById("loader_img");
var load = document.getElementById("loader");

//API
var count = 20;
const APIKey = "qStYM8vI-T1y02VhGnbUlfKxwg0QK6HJr5S08lzPHgM";
const API = `https://api.unsplash.com/photos/random/?client_id=${APIkey}&count=${count}`;

// Timeout function for loader
setTimeout(() => {
  load_img.setAttribute("hidden", "true");
  load.removeAttribute("class");
  console.log("sucess");
}, 3000);


//Fetching api
