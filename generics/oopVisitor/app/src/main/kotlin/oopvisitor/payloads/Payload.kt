package oopvisitor.payloads

import oopvisitor.processors.Processor

interface Payload {
    fun executeProcessor(processor: Processor)
}