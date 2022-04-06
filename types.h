typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef uint pde_t;
typedef struct lock_t
{
    uint ticket;
    uint turn;
} lock_t;