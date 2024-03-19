package oopvisitor.processors

import oopvisitor.payloads.AHSPayload
import oopvisitor.payloads.DigitalPayload
import oopvisitor.payloads.StringPayload

class OutputProcessor: Processor() {

    override fun processAHSPayload(payload: AHSPayload) {
        println("Processing an AHSPayload: ${payload.ahsData}")
    }

    override fun processDigitalPayload(payload: DigitalPayload) {
        println("Processing an DigitalPayload: ${payload.digitalData}")
    }

    override fun processStringPayload(payload: StringPayload) {
        println("Processing an StringPayload: ${payload.stringData}")
    }
}