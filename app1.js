const jj = {
    users: ['Roman', 'Vlad', 'Nikolay', 'Sergey', 'Maxim', 'Alexandr' ],
    dessignation: 'Ujutnoe JJ',
    addUser: function (user) {
         jj.users[this.users.length] = user
    }
}
jj.addUser ('Tatjana')
jj.addUser ('Rita')
jj.dessignation = 'ujutnenkoe'
console.log (jj.users)
console.log (jj.dessignation)