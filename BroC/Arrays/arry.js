let fruits = ["Apple", "Banana", "Coconut"];

for(let i = 0; i < fruits.length; i++)
{
    for(let j = 0; j< fruits[i].length; j++)
    {
       fruits[i][j] = fruits[i][j].replace("N", 'B');
    }
    console.log('\n');
}
console.log(fruits);