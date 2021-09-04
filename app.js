let a = document.querySelector('.out');
for (i = 2; i < 10; i++) {
    for (j = 1; j < 5; j++) {
        a.innerHTML += `${i} ^ ${j} = ${(i ** j)}<br>`
    }
    a.innerHTML += '<hr>'
}