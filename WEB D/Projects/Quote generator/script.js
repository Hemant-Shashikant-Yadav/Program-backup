// Store all fetched quotes
var qoutesArray = [];

// Accessing ID's
var quote = document.getElementById("quote");
var author = document.getElementById("author");
var loader = document.getElementById("loader");
var quoteContainer = document.getElementById("quote-container");

// Generate random number between 0-qoutesArray Length
function randomNum() {
  return Math.floor(Math.random() * qoutesArray.length);
}

// Display loader
function loaderShow() {
  loader.hidden = false;
  quoteContainer.hidden = true;
}

// Hide loader
function loaderHidden() {
  loader.hidden = true;
  quoteContainer.hidden = false;
}

// Pic andom quote and disply
function newQuote() {
  loaderShow();
  const quoteData = qoutesArray[randomNum()];

  // If authors name is null
  if (quoteData.author === null) {
    author.textContent = "- Unknown.";
  } else {
    author.textContent = "- " + quoteData.author + ".";
  }

  // If quote length is more
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

// Asynchronus function to fetch all quotes from api
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

// For tweeter button
function tweet() {
  //   const twitterURL = `https://twitter.com/intent/tweet?text=${quote.textContent}  ${author.textContent}`;
  const twitterURL =
    "https://twitter.com/intent/tweet?text=" +
    quote.textContent +
    " " +
    author.textContent;
  window.open(twitterURL, "_blank");
}

// Function calling
getQuote();

// Button click
document.querySelector("#next").addEventListener("click", function () {
  newQuote();
});
document.querySelector("#twitter").addEventListener("click", function () {
  tweet();
});
