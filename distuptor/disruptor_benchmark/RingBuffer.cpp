// RingBuffer.cpp

#include "RingBuffer.h"

RingBuffer::RingBuffer(size_t bufferSize)
    : buffer_(bufferSize), nextSequence_(0), bufferSize_(bufferSize) {}

Event& RingBuffer::get(long sequence) {
    return buffer_[sequence % bufferSize_];
}

long RingBuffer::next() {
    return nextSequence_++;
}

