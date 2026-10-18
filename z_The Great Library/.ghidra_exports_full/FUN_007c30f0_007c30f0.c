// FUN_007c30f0 @ 007c30f0 body=[[007c30f0, 007c31a9] [007c31ad, 007c3229] [007c322d, 007c32b6] [007c32ba, 007c3309]]


void FUN_007c30f0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fd98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x24))();
  if (cVar1 == '\0') {
    local_20 = *(undefined4 *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x38) == 0) {
      FUN_007c3310(*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x2c) * 4));
    }
    else {
      local_1c = *(undefined4 *)(param_1 + 0x38);
      FUN_007c3440();
    }
  }
  else {
    FUN_007c3380(*(undefined4 *)(param_1 + 0x30));
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("pop_province_list",0x11);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))(local_3c);
  local_8 = 0xffffffff;
  if (local_28 < 0x10) {
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))();
    piVar4 = (int *)*puVar3;
    while (piVar4 != (int *)0x0) {
      local_18[0] = (int *)piVar4[2];
      iVar5 = *piVar4;
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
      FUN_00409350("poplistbutton",0xd);
      local_8 = 1;
      piVar4 = (int *)(**(code **)(**(int **)(iVar5 + 0x20) + 0x34))(local_74);
      (**(code **)(*piVar4 + 0x48))(1);
      local_8 = 0xffffffff;
      piVar4 = local_18[0];
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74[0]);
      }
    }
    local_18[0] = piVar4;
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))();
    piVar2 = (int *)*puVar3;
    while( true ) {
      do {
        if (piVar2 == (int *)0x0) {
          ExceptionList = local_10;
          return;
        }
        local_18[0] = (int *)piVar2[2];
        iVar5 = *piVar2;
        piVar2 = local_18[0];
      } while (iVar5 != param_1);
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00409350("poplistbutton",0xd);
      local_8 = 2;
      piVar2 = (int *)(**(code **)(**(int **)(iVar5 + 0x20) + 0x34))(local_58);
      (**(code **)(*piVar2 + 0x48))(2);
      local_8 = 0xffffffff;
      if (0xf < local_44) break;
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      if (local_18[0] == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
      piVar2 = local_18[0];
      if ((*(char *)(param_1 + 0x3c) != '\0') &&
         (iVar5 = *(int *)(param_1 + 0x28) + 1, *(int *)(*local_18[0] + 0x28) == iVar5)) {
        FUN_007c2eb0(param_1,iVar5,local_18);
        piVar2 = local_18[0];
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_3c[0]);
}

