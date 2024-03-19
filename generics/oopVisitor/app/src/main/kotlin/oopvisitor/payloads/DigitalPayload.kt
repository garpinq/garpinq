package oopvisitor.payloads

import oopvisitor.processors.Processor

class DigitalPayload(val digitalData: String): Payload {

    override fun executeProcessor(processor: Processor) {
        processor.processDigitalPayload(this)
    }
}