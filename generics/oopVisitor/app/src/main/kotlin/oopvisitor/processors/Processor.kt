package oopvisitor.processors

import oopvisitor.Task
import oopvisitor.payloads.AHSPayload
import oopvisitor.payloads.DigitalPayload
import oopvisitor.payloads.StringPayload

abstract class Processor {

    fun processTask(task: Task) {
        task.payload.executeProcessor(this)
    }

    abstract fun processAHSPayload(payload: AHSPayload)
    abstract fun processDigitalPayload(payload: DigitalPayload)
    abstract fun processStringPayload(payload: StringPayload)
}