// FUN_005f7de0 @ 005f7de0 body=[[005f7de0, 005f7e83] [005f7e87, 005f7f46] [005f7f4a, 005f7f57] [005f7f5b, 005f7f6b] [005f7f6f, 005f7f98]]


undefined1 * FUN_005f7de0(int param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  undefined1 local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b45a07;
  local_10 = ExceptionList;
  local_18 = 0;
  local_1c = 0;
  piVar3 = (int *)(param_1 + 0x2c);
  ExceptionList = &local_10;
  do {
    local_8 = 0xffffffff;
    iVar1 = (**(code **)(*param_3 + 0x4c))();
    if (iVar1 + -1 == local_1c) {
LAB_005f7e60:
      local_11 = '\x01';
    }
    else {
      if (*piVar3 != 0) {
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        FUN_00409350("alerticon_banner",0x10);
        local_8 = 0;
        local_18 = local_18 | 1;
        piVar2 = (int *)(**(code **)(*(int *)*piVar3 + 0x44))(local_38);
        if (piVar2 == param_3) goto LAB_005f7e60;
      }
      local_11 = '\0';
    }
    local_8 = 0xffffffff;
    if (((local_18 & 1) != 0) && (local_18 = local_18 & 0xfffffffe, 0xf < local_24)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    if (local_11 != '\0') {
      FUN_0040c830(param_2);
      ExceptionList = local_10;
      return param_2;
    }
    local_1c = local_1c + 1;
    piVar3 = piVar3 + 0x22;
    if (8 < local_1c) {
      local_80 = 0xf;
      local_84 = 0;
      local_94[0] = local_94[0] & 0xffffff00;
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      local_40 = 0;
      local_3c = 1;
      local_8 = 1;
      *(undefined4 *)(param_2 + 0x14) = 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *param_2 = 0;
      FUN_00408ed0(local_94,0,0xffffffff);
      local_8._0_1_ = 2;
      *(undefined4 *)(param_2 + 0x30) = 0xf;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      param_2[0x1c] = 0;
      FUN_00408ed0(local_78,0,0xffffffff);
      local_8 = CONCAT31(local_8._1_3_,3);
      *(undefined4 *)(param_2 + 0x4c) = 0xf;
      *(undefined4 *)(param_2 + 0x48) = 0;
      param_2[0x38] = 0;
      FUN_00408ed0(local_5c,0,0xffffffff);
      *(undefined4 *)(param_2 + 0x54) = local_40;
      param_2[0x58] = local_3c;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      if (local_64 < 0x10) {
        if (local_80 < 0x10) {
          ExceptionList = local_10;
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_94[0]);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_78[0]);
    }
  } while( true );
}

