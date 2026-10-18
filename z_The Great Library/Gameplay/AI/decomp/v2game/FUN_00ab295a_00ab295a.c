// _fprintf @ 00ab295a body=[[00ab295a, 00ab2a5b]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fprintf
   
   Library: Visual Studio 2010 Release */

int __cdecl _fprintf(FILE *_File,char *_Format,...)

{
  int *piVar1;
  uint uVar2;
  int _Flag;
  undefined *puVar3;
  int local_20;
  
  local_20 = 0;
  if ((_File == (FILE *)0x0) || (_Format == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    return -1;
  }
  __lock_file(_File);
  if ((_File->_flag & 0x40) == 0) {
    uVar2 = __fileno(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &DAT_00ef2ee8;
    }
    else {
      puVar3 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar2 >> 5]);
    }
    if ((puVar3[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar3 = &DAT_00ef2ee8;
      }
      else {
        puVar3 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar2 >> 5]);
      }
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00ab2a1f;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    local_20 = -1;
  }
LAB_00ab2a1f:
  if (local_20 == 0) {
    _Flag = __stbuf(_File);
    local_20 = FUN_00ab9df1(_File,_Format,0,&stack0x0000000c);
    __ftbuf(_Flag,_File);
  }
  FUN_00ab2a5c();
  return local_20;
}

