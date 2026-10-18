// _puts @ 00ab4097 body=[[00ab4097, 00ab41d0]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _puts
   
   Library: Visual Studio 2010 Release */

int __cdecl _puts(char *_Str)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  size_t _Count;
  int iVar4;
  size_t sVar5;
  undefined *puVar6;
  int local_20;
  
  local_20 = -1;
  if (_Str != (char *)0x0) {
    iVar2 = FUN_00aaf1e2();
    if ((*(byte *)(iVar2 + 0x2c) & 0x40) != 0) {
LAB_00ab4135:
      iVar2 = FUN_00aaf1e2();
      __lock_file2(1,(void *)(iVar2 + 0x20));
      iVar2 = FUN_00aaf1e2();
      iVar2 = __stbuf((FILE *)(iVar2 + 0x20));
      _Count = _strlen(_Str);
      iVar4 = FUN_00aaf1e2();
      sVar5 = __fwrite_nolock(_Str,1,_Count,(FILE *)(iVar4 + 0x20));
      if (sVar5 == _Count) {
        iVar4 = FUN_00aaf1e2();
        piVar1 = (int *)(iVar4 + 0x24);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          iVar4 = FUN_00aaf1e2();
          __flsbuf(10,(FILE *)(iVar4 + 0x20));
        }
        else {
          iVar4 = FUN_00aaf1e2();
          **(undefined1 **)(iVar4 + 0x20) = 10;
          *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
        }
        local_20 = 0;
      }
      iVar4 = FUN_00aaf1e2();
      __ftbuf(iVar2,(FILE *)(iVar4 + 0x20));
      FUN_00ab41d4();
      return local_20;
    }
    uVar3 = __fileno((FILE *)(iVar2 + 0x20));
    if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
      puVar6 = &DAT_00ef2ee8;
    }
    else {
      puVar6 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar3 >> 5]);
    }
    if ((puVar6[0x24] & 0x7f) == 0) {
      if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
        puVar6 = &DAT_00ef2ee8;
      }
      else {
        puVar6 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar3 >> 5]);
      }
      if ((puVar6[0x24] & 0x80) == 0) goto LAB_00ab4135;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00ab7c17();
  return -1;
}

