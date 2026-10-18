// FUN_00423b50 @ 00423b50 body=[[00423b50, 00423ca6] [00423caa, 00423ccb] [00423cd1, 00423d37] [00423d3b, 00423d4f]]


undefined1 * FUN_00423b50(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 local_68 [4];
  uint local_64;
  undefined4 local_54;
  uint local_50;
  undefined1 local_48;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b47c68;
  local_10 = ExceptionList;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  local_8 = 0;
  iVar1 = *param_2;
  ExceptionList = &local_10;
  local_18 = (char *)FUN_00423a50(iVar1);
  if (local_18 == (char *)0x0) {
    local_48 = 0;
    FUN_00409350("Unknown command",0xf);
    *param_1 = local_48;
  }
  else {
    if (*local_18 == '\0') {
      uVar4 = 0x26;
      pcVar3 = "Command available only for developers.";
    }
    else {
      if (*(int *)(local_18 + 0x1c) != 0) {
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00419660((param_2[1] - iVar1) / 0x1c + -1);
        local_14 = 1;
        if (1 < (param_2[1] - *param_2) / 0x1c) {
          do {
            FUN_00a840b0();
            local_14 = local_14 + 1;
          } while (local_14 < (param_2[1] - *param_2) / 0x1c);
        }
        puVar2 = (undefined1 *)(**(code **)(local_18 + 0x1c))(local_68,&local_28);
        local_8 = CONCAT31(local_8._1_3_,2);
        *param_1 = *puVar2;
        *(undefined4 *)(param_1 + 0x18) = 0xf;
        *(undefined4 *)(param_1 + 0x14) = 0;
        param_1[4] = 0;
        FUN_00408ed0(puVar2 + 4,0,0xffffffff);
        if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_64);
        }
        local_50 = 0xf;
        local_54 = 0;
        local_64 = local_64 & 0xffffff00;
        if (local_28 != 0) {
          FUN_00413860();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_28);
        }
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        goto joined_r0x00423cde;
      }
      uVar4 = 0x2b;
      pcVar3 = "Console Error - command has missing action.";
    }
    local_48 = 0;
    FUN_00409350(pcVar3,uVar4);
    *param_1 = local_48;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  FUN_00408ed0(local_44,0,0xffffffff);
joined_r0x00423cde:
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

