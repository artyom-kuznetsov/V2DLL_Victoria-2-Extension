// FUN_005c5750 @ 005c5750 body=[[005c5750, 005c5825] [005c5829, 005c5853]]


void FUN_005c5750(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_130 [65];
  undefined **local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b45e48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while( true ) {
    local_8 = 0xffffffff;
    piVar2 = *(int **)(param_1 + 0x1c);
    if ((char)piVar2[0x44] == '\0') {
      iVar1 = (**(code **)(*piVar2 + 4))();
      piVar2[2] = iVar1;
      if (iVar1 == 0) {
        piVar2[3] = 0x13;
      }
      *(undefined1 *)(piVar2 + 0x44) = 1;
    }
    piVar2 = piVar2 + 3;
    piVar4 = local_130;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((local_130[0] == 4) || (local_130[0] == 0x13)) break;
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
    puVar5 = (undefined4 *)(param_1 + 0x228);
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    local_28 = 0x18d;
    local_2c = CUniqueUnitNameInternal::vftable;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_14 = 0;
    local_8 = 0;
    FUN_009a2a90(param_1);
    FUN_005c5aa0();
    local_8 = 0xffffffff;
    if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_24);
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  ExceptionList = local_10;
  return;
}

