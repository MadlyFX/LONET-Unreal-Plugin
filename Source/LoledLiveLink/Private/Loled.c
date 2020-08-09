#include <string.h>
#include <errno.h>

#include "Loled.h"

static int unpack_be24(unsigned char *buf)
{
    int r = 0;

    r |= buf[0];
    r <<= 8;
    r |= buf[1];
    r <<= 8;
    r |= buf[2];

    return r;
};

int Loled_F1_unpack(unsigned char *buf, int len, Loled_F1_t* dst)
{
    memset(dst, 0, sizeof(*dst));

    if (len != LOLED_PACKET_SIZE)
        return -EINVAL;

    if (buf[0] != 0xF1)
        return -EFAULT;

    dst->ID[0] = buf[1];

    dst->Focus = unpack_be24(buf + 2);
    dst->Iris = unpack_be24(buf + 5);
    dst->Zoom = unpack_be24(buf + 8);

    dst->FocusRaw = unpack_be24(buf + 11);
    dst->IrisRaw = unpack_be24(buf + 14);
    dst->ZoomRaw = unpack_be24(buf + 17);

    return 0;
}
