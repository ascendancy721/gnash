

#ifndef GNASH_AMF_H
#define GNASH_AMF_H

#include <map>
#include <string>

#include "dsodefs.h"

namespace gnash {
    class as_object;
    class SimpleBuffer;
}

namespace gnash {

namespace AMF {

enum Type {
    NOTYPE            = -1,
    NUMBER_AMF0       = 0x00,
    BOOLEAN_AMF0      = 0x01,
    STRING_AMF0       = 0x02,
    OBJECT_AMF0       = 0x03,
    MOVIECLIP_AMF0    = 0x04,
    NULL_AMF0         = 0x05,
    UNDEFINED_AMF0    = 0x06,
    REFERENCE_AMF0    = 0x07,
    ECMA_ARRAY_AMF0   = 0x08,
    OBJECT_END_AMF0   = 0x09,
    STRICT_ARRAY_AMF0 = 0x0a,
    DATE_AMF0         = 0x0b,
    LONG_STRING_AMF0  = 0x0c,
    UNSUPPORTED_AMF0  = 0x0d,
    RECORD_SET_AMF0   = 0x0e,
    XML_OBJECT_AMF0   = 0x0f,
    TYPED_OBJECT_AMF0 = 0x10,
};

class Writer
{
public:

    typedef std::map<as_object*, size_t> OffsetTable;

    Writer(SimpleBuffer& buf, bool strictArray = false)
        :
        _buf(buf),
        _strictArray(strictArray)
    {}

    /// Write any simple Object type: not DisplayObjects.
    //
    /// Handles functions, dates, and arrays. The object may not be null.
    bool writeObject(as_object* obj);

    /// Write a string.
    //
    /// Handles long and short strings.
    bool writeString(const std::string& str);

    /// Write a null value.
    bool writeNull();

    /// Write an undefined value.
    bool writeUndefined();

    /// Write a double.
    bool writeNumber(double d);

    /// Write a boolean.
    bool writeBoolean(bool b);

    /// Encode the name of an object's property.
    //
    /// You should encode the value of the property immediately afterwards.
    bool writePropertyName(const std::string& name);

    /// Write custom data for special cases.
    void writeData(boost::uint8_t* data, size_t length);

private:
    OffsetTable _offsets;
    SimpleBuffer& _buf;
    bool _strictArray;
};

/// Swap bytes in raw data.
//
///	This only swaps bytes if the host byte order is little endian.
///
/// @param word The address of the data to byte swap.
///
/// @param size The number of bytes in the data.
///
/// @return A pointer to the raw data.
///
DSOEXPORT void* swapBytes(void *word, size_t size);


} // namespace amf
} // namespace gnash

#endif
