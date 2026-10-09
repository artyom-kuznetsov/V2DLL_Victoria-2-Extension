// FUN_005946a0 @ 005946a0

/* WARNING: Removing unreachable block (ram,0x0059474e) */
/* WARNING: Removing unreachable block (ram,0x0059472d) */
/* WARNING: Removing unreachable block (ram,0x00594771) */
/* WARNING: Removing unreachable block (ram,0x005947a1) */

int FUN_005946a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b460d0;
  iVar5 = 0;
  ppvVar4 = &local_10;
  iVar3 = *(int *)(in_ECX + 8);
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar4, iVar3 != 0) {
    local_8 = 0xffffffff;
    iVar1 = *(int *)(iVar3 + 0x24);
    FUN_00408ed0(iVar3,0,0xffffffff);
    iVar2 = *(int *)(iVar3 + 0x1c);
    local_8 = 0;
    FUN_00409350(&DAT_00e01d5c,4);
    iVar6 = FUN_00414bd0(0);
    ppvVar4 = ExceptionList;
    iVar3 = iVar1;
    if (iVar6 != 0) {
      iVar5 = iVar5 + iVar2;
    }
  }
  ExceptionList = local_10;
  return iVar5;
}


