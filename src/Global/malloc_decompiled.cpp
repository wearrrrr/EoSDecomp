
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl malloc(uint sizeofAlloc)

{
  void *malloc;
  
  malloc = __nh_malloc(sizeofAlloc,1);
  return malloc;
}

