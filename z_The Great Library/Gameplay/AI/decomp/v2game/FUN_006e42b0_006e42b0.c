// FUN_006e42b0 @ 006e42b0 body=[[006e42b0, 006e43aa]]


void FUN_006e42b0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x1c) + 0x60);
  local_14 = 0;
  do {
    if (iVar2 == 0) {
LAB_006e42f8:
      local_14 = -1;
LAB_006e42ff:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(100);
      local_8 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 4);
        if (((*(int *)(iVar1 + 0x20) < 1) || (10 < *(int *)(iVar1 + 0x184))) ||
           (*(char *)(iVar1 + 0x188) != '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        uVar3 = FUN_005827f0(iVar2,DAT_012588e8 + 0xb5c,local_14,uVar3,
                             *(char *)(iVar1 + 0x180) == '\0',*(undefined4 *)(iVar1 + 0x24));
      }
      local_8 = 0xffffffff;
      iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(in_ECX + 4) == iVar2) {
      if (iVar2 != 0) goto LAB_006e42ff;
      goto LAB_006e42f8;
    }
    iVar2 = *(int *)(iVar2 + 0x224);
    local_14 = local_14 + 1;
  } while( true );
}

