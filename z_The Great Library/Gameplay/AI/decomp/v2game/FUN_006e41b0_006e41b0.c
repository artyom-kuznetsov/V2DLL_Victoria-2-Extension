// FUN_006e41b0 @ 006e41b0 body=[[006e41b0, 006e42ae]]


void FUN_006e41b0(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9fb7b;
  local_10 = ExceptionList;
  iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x1c) + 0x60);
  local_14 = 0;
  do {
    if (iVar3 == 0) {
LAB_006e41f8:
      local_14 = -1;
LAB_006e41ff:
      ExceptionList = &local_10;
      iVar3 = FUN_00aae9af(100);
      local_8 = 0;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 4);
        if (((*(int *)(iVar1 + 0x20) < 1) || (10 < *(int *)(iVar1 + 0x184))) ||
           (*(char *)(iVar1 + 0x188) != '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        uVar4 = FUN_005827f0(iVar3,DAT_012588e8 + 0xb5c,local_14,!bVar2,
                             *(undefined1 *)(iVar1 + 0x180),*(undefined4 *)(iVar1 + 0x24));
      }
      local_8 = 0xffffffff;
      iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar4);
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(in_ECX + 4) == iVar3) {
      if (iVar3 != 0) goto LAB_006e41ff;
      goto LAB_006e41f8;
    }
    iVar3 = *(int *)(iVar3 + 0x224);
    local_14 = local_14 + 1;
  } while( true );
}

