function Random() {
    const max = 100;
    return Math.round(Math.random() * max);
}

const btn = document.getElementById('button');
const div = document.getElementById('div');

btn.onclick = function () {
    div.innerHTML = Random();
}