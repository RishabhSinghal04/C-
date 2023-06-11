
#include "stream_insertion.h"

std::ostream &operator<<(std::ostream &out_stream, const StreamInsertion &stream_insertion)
{
    stream_insertion.printInformation();
    return out_stream;
}