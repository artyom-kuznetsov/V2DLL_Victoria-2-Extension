// FUN_0093ff70 @ 0093ff70 body=[[0093ff70, 00940004] [00940008, 00940046]]


void FUN_0093ff70(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x18) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
  if (iVar1 == 0x38d) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("call_allies_checkbox",0x14);
    local_8 = 0;
    iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x48))(local_2c);
    *(bool *)(*(int *)(in_ECX + 0x6c) + 0x68) = *(int *)(iVar1 + 0x6c) == 1;
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_18 = 0xf;
  }
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x18))();
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  *(undefined1 *)(in_ECX + 100) = 1;
  ExceptionList = local_10;
  return;
}

