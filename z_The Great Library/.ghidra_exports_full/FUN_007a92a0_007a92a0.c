// FUN_007a92a0 @ 007a92a0 body=[[007a92a0, 007a931f] [007a9323, 007a9370] [007a9374, 007a93c7] [007a93d0, 007a94a2] [007a94a6, 007a9590] [007a9594, 007a95f2] [007a95f6, 007a9625]]


void FUN_007a92a0(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  char local_70 [4];
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  int *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43399;
  local_10 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("tech_group",10);
  local_8 = 0;
  iVar6 = *DAT_01258a80;
  uVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
  uVar4 = (**(code **)(iVar6 + 0x2c))(local_50,uVar4);
  local_8 = 0xffffffff;
  *param_1 = uVar4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("tech_offset",0xb);
  local_8 = 1;
  local_28 = (**(code **)(*DAT_01258a80 + 0x48))(local_50);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  iVar6 = param_1[6];
  uVar8 = iVar6 - param_1[5] >> 2;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_24 = 0;
  if (uVar8 < param_2) {
    FUN_0043cb20(param_1 + 5,iVar6,&local_24);
  }
  else if (param_2 < uVar8) {
    FUN_0054ab90(param_1 + 5,param_1[5] + param_2 * 4,iVar6);
  }
  local_18 = 0;
  if (0 < (int)param_2) {
    do {
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      FUN_00409350("tech_window",0xb);
      local_8 = 2;
      iVar6 = *DAT_01258a80;
      local_1c = DAT_01258a80;
      uVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
      piVar5 = (int *)(**(code **)(iVar6 + 0x2c))(local_8c,uVar4);
      ppiVar2 = (int **)param_1[2];
      local_1c = piVar5;
      if (&local_1c < ppiVar2) {
        ppiVar3 = (int **)param_1[1];
        if (&local_1c < ppiVar3) goto LAB_007a946b;
        if (ppiVar2 == (int **)param_1[3]) {
          FUN_007b94a0();
        }
        if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[2] =
               *(undefined4 *)(param_1[1] + ((int)&local_1c - (int)ppiVar3 >> 2) * 4);
        }
      }
      else {
LAB_007a946b:
        if (ppiVar2 == (int **)param_1[3]) {
          FUN_007b94a0();
        }
        if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[2] = piVar5;
        }
      }
      param_1[2] = param_1[2] + 4;
      local_8 = 0xffffffff;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c[0]);
      }
      local_1c = *(int **)(local_28 + 0x68);
      uVar4 = *(undefined4 *)(local_28 + 100);
      local_30 = *(undefined4 *)(local_28 + 0x68);
      local_34 = uVar4;
      iVar6 = (**(code **)(**(int **)(param_1[1] + -4 + ((int)(param_1[2] - param_1[1]) >> 2) * 4) +
                          0x60))(local_2c);
      local_24 = CONCAT22(*(short *)(iVar6 + 2) * (short)local_18 + (short)local_30,(short)uVar4);
      (**(code **)(**(int **)(param_1[1] + -4 + ((int)(param_1[2] - param_1[1]) >> 2) * 4) + 0x18))
                (local_24);
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      local_8 = 3;
      pcVar7 = __itoa(local_18,local_70,10);
      pcVar9 = pcVar7;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
      local_8 = 4;
      (**(code **)(*(int *)*param_1 + 0xbc))
                (local_8c,*(undefined4 *)
                           (param_1[1] + -4 + ((int)(param_1[2] - param_1[1]) >> 2) * 4));
      local_8 = 0xffffffff;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c[0]);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350("start_research",0xe);
      local_8 = 5;
      iVar6 = (**(code **)(**(int **)(param_1[1] + -4 + ((int)(param_1[2] - param_1[1]) >> 2) * 4) +
                          0x34))(local_6c);
      (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_3);
      local_8 = 0xffffffff;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      local_18 = local_18 + 1;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
    } while (local_18 < (int)param_2);
  }
  ExceptionList = local_10;
  return;
}

