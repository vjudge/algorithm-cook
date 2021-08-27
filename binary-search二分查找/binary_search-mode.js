function binary_search_mode (bsmAry, n) {
    let start = 0
    let end = bsmAry.length - 1
    while (start <= end) {
        let midn = Math.round((start + end) / 2)
        if (bsmAry[midn] == n) {
            return midn
        } else if (bsmAry[midn] > n) {
            end = midn - 1
        } else {
            start = midn + 1
        }
    }
    return start // 如果不存在，返回应该插入的位置
}

console.log(binary_search_mode([2, 3, 6, 9, 12, 16], 15))