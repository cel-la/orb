#include "Orb.h"

const uchar* orb::utf8to16(const char *s, uint len, std::vector<uchar> &dst)
{
    return nullptr;
}

const char* orb::utf16to8(const uchar *s, uint len, std::vector<char> &dst)
{
    uint temp, temp1, temp2, code, pair1, pair2;
    int byteCount;

    if(len == 0)
    {
        dst.clear();
        dst.reserve(1);
        dst.data()[0] = 0;
        return dst.data();
    }

    for(uint i=0; i<len; i++)
    {
        pair1 = s[i];
        if(pair1 >= 0x0000 && pair1 <= 0xD7FF)
            byteCount = 2;
        else if(i + 1 < len && (pair1 >= 0xD800 && pair1 <= 0xDBFF))
        {
            pair2 = s[++i];
            if (pair2 >= 0xDC00 && pair2 <= 0xDFFF)
                byteCount = 4;
            else
            {
                orb::Error::set_error(1,
                        "The utf16 sequence is illega at pos %u: 0x%04x.", i,
                        pair2);
                return nullptr;
            }
        }
        else
        {
            orb::Error::set_error(1,
                    "The utf16 sequence is illega at pos %u: 0x%04x.", i,
                    pair1);
            return nullptr;
        }

        if (byteCount == 2)
            code = pair1;
        else //if (byteCount == 4)
        {
            temp1 = ((pair1 & 0x3FF) << 10);
            temp2 = (pair2 & 0x3FF);
            code = temp1 + temp2 + 0x10000;
        }

        dst.clear();
        dst.reserve(len + 1);

        if (code >= 0x0000 && code <= 0x007F)
        {                       //If code point is in [0x0000,0x007F]
            dst.push_back(code);
        }
        else if (code >= 0x0080 && code <= 0x07FF)
        {                  //Else if code point is in[0x0080,0x07FF]
            temp = 0xC0 + ((code & 0x7C0) >> 6);
            dst.push_back(temp);
            temp = 0x80 + (code & 0x3F);
            dst.push_back(temp);
        }
        else if (code >= 0x0800 && code <= 0xFFFF)
        {                  //Else if code point is in [0x0800,0xFFFF]
            temp = 0xE0 + ((code & 0xF000) >> 12);
            dst.push_back(temp);
            temp = 0x80 + ((code & 0xFC0) >> 6);
            dst.push_back(temp);
            temp = 0x80 + ((code & 0x3F));
            dst.push_back(temp);
        }
        else if (code >= 0x010000 && code <= 0x10FFFF)
        {              //Else if code point is in [0x010000,0x10FFFF]
            temp = 0xF0 + ((code & 0x1C0000) >> 18);
            dst.push_back(temp);
            temp = 0x80 + ((code & 0x3F000) >> 12);
            dst.push_back(temp);
            temp = 0x80 + ((code & 0xFC0) >> 6);
            dst.push_back(temp);
            temp = 0x80 + (code & 0x3F);
            dst.push_back(temp);
        }
    }

    dst.reserve(dst.size() + 1);
    dst.data()[dst.size()] = 0;
    return dst.data();
}
