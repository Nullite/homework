const out1 = document.querySelector('.out1')
for (let i = 1; i < 10; i++) {
    for (let j = 2; j < 6; j++)
        out1.innerHTML += `${i}^${j} = ${(i ** j)} <br>`
    out1.innerHTML += '<hr>'
}
