package oopvisitor.payloads

import oopvisitor.processors.Processor

class StringPayload(val stringData: String): Payload {

    override fun executeProcessor(processor: Processor) {
        processor.processStringPayload(this)
    }
}