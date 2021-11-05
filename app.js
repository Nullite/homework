function knight(startPosition) {

    const horizontal = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
    const vertical = [1, 2, 3, 4, 5, 6, 7, 8]
    const startPositionArray = startPosition.toLowerCase().split('')

    if (!horizontal.includes(startPositionArray[0]) || !vertical.includes(+startPositionArray[1])) {
        return 'illegal position'
    }

    let variants = [
        [[horizontal[horizontal.indexOf(startPositionArray[0]) + 2]],
        [vertical[vertical.indexOf(+startPositionArray[1]) + 1]]],

        [[horizontal[horizontal.indexOf(startPositionArray[0]) + 1]],
        [vertical[vertical.indexOf(+startPositionArray[1]) + 2]]],

        [[horizontal[horizontal.indexOf(startPositionArray[0]) - 2]],
        [vertical[vertical.indexOf(+startPositionArray[1]) + 1]]],

        [[horizontal[horizontal.indexOf(startPositionArray[0]) - 1]],
        [vertical[vertical.indexOf(+startPositionArray[1]) + 2]]],

        [[horizontal[horizontal.indexOf(startPositionArray[0]) + 2]],
        [vertical[vertical.indexOf(+startPositionArray[1]) - 1]]],

        [[horizontal[horizontal.indexOf(startPositionArray[0]) + 1]],
        [vertical[vertical.indexOf(+startPositionArray[1]) - 2]]],

        [[horizontal[horizontal.indexOf(startPositionArray[0]) - 2]],
        [vertical[vertical.indexOf(+startPositionArray[1]) - 1]]],

        [[horizontal[horizontal.indexOf(startPositionArray[0]) - 1]],
        [vertical[vertical.indexOf(+startPositionArray[1]) - 2]]],
    ]

    let possibleMoves = []

    for (let i = 0; i < variants.length; i++) {
        if (horizontal.includes(variants[i][0].join('')) && vertical.includes(+(variants[i][1].join('')))) {
            possibleMoves.push(variants[i].join(''))
        }
    }

    return possibleMoves.join(' ')
}

console.log(knight('E7'))