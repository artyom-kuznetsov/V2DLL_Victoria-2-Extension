// FUN_0041e2a0 @ 0041e2a0 body=[[0041e2a0, 0041e3ab] [0041e3af, 0041e3d3] [0041e3d7, 0041e43c] [0041e440, 0041e464] [0041e468, 0041e4d0]]


undefined1 * FUN_0041e2a0(undefined1 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_50 [5];
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b4d9e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  iVar4 = param_2[1] - *param_2 >> 0x1f;
  local_18 = 1;
  if ((param_2[1] - *param_2) / 0x1c + iVar4 == iVar4) {
    *param_1 = 1;
    if (DAT_0125eadc == (int *)0x0) {
      iVar4 = FUN_00aae9af(0x9c);
      local_8 = 1;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00576fe0(iVar4);
      }
      local_8 = local_8 & 0xffffff00;
      FUN_0057ab10(uVar5);
    }
    piVar3 = DAT_0125eadc;
    param_2 = (int *)0x0;
    if (0 < (int)(DAT_0125eadc[0xf] - DAT_0125eadc[0xe] & 0xfffffffcU)) {
      do {
        puVar1 = *(undefined4 **)(piVar3[0xe] + (int)param_2 * 4);
        uVar5 = (**(code **)*puVar1)(local_50);
        local_8 = 2;
        uVar5 = FUN_00988fa0(uVar5);
        local_8._0_1_ = 3;
        FUN_00448aa0(uVar5,0,0xffffffff);
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_20 = 0xf;
        local_24 = 0;
        local_34 = local_34 & 0xffffff00;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        iVar4 = *piVar3;
        local_14 = 0;
        if (0 < (int)(piVar3[1] - iVar4 & 0xfffffffcU)) {
          do {
            local_20 = 0xf;
            local_24 = 0;
            piVar2 = *(int **)(iVar4 + local_14 * 4);
            if ((undefined4 *)piVar2[0xc4] == puVar1) {
              uVar5 = (**(code **)(*piVar2 + 0x18))(local_50);
              local_8 = 4;
              uVar5 = FUN_00988fa0(uVar5);
              local_8._0_1_ = 5;
              FUN_00448aa0(uVar5,0,0xffffffff);
              if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_34);
              }
              local_8 = (uint)local_8._1_3_ << 8;
              local_20 = 0xf;
              local_24 = 0;
              local_34 = local_34 & 0xffffff00;
              if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_50[0]);
              }
            }
            iVar4 = *piVar3;
            local_14 = local_14 + 1;
          } while (local_14 < piVar3[1] - iVar4 >> 2);
        }
        local_20 = 0xf;
        local_24 = 0;
        param_2 = (int *)((int)param_2 + 1);
        if (piVar3[0xf] - piVar3[0xe] >> 2 <= (int)param_2) {
          ExceptionList = local_10;
          return param_1;
        }
      } while( true );
    }
  }
  else {
    *param_1 = 0;
    FUN_00409350("No arguments needed for this command.",0x25);
  }
  ExceptionList = local_10;
  return param_1;
}

