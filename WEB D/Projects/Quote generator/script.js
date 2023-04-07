var qoutesArray = [];

var quote = document.getElementById("quote");
var author = document.getElementById("author");
var loader = document.getElementById("loader");
var quoteContainer = document.getElementById("quote-container");

function randomNum() {
  return Math.floor(Math.random() * qoutesArray.length);
}

function loaderShow() {
  loader.hidden = false;
  quoteContainer.hidden = true;
}
function loaderHidden() {
  loader.hidden = true;
  quoteContainer.hidden = false;
}

function newQuote() {
  loaderShow();
  const quoteData = qoutesArray[randomNum()];

  if (quoteData.author === null) {
    author.textContent = "- Unknown.";
  } else {
    author.textContent = "- " + quoteData.author + ".";
  }

  if (quoteData.text.length > 120) {
    quote.classList.add("long-quote");
    author.classList.add("long-quote");
  } else {
    quote.classList.remove("long-quote");
    author.classList.remove("long-quote");
  }
  quote.textContent = quoteData.text;
  loaderHidden();
}

async function getQuote() {
  loaderShow();

  const API = "https://type.fit/api/quotes";
  try {
    const response = await fetch(API);
    qoutesArray = await response.json();
    newQuote();
  } catch (error) {
    newQuote();
  }
}

function tweet() {
  //   const twitterURL = `https://twitter.com/intent/tweet?text=${quote.textContent}  ${author.textContent}`;
  const twitterURL =
    "https://twitter.com/intent/tweet?text=" +
    quote.textContent +
    " " +
    author.textContent;
  window.open(twitterURL, "_blank");
}

getQuote();

document.querySelector("#next").addEventListener("click", function () {
  newQuote();
});
document.querySelector("#twitter").addEventListener("click", function () {
  tweet();
});
