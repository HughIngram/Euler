package test

import org.junit.Assert
import org.junit.Test
import solutions.EulerQuestion001
import solutions.EulerQuestion012
import solutions.EulerQuestion013

class EulerTest {

    @Test
    fun question1Test() {
        Assert.assertEquals(EulerQuestion001().execute(), 233168)
    }

    @Test
    fun question2Test() {
        Assert.assertEquals(EulerQuestion012().execute12(), 76576500)
    }

    @Test
    fun question3Test() {
        Assert.assertEquals(EulerQuestion013().execute(), "5537376230")
    }
}