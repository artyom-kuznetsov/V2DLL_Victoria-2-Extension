// FUN_005196b0 @ 005196b0 body=[[005196b0, 005196fe] [00519700, 0051975e] [00519762, 00519894] [00519898, 005198cf] [005198d3, 005198f2] [005198fb, 00519907] [0051990b, 0051991d]]


undefined1 * FUN_005196b0(undefined1 *param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b819ae;
  local_10 = ExceptionList;
  local_8 = 1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_18 = 1;
  local_2c = (undefined4 *)*param_2;
  iVar4 = (int)(param_2[1] - (int)local_2c) >> 3;
  do {
    if ((local_2c < (undefined4 *)*param_2) || ((undefined4 *)param_2[1] <= local_2c)) {
      if (param_3 == 0) {
        ExceptionList = local_10;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = local_2c[1];
    local_24 = *local_2c;
    iVar4 = iVar4 + -1;
    local_2c = local_2c + 2;
    local_14 = iVar4;
    FUN_0055dd40();
    local_8 = 2;
    FUN_00448aa0();
    local_8 = 1;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar1 = param_3;
    if ((param_4 - param_3 & 0xfffffff8U) != 0) {
      for (; iVar1 != param_4; iVar1 = iVar1 + 8) {
        if (*(int *)(iVar1 + 4) == local_20) {
          if (iVar1 != param_4) {
            FUN_00448740(&DAT_00df0d5c,1);
          }
          break;
        }
      }
    }
    if (iVar4 < 2) {
      if (0 < iVar4) {
        FUN_00448740(&DAT_00ded950,1);
        puVar3 = (undefined4 *)0x0;
        local_48 = 0xf;
        local_4c = 0;
        local_5c[0] = local_5c[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfaa6c,3);
        local_8 = 3;
        FUN_009a8ee0(local_40,local_5c);
        local_8 = 4;
        puVar2 = DAT_0125b5e0;
        if (DAT_0125b5e0 == (undefined4 *)0x0) {
          local_1c = FUN_00aae9af();
          local_8 = 5;
          if (local_1c != 0) {
            puVar3 = (undefined4 *)FUN_00475150();
          }
          local_8 = 6;
          local_1c = 0;
          puVar2 = puVar3;
          if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
            (**(code **)*DAT_0125b5e0)();
          }
        }
        DAT_0125b5e0 = puVar2;
        local_8 = 4;
        FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
        local_8 = 7;
        FUN_00448aa0();
        if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_64 = 0xf;
        local_8 = 8;
        FUN_009adb70();
        if (local_3c != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 1;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        iVar4 = local_14;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    else {
      FUN_00448740(&DAT_00df8148,2);
    }
  } while( true );
}

