package generics.processors

import generics.Task
import generics.payloads.AHSPayload
import generics.payloads.DigitalPayload
import generics.payloads.Payload
import generics.payloads.StringPayload

abstract class Processor {

    fun <T: Payload> processTask(task: Task<T>) {
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