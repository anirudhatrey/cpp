let inputArr = [11,7,2,4,17,14,12,5,22,1,10,16,21,6];
let num = 12;
const findNumbers = (arr,num)=>{
var result={};
for(var i=0;i<arr.size();i++){
if(arr.includes(num-arr[i],i+1)){
result.push([arr[i],sum-arr[i]]);

}
return result;

}

};
console.log(findNumbers(inputArr,num));
// Output={[11,1],[7,5],[2,10],[5,7],[1,11],[10,2]}