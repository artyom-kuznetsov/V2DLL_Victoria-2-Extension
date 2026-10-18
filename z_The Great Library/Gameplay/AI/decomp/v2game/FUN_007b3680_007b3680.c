// FUN_007b3680 @ 007b3680 body=[[007b3680, 007b3793] [007b3797, 007b37a9]]


void FUN_007b3680(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
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
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x70))();
  iVar2 = 0;
  if (param_1 == 0) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x84) + iVar2) != 0) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x84) + iVar2);
        *(undefined1 *)(iVar1 + 0x142) = 0;
        FUN_009a8550(iVar1);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0xc);
  }
  else {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x84) + iVar2 * 4) != 0) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x84) + iVar2 * 4);
        if (*(char *)(iVar1 + 0x142) == '\0') {
          *(undefined1 *)(iVar1 + 0x142) = 1;
          FUN_009a8550(iVar1);
        }
        if ((param_1 == iVar2) &&
           (iVar1 = *(int *)(*(int *)(in_ECX + 0x84) + iVar2 * 4), *(int *)(iVar1 + 0x6c) != 1)) {
          *(undefined4 *)(iVar1 + 0x6c) = 1;
          *(undefined4 *)(iVar1 + 0x10c) = 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  (**(code **)**(undefined4 **)(*(int *)(in_ECX + 0x74) + param_1 * 4))();
  (**(code **)(*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x74) + param_1 * 4) + 4) + 0x18) + 0x34
              ))();
  *(int *)(in_ECX + 0x144) = param_1;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("micro",5);
  local_8 = 0;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x78))(local_2c);
  if (local_18 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

