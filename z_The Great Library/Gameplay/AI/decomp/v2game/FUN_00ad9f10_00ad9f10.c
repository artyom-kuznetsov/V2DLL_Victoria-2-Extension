// FUN_00ad9f10 @ 00ad9f10 body=[[00ad9f10, 00ada052]]


/* WARNING: Removing unreachable block (ram,0x00ad9f6f) */
/* WARNING: Removing unreachable block (ram,0x00ad9f96) */
/* WARNING: Removing unreachable block (ram,0x00ada015) */
/* WARNING: Removing unreachable block (ram,0x00ad9fe5) */

undefined4 FUN_00ad9f10(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b37308;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1 + 1;
    do {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    FUN_00b13660((int)param_1 - (int)pcVar1,0);
  }
  FUN_00b13650(uVar3);
  ExceptionList = local_c;
  return 0;
}

