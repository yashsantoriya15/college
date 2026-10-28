console.log("yadav")

// var - global scope - redclare , update(assing)
// let - block scope - redeclare(x) , update(assing)
// const - block scope - update (x) , redeclare(x)

// --------var---------//
var a = 10;
console.log(a);
var a  = 20;  // redeclare
console.log(a);
a= 40 ; // update assign
console.log(a);

// -------------let ------
let b = 30;
console.log(b);
 b = 50;
console.log(b);

{
   var age = 30;
}
console.log(age);

{
    let age =  40;
    console.log(age);
}
// ------------const --------

const c = 60;
console.log(c);

{
    const age = 40;
    console.log(age);
}

console.log(age);

























let arr = [39, 48 , 48 , 44, 55, 66 ];
     //    0,  ,1,  2,   3,  4,  5

console.log(arr[5])

// --------push ---------
arr.push(40);
console.log(arr);

//----------pop ---------
arr.pop()
console.log(arr)

// shift
arr.shift()
console.log(arr);

// unshift
arr.unshift(40)
console.log(arr);




function sum(a,b){
    return a+b;
}

sum(23,37);
console.log(sum(40,30));



const expressionFn = function(a,b){
    console.log(a+b);
}
expressionFn(44,55);


const arrowFn = (a,b)=>{
    console.log(a+b);
}

arrowFn(300,400);


(function(){
 console.log("yadav")
})()