const count = 10;
var photoArray = [];
const APIkey = "opon2cQIAas_3NkZKtkH1vXgUPx3Bj2wiP7jX65QT1g";

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
  } catch (error) {}
}

getPhotos();
