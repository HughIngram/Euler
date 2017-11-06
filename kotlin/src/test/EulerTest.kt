package test

import org.junit.Assert
import org.junit.Test
import solutions.EulerQuestion001
import solutions.EulerQuestion012

class EulerTest {

    @Test
    fun question1Test() {
        Assert.assertEquals(EulerQuestion001().execute(), 233168)
    }

    @Test
    fun question2Test() {
        Assert.assertEquals(EulerQuestion012().execute12(), 76576500)
    }

}