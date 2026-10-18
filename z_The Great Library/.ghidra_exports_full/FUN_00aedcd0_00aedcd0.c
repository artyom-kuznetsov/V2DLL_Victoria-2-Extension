// FUN_00aedcd0 @ 00aedcd0 body=[[00aedcd0, 00aeddae]]


void FUN_00aedcd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_ECX;
  void *unaff_EBX;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b382c4;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  uVar5 = *(uint *)(in_ECX + 0x18);
  uVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x14) + uVar6 * 4) + 4))(uVar2);
      if (iVar3 == 1) {
        if (*(int *)(*(int *)(in_ECX + 0x14) + uVar6 * 4) != 0) goto LAB_00aedd89;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  iVar3 = (*(code *)PTR_FUN_00f01b08)(0x120,0x25f,4,0,0,0xffffffff);
  uStack_4 = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00b0ef90();
  }
  iVar3 = *(int *)(in_ECX + 0x18);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x18) = uVar5;
  if (*(uint *)(in_ECX + 0x1c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x14) + -4 + *(int *)(in_ECX + 0x18) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar4;
  }
LAB_00aedd89:
  FUN_00b0f050(param_1,param_2);
  ExceptionList = unaff_EBX;
  return;
}

