#ifndef _MEMORY_
#define _MEMORY_

mmap	"mmap_z8k"	-l 8k	-f /dev/zero	-B 10k
mmap	"mmap_z128k"	-l 128k	-f /dev/zero	-B 5k
mmap	"mmap_t8k"	-l 8k	-f $TFILE	-B 10k
mmap	"mmap_t128k"	-l 128k	-f $TFILE	-B 5k
# ifdef EXTENDED
mmap	"mmap_u8k"	-l 8k	-f $VFILE	-B 10k
mmap	"mmap_u128k"	-l 128k	-f $VFILE	-B 5k
# endif
mmap	"mmap_a8k"	-l 8k	-f MAP_ANON	-B 10k
mmap	"mmap_a128k"	-l 128k	-f MAP_ANON	-B 5k

mmap	"mmap_rz8k"	-l 8k	-r	-f /dev/zero	-B 10k
mmap	"mmap_rz128k"	-l 128k	-r	-f /dev/zero	-B 5k
mmap	"mmap_rt8k"	-l 8k	-r	-f $TFILE	-B 10k
mmap	"mmap_rt128k"	-l 128k	-r	-f $TFILE	-B 5k
# ifdef EXTENDED
mmap	"mmap_ru8k"	-l 8k	-r	-f $VFILE	-B 10k
mmap	"mmap_ru128k"	-l 128k	-r	-f $VFILE	-B 5k
# endif
mmap	"mmap_ra8k"	-l 8k	-r	-f MAP_ANON	-B 10k
mmap	"mmap_ra128k"	-l 128k	-r	-f MAP_ANON	-B 5k

mmap	"mmap_wz8k"	-l 8k	-w	-f /dev/zero	-B 10k
mmap	"mmap_wz128k"	-l 128k	-w	-f /dev/zero	-B 1k
mmap	"mmap_wt8k"	-l 8k	-w	-f $TFILE	-B 10k
mmap	"mmap_wt128k"	-l 128k	-w	-f $TFILE	-B 1k
# ifdef EXTENDED
mmap	"mmap_wu8k"	-l 8k	-w	-f $VFILE	-B 10k
mmap	"mmap_wu128k"	-l 128k	-w	-f $VFILE	-B 1k
# endif
mmap	"mmap_wa8k"	-l 8k	-w	-f MAP_ANON	-B 10k
mmap	"mmap_wa128k"	-l 128k	-w	-f MAP_ANON	-B 1k

# ifdef EXTENDED
mmap_frag	"mmap_frag"	-B 10000	-C 1000
# endif

munmap	"unmap_z8k"	-l 8k	-f /dev/zero	-B 10k
munmap	"unmap_z128k"	-l 128k	-f /dev/zero	-B 5k
munmap	"unmap_t8k"	-l 8k	-f $TFILE	-B 10k
munmap	"unmap_t128k"	-l 128k	-f $TFILE	-B 5k
# ifdef EXTENDED
munmap	"unmap_u8k"	-l 8k	-f $VFILE	-B 10k
munmap	"unmap_u128k"	-l 128k	-f $VFILE	-B 5k
# endif
munmap	"unmap_a8k"	-l 8k	-f MAP_ANON	-B 10k
munmap	"unmap_a128k"	-l 128k	-f MAP_ANON	-B 5k

munmap	"unmap_rz8k"	-l 8k	-r	-f /dev/zero	-B 10k
munmap	"unmap_rz128k"	-l 128k	-r	-f /dev/zero	-B 5k
munmap	"unmap_rt8k"	-l 8k	-r	-f $TFILE	-B 10k
munmap	"unmap_rt128k"	-l 128k	-r	-f $TFILE	-B 5k
# ifdef EXTENDED
munmap	"unmap_ru8k"	-l 8k	-r	-f $VFILE	-B 10k
munmap	"unmap_ru128k"	-l 128k	-r	-f $VFILE	-B 5k
# endif
munmap	"unmap_ra8k"	-l 8k	-r	-f MAP_ANON	-B 10k
munmap	"unmap_ra128k"	-l 128k	-r	-f MAP_ANON	-B 5k

munmap	"unmap_wz8k"	-l 8k	-w	-f /dev/zero	-B 10k
munmap	"unmap_wz128k"	-l 128k	-w	-f /dev/zero	-B 1k
munmap	"unmap_wt8k"	-l 8k	-w	-f $TFILE	-B 10k
munmap	"unmap_wt128k"	-l 128k	-w	-f $TFILE	-B 1k
# ifdef EXTENDED
munmap	"unmap_wu8k"	-l 8k	-w	-f $VFILE	-B 10k
munmap	"unmap_wu128k"	-l 128k	-w	-f $VFILE	-B 1k
# endif
munmap	"unmap_wa8k"	-l 8k	-w	-f MAP_ANON	-B 10k
munmap	"unmap_wa128k"	-l 128k	-w	-f MAP_ANON	-B 1k

# ifdef EXTENDED
munmap_frag	"unmap_frag"	-B 2500	-C 1000
# endif

mprotect	"mprot_z8k"	-l 8k	-f /dev/zero	-B 10k
mprotect	"mprot_z128k"	-l 128k	-f /dev/zero	-B 5k
mprotect	"mprot_wz8k"	-l 8k	-w	-f /dev/zero	-B 10k
mprotect	"mprot_wz128k"	-l 128k	-w	-f /dev/zero	-B 5k
mprotect	"mprot_twz8k"	-l 8k	-w	-t	-f /dev/zero	-B 10k
mprotect	"mprot_tw128k"	-l 128k	-w	-t	-f /dev/zero	-B 5k
mprotect	"mprot_tw4m"	-l 4m	-w	-t	-f /dev/zero	-B 500

msync	"msync_t8k"	-l 8k	-f $TFILE	-B 30k
msync	"msync_t128k"	-l 128k	-f $TFILE	-B 30k
# ifdef EXTENDED
msync	"msync_u8k"	-l 8k	-f $VFILE	-B 30k
msync	"msync_u128k"	-l 128k	-f $VFILE	-B 30k
# endif
msync	"msync_ta8k"	-l 8k	-f $TFILE	-a	-B 30k
msync	"msync_ta128k"	-l 128k	-f $TFILE	-a	-B 30k
# ifdef EXTENDED
msync	"msync_ua8k"	-l 8k	-f $VFILE	-a	-B 30k
msync	"msync_ua128k"	-l 128k	-f $VFILE	-a	-B 30k
# endif
msync	"msync_ti8k"	-l 8k	-f $TFILE	-i	-B 30k
msync	"msync_ti128k"	-l 128k	-f $TFILE	-i	-B 30k
# ifdef EXTENDED
msync	"msync_ui8k"	-l 8k	-f $VFILE	-i	-B 30k
msync	"msync_ui128k"	-l 128k	-f $VFILE	-i	-B 30k
# endif
msync	"msync_tai8k"	-l 8k	-f $TFILE	-a	-i	-B 30k
msync	"msync_tai128k"	-l 128k	-f $TFILE	-a	-i	-B 30k
# ifdef EXTENDED
msync	"msync_uai8k"	-l 8k	-f $VFILE	-a	-i	-B 30k
msync	"msync_uai128k"	-l 128k	-f $VFILE	-a	-i	-B 30k
# endif

msync	"msync_rt8k"	-l 8k	-r	-f $TFILE	-B 15k
msync	"msync_rt128k"	-l 128k	-r	-f $TFILE	-B 15k
# ifdef EXTENDED
msync	"msync_ru8k"	-l 8k	-r	-f $VFILE	-B 15k
msync	"msync_ru128k"	-l 128k	-r	-f $VFILE	-B 15k
# endif
msync	"msync_rat8k"	-l 8k	-r	-f $TFILE	-a	-B 15k
msync	"msync_rat128k"	-l 128k	-r	-f $TFILE	-a	-B 15k
# ifdef EXTENDED
msync	"msync_rau8k"	-l 8k	-r	-f $VFILE	-a	-B 15k
msync	"msync_rau128k"	-l 128k	-r	-f $VFILE	-a	-B 15k
# endif
msync	"msync_rit8k"	-l 8k	-r	-f $TFILE	-i	-B 15k
msync	"msync_rit128k"	-l 128k	-r	-f $TFILE	-i	-B 15k
# ifdef EXTENDED
msync	"msync_riu8k"	-l 8k	-r	-f $VFILE	-i	-B 15k
msync	"msync_riu128k"	-l 128k	-r	-f $VFILE	-i	-B 15k
# endif
msync	"msync_rait8k"	-l 8k	-r	-f $TFILE	-a	-i	-B 15k
msync	"msync_rait128k"	-l 128k	-r	-f $TFILE	-a	-i	-B 15k
# ifdef EXTENDED
msync	"msync_raiu8k"	-l 8k	-r	-f $VFILE	-a	-i	-B 15k
msync	"msync_raiu128k"	-l 128k	-r	-f $VFILE	-a	-i	-B 15k
# endif

msync	"msync_wt8k"	-l 8k	-w	-f $TFILE	-B 30k
msync	"msync_wt128k"	-l 128k	-w	-f $TFILE	-B 10k
# ifdef EXTENDED
msync	"msync_wu8k"	-l 8k	-w	-f $VFILE	-B 30k
msync	"msync_wu128k"	-l 128k	-w	-f $VFILE	-B 10k
# endif
msync	"msync_wat8k"	-l 8k	-w	-f $TFILE	-a	-B 30k
msync	"msync_wat128k"	-l 128k	-w	-f $TFILE	-a	-B 10k
# ifdef EXTENDED
msync	"msync_wau8k"	-l 8k	-w	-f $VFILE	-a	-B 30k
msync	"msync_wau128k"	-l 128k	-w	-f $VFILE	-a	-B 10k
# endif
msync	"msync_wit8k"	-l 8k	-w	-f $TFILE	-i	-B 30k
msync	"msync_wit128k"	-l 128k	-w	-f $TFILE	-i	-B 10k
# ifdef EXTENDED
msync	"msync_wiu8k"	-l 8k	-w	-f $VFILE	-i	-B 30k
msync	"msync_wiu128k"	-l 128k	-w	-f $VFILE	-i	-B 10k
# endif
msync	"msync_wait8k"	-l 8k	-w	-f $TFILE	-a	-i	-B 30k
msync	"msync_wait128k"	-l 128k	-w	-f $TFILE	-a	-i	-B 10k
# ifdef EXTENDED
msync	"msync_waiu8k"	-l 8k	-w	-f $VFILE	-a	-i	-B 30k
msync	"msync_waiu128k"	-l 128k	-w	-f $VFILE	-a	-i	-B 10k
# endif

#endif /* _MEMORY_ */
