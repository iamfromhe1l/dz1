let arr = [
	[0, 0, 0, 0, 0, 0, 0, 0],
	[0, 0, 0, 0, 0, 0, 0, 0],
	[0, 0, 0, 0, 0, 0, 0, 0],
	[0, 0, 0, 0, 0, 0, 0, 0],
	[0, 0, 0, 0, 0, 0, 0, 0],
	[0, 0, 0, 0, 0, 0, 0, 0],
	[0, 0, 0, 0, 0, 0, 0, 0],
	[0, 0, 0, 0, 0, 0, 0, 0],
]

const getCoors = (y, x) => {
	let dopMas = []
	if (x >= 2 && y >= 1) {
		dopMas.push([y - 1, x - 2])
	}
	if (x >= 2 && y <= 6) {
		dopMas.push([y + 1, x - 2])
	}
	if (x <= 5 && y >= 1) {
		dopMas.push([y - 1, x + 2])
	}
	if (x <= 5 && y <= 6) {
		dopMas.push([y + 1, x + 2])
	}
	if (x >= 1 && y >= 2) {
		dopMas.push([y - 2, x - 1])
	}
	if (x <= 6 && y >= 2) {
		dopMas.push([y - 2, x + 1])
	}
	if (x <= 6 && y <= 5) {
		dopMas.push([y + 2, x + 1])
	}
	if (x >= 1 && y <= 5) {
		dopMas.push([y + 2, x - 1])
	}
	return dopMas
}

let y = prompt('y(1-8): ') - 1
let x = prompt('x(1-8): ') - 1
let mas = [[y, x]]
let i = 0
let dopMas = []
while (mas.length != 0 && i < 5) {
	y = mas[0][0]
	x = mas[0][1]
	mas.shift()
	dopMas = getCoors(y, x)
	for (let j = 0; j < dopMas.length; j++) {
		let elem = dopMas[j]
		if (arr[elem[0]][elem[1]] != 1) {
			mas.push(elem)
			arr[elem[0]][elem[1]] = 1
		}
	}
	i++
}
console.log(arr)
//while (mas.length != 0) {}
