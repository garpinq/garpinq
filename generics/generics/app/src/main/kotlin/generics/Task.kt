package generics

import generics.payloads.Payload

class Task<T: Payload> constructor(val payload: T) {
}