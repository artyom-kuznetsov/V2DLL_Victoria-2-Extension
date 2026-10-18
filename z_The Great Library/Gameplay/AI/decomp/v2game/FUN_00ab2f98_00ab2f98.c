// FID_conflict:__localtime64 @ 00ab2f98 body=[[00ab2f98, 00ab2fbe]]


/* Library Function - Multiple Matches With Different Base Names
    __gmtime32
    __gmtime64
    __localtime32
    __localtime64
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

tm * __cdecl FID_conflict___localtime64(__time32_t *_Time)

{
  tm *ptVar1;
  int iVar2;
  tm *ptVar3;
  
  ptVar1 = ___getgmtimebuf();
  ptVar3 = (tm *)0x0;
  if (ptVar1 != (tm *)0x0) {
    iVar2 = FUN_00ab2d10(ptVar1,_Time);
    ptVar3 = (tm *)(~-(uint)(iVar2 != 0) & (uint)ptVar1);
  }
  return ptVar3;
}

