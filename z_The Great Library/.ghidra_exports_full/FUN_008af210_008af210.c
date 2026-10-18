// FUN_008af210 @ 008af210 body=[[008af210, 008af2ed] [008af2f1, 008af4ac]]


void FUN_008af210(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int local_124 [65];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5c168;
  local_10 = ExceptionList;
  if (param_2 == (int *)0x3b8) {
    ExceptionList = &local_10;
    piVar4 = (int *)FUN_00aae9af(0x24);
    piVar6 = (int *)0x0;
    if (piVar4 != (int *)0x0) {
      piVar4[1] = 0x18d;
      piVar4[2] = 0;
      piVar4[3] = 0;
      piVar4[4] = 0;
      *(undefined2 *)(piVar4 + 6) = 0;
      *piVar4 = (int)CMTTHModifier::vftable;
      *(undefined1 *)(piVar4 + 7) = 0;
      FUN_00401000(0x447a1fff);
      iVar5 = FUN_00b31c00();
      piVar4[8] = iVar5;
      piVar6 = piVar4;
    }
    param_2 = piVar6;
    (**(code **)(*piVar6 + 0xc))(param_1);
    FUN_0068f390();
    ExceptionList = local_10;
    return;
  }
  if (param_2 != (int *)0x3e) {
    if (param_2 == (int *)0x3be) {
      ExceptionList = &local_10;
      FUN_009a1ce0();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == (int *)0x56a) {
      ExceptionList = &local_10;
      FUN_009a1ce0();
      if (*(int *)(in_ECX + 0x18) == 0) {
        *(undefined4 *)(in_ECX + 0x18) = 1000;
        ExceptionList = local_10;
        return;
      }
    }
    else {
      ExceptionList = &local_10;
      FUN_009a0f40();
    }
    ExceptionList = local_10;
    return;
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00413960();
  local_8 = 0xffffffff;
  if (local_20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_20);
  }
  puVar1 = (uint *)(((*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) & 0xfffffff0U) - 0x10) +
                   *(int *)(in_ECX + 8));
LAB_008af300:
  do {
    piVar6 = *(int **)(param_1 + 0x1c);
    if ((char)piVar6[0x44] == '\0') {
      iVar5 = (**(code **)(*piVar6 + 4))();
      piVar6[2] = iVar5;
      if (iVar5 == 0) {
        piVar6[3] = 0x13;
      }
      *(undefined1 *)(piVar6 + 0x44) = 1;
    }
    piVar6 = piVar6 + 3;
    piVar4 = local_124;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar4 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((local_124[0] == 4) || (local_124[0] == 0x13)) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      ExceptionList = local_10;
      return;
    }
    FUN_009a1440(param_1);
    piVar6 = (int *)FUN_00aae9af(0x24);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[1] = 0x18d;
      piVar6[2] = 0;
      piVar6[3] = 0;
      piVar6[4] = 0;
      *(undefined2 *)(piVar6 + 6) = 0;
      *piVar6 = (int)CMTTHModifier::vftable;
      *(undefined1 *)(piVar6 + 7) = 0;
      FUN_00401000(0x447a1fff);
      iVar5 = FUN_00b31c00();
      piVar6[8] = iVar5;
    }
    param_2 = piVar6;
    (**(code **)(*piVar6 + 0xc))(param_1);
    *(undefined1 *)(piVar6 + 7) = 1;
    puVar2 = (undefined4 *)puVar1[1];
    if (&param_2 < puVar2) {
      puVar3 = (undefined4 *)*puVar1;
      if (puVar3 <= &param_2) {
        if (puVar2 == (undefined4 *)puVar1[2]) {
          FUN_00a513f0();
        }
        if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar1[1] =
               *(undefined4 *)(*puVar1 + ((int)&param_2 - (int)puVar3 >> 2) * 4);
        }
        puVar1[1] = puVar1[1] + 4;
        goto LAB_008af300;
      }
    }
    if (puVar2 == (undefined4 *)puVar1[2]) {
      FUN_00a513f0();
    }
    if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
      *(undefined4 *)puVar1[1] = piVar6;
    }
    puVar1[1] = puVar1[1] + 4;
  } while( true );
}

