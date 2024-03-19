/*
 * This Kotlin source file was generated by the Gradle 'init' task.
 */
package oop

import oop.payloads.AHSPayload
import oop.payloads.DigitalPayload
import oop.payloads.StringPayload
import oop.processors.OutputProcessor

class App {
    val greeting: String
        get() {
            return "Hello World!"
        }
}

fun example() {
    val tasks = arrayOf(
        Task(AHSPayload("some AHS data")),
        Task(DigitalPayload("some digital data")),
        Task(StringPayload("some string data"))
    )

    val processor = OutputProcessor()

    for (task in tasks) {
        processor.processTask(task)
    }
}

fun main() {
    println(App().greeting)

    example()
}
