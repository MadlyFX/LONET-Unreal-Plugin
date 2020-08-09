#ifndef FreeD_h
#define FreeD_h

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#define LOLED_PACKET_SIZE 20

typedef struct
{
    char ID[1];        // Camera ID

    int Zoom;               // Camera Zoom
    int Focus;              // Camera Focus
    int Iris;              // Camera Focus
    int ZoomRaw;               // Camera Zoom
    int FocusRaw;              // Camera Focus
    int IrisRaw;              // Camera Focus

} Loled_F1_t;

int Loled_F1_unpack(unsigned char *buf, int len, Loled_F1_t* dst);

#ifdef __cplusplus
};
#endif /* __cplusplus */

#endif /* FreeD_h */