var button = document.querySelector(".container-button");
var layer  = document.querySelector("#layer");

button.addEventListener("click", function (e) {
    var clickButton = e.target;
    var valueButton = clickButton.innerText;

    if (valueButton == 'C') {
        layer.value = "";
    } else if (valueButton == 'Del') {
        layer.value = layer.value.slice(0,-1)
    } else if (valueButton == '=') {
        layer.value = eval(layer.value)
    }
    else {
        layer.value += valueButton;
    }

})