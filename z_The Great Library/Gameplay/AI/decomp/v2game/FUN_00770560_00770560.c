// FUN_00770560 @ 00770560 body=[[00770560, 0077065a] [0077065e, 00770671]]


void FUN_00770560(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4b983;
  local_14 = ExceptionList;
  iVar4 = *(int *)(param_1 + 300);
  uVar3 = *(undefined4 *)(param_1 + 0x128);
  if (iVar4 != 0) {
    ExceptionList = &local_14;
    iVar1 = FUN_00aae9af(0x50);
    local_c = 0;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
      uVar3 = FUN_007297a0(iVar1,uVar3,iVar4,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                           *(undefined4 *)(DAT_012588e8 + 0xb60),*(undefined4 *)(iVar2 + 0x6c));
    }
    local_c = 0xffffffff;
    iVar4 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))(uVar3);
    uStack_24 = 0xf;
    uStack_28 = 0;
    auStack_38[0] = 0;
    FUN_00409350("click",5);
    puStack_10 = (undefined1 *)0x1;
    piVar5 = (int *)FUN_009c7290();
    (**(code **)(*piVar5 + 0x60))(auStack_38);
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_34);
    }
  }
  ExceptionList = local_14;
  return;
}

