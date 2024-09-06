exports.sum = function(a, b) {
    return a + b;
}

exports.multiply = function(a, b) {
    return a * b;
}

exports.divide = function(a, b) {
    if(b != 0) {
        return a / b;
    } else {
        throw new Error("Cannot divide by zero");
    }
}

exports.subtract = function(a, b) {
    return a - b;
}