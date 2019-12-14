var str = prompt("Enter a String : ");
console.log("String is : " + convert(str));

function convert(s){
  return s.replace(/-/g , "_");
}
