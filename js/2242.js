var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

function isVowel(character) {
  switch (character) {
    case "a":
    case "e":
    case "i":
    case "o":
    case "u":
      return true;
    default:
      return false;
  }
}

function isPalindrome(text) {
  text = toArray(text);
  const middle = Math.floor(text.length / 2);
  const firstPos = 0;
  const lastPos = text.length - 1;
  for (let i = firstPos, j = lastPos; i < middle; i++, j--) {
    if (text[i] != text[j]) return false;
  }

  return true;
}

function toArray(text) {
  return [...text];
}

laugth = toArray(lines[0]);
parsed = "";
laugth.forEach((c) => {
  if (isVowel(c)) parsed += c;
});

console.log(isPalindrome(parsed) ? "S" : "N");
