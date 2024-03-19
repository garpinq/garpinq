package oopvisitor.payloads

import oopvisitor.processors.Processor

class AHSPayload(val ahsData: String): Payload {

    override fun executeProcessor(processor: Processor) {
        processor.processAHSPayload(this)
    }
}