package oop.processors

import oop.Task
import oop.payloads.AHSPayload
import oop.payloads.DigitalPayload
import oop.payloads.StringPayload

abstract class Processor {

    fun processTask(task: Task) {
        val payload = task.payload

        if (payload is AHSPayload) {
            processAHSPayload(payload)

        } else if (payload is DigitalPayload) {
            processDigitalPayload(payload)

        } else if (payload is StringPayload) {
            processStringPayload(payload)

        } else {
            throw Exception("Unexpected payload type")
        }
    }

    abstract fun processAHSPayload(payload: AHSPayload)
    abstract fun processDigitalPayload(payload: DigitalPayload)
    abstract fun processStringPayload(payload: StringPayload)
}