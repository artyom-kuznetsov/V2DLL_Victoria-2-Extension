// FUN_006e48d0 @ 006e48d0 body=[[006e48d0, 006e4984]]


void FUN_006e48d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  iVar3 = *(int *)(*(int *)(in_ECX + 4) + 0x1c);
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x50);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar4 = 0;
    for (iVar3 = *(int *)(iVar3 + 0x60); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x224)) {
      if (*(int *)(in_ECX + 4) == iVar3) {
        if (iVar3 != 0) goto LAB_006e492f;
        break;
      }
      iVar4 = iVar4 + 1;
    }
    iVar4 = -1;
LAB_006e492f:
    uVar2 = FUN_0057cc60(iVar1,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                         *(undefined4 *)(DAT_012588e8 + 0xb60),iVar4);
  }
  local_8 = 0xffffffff;
  iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar2);
  ExceptionList = local_10;
  return;
}

