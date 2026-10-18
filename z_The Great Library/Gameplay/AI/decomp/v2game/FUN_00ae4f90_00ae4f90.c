// FUN_00ae4f90 @ 00ae4f90 body=[[00ae4f90, 00ae4fdd] [00ae4fe3, 00ae5038] [00ae503c, 00ae504c] [00ae5050, 00ae506f] [00ae50ae, 00ae50c3]]


void FUN_00ae4f90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b37cc0;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffd0;
  if (param_2 == 0) {
    if (param_1 == 0) {
      return;
    }
    ExceptionList = &local_c;
    FUN_00ae4100(uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = &local_c;
  FUN_00ae66b0(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x20);
  local_4 = 0;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1 + 0x20);
      while (iVar1 = iVar1 + -1, iVar1 != -1) {
        FUN_00ae4b90(param_1,param_2);
      }
      FUN_00ae4100(uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4);
  } while ((((param_2 != *(int *)(iVar2 + 0x10)) && (param_2 != *(int *)(iVar2 + 0x14))) &&
           (param_2 != *(int *)(iVar2 + 0x18))) || (iVar2 == 0));
  FUN_00ae4ad0();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar2);
}

