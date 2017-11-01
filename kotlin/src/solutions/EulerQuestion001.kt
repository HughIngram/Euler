package solutions

/**
 * Sum the multiples of 3 and 5 below 1000.
 */
class EulerQuestion001 {

    fun execute() {
        var sum = 0
        var i = 1
        do {
            if (i % 3 == 0 || i % 5 == 0) {
                sum += i
            }
            i++
        } while (i < 1000)
        print(sum)
    }
}

fun main(args : Array<String>) {
    EulerQuestion001().execute()
}
