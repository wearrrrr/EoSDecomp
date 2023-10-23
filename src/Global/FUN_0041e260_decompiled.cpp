
/* Library Function - Single Match
    public: void __thiscall CDocObjectServer::ReleaseDocSite(void)
   
   Library: Visual Studio 2003 Debug */

cls_0x41e260 * __thiscall FUN_0041e260(void *this)

{
  if (*(int *)((int)this + 4) != 0) {
    (**(code **)(**(int **)((int)this + 4) + 8))(*(undefined4 *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (cls_0x41e260 *)this;
}

