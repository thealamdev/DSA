
const getNumber = (array) => {
    for (i = 0; i < array.length - 1; i++) {
        if (i == 5) return array[i];
    }
}

const array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
console.time('getNumber')
console.log(getNumber(array))
console.timeEnd('getNumber')

const getNumberWithOptimization = (array) => {
    return array[5];
}

console.time('getNumberWithOptimization')
console.log(getNumberWithOptimization(array))
console.timeEnd('getNumberWithOptimization')