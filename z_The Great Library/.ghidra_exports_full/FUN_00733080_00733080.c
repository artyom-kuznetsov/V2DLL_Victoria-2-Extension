// FUN_00733080 @ 00733080 body=[[00733080, 00733127] [0073312b, 00733181] [00733185, 007331b2]]


void FUN_00733080(int param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined1 uStack0000000b;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)(in_ECX + 0x6c) = param_1;
  *(undefined1 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 300);
  *(undefined1 *)(in_ECX + 0x78) = param_2;
  *(undefined1 *)(in_ECX + 0x160) = 1;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("close",5);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x60) + 0x34))(local_48);
  piVar2 = *(int **)(iVar1 + 0x58);
  uStack0000000b = piVar2 == (int *)0x0;
  if (!(bool)uStack0000000b) {
    do {
      if (*piVar2 == in_ECX + 4) break;
      piVar2 = (int *)piVar2[2];
    } while (piVar2 != (int *)0x0);
    uStack0000000b = piVar2 == (int *)0x0;
  }
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  if ((bool)uStack0000000b != false) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("close",5);
    local_8 = 1;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x60) + 0x34))(local_2c);
    (**(code **)(*(int *)(iVar1 + 0x54) + 4))(in_ECX + 4);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x60) + 0x18) + 0x34))();
  ExceptionList = local_10;
  return;
}

