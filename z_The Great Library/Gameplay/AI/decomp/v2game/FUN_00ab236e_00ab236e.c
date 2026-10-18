// __filelength @ 00ab236e body=[[00ab236e, 00ab2458]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __filelength
   
   Library: Visual Studio 2010 Release */

long __cdecl __filelength(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  long _Offset;
  int iVar3;
  long local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < uNumber_013f3ac0)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_013f3ae0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_013f3ae0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
        }
        else {
          _Offset = __lseek_nolock(_FileHandle,0,1);
          if (_Offset != -1) {
            local_20 = __lseek_nolock(_FileHandle,0,2);
            if (_Offset != local_20) {
              __lseek_nolock(_FileHandle,_Offset,0);
            }
            goto LAB_00ab2444;
          }
        }
        local_20 = -1;
LAB_00ab2444:
        FUN_00ab245c();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00ab7c17();
  }
  return -1;
}

