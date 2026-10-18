// FUN_007ae990 @ 007ae990 body=[[007ae990, 007ae9e7] [007ae9f0, 007aeb7e] [007aeb82, 007aeba1] [007aeba5, 007aebbc] [007aebc0, 007aebde] [007aebe2, 007aec07]]


int FUN_007ae990(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char local_b4 [32];
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9120b;
  local_10 = ExceptionList;
  iVar7 = *(int *)(in_ECX + 0xec) - *(int *)(in_ECX + 0xe8);
  iVar6 = iVar7 / 0x24;
  local_1c = 0;
  if (iVar6 < 1) {
    return iVar7 * 0x38e38e39;
  }
  local_20 = 0;
  ExceptionList = &local_10;
  local_24 = iVar6;
  local_18 = in_ECX;
  do {
    iVar7 = local_20;
    cVar3 = (**(code **)(*(int *)(*(int *)(local_20 + *(int *)(in_ECX + 0xe8)) + 0x18) + 0x94))
                      (param_1);
    iVar9 = iVar7;
    if (cVar3 != '\0') {
      iVar1 = *(int *)(in_ECX + 0xe8);
      iVar10 = *(int *)(iVar7 + 8 + iVar1) - *(int *)(iVar7 + 4 + iVar1) >> 2;
      iVar11 = 0;
      iVar9 = local_20;
      in_ECX = local_18;
      iVar6 = local_24;
      if (0 < iVar10) {
        do {
          cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4 + iVar1) + iVar11 * 4) + 0x18) +
                              0x94))(param_1);
          iVar9 = local_18;
          iVar6 = DAT_012588e8;
          if (cVar3 != '\0') {
            *(undefined4 *)(local_18 + 0x5c) =
                 *(undefined4 *)
                  (*(int *)(*(int *)(local_18 + 0xe8) + 0x14 + local_1c * 0x24) + iVar11 * 4);
            if (*(char *)(iVar6 + 0xd11) != '\0') {
              local_48 = 0xf;
              local_4c = 0;
              local_5c[0] = local_5c[0] & 0xffffff00;
              FUN_00409350(&DAT_00ded94d,0);
              local_8 = 0;
              local_64 = 0xf;
              local_68 = 0;
              local_78[0] = local_78[0] & 0xffffff00;
              FUN_00409350(&DAT_00ded94d,0);
              piVar2 = *(int **)(DAT_012588e8 + 0xb24);
              local_2c = 0xf;
              local_30 = 0;
              local_40[0] = local_40[0] & 0xffffff00;
              local_8._0_1_ = 2;
              pcVar4 = __itoa(*(int *)(*(int *)(iVar9 + 0x5c) + 0x2e4),local_b4,10);
              pcVar8 = pcVar4;
              do {
                cVar3 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar3 != '\0');
              FUN_00409350(pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
              local_8._0_1_ = 3;
              uVar5 = FUN_00988fa0(local_40);
              local_8 = CONCAT31(local_8._1_3_,4);
              (**(code **)(*piVar2 + 0x120))(uVar5,local_78,local_5c,0);
              if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_94);
              }
              local_80 = 0xf;
              local_84 = 0;
              local_94 = local_94 & 0xffffff00;
              if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_40[0]);
              }
              local_2c = 0xf;
              local_30 = 0;
              local_40[0] = local_40[0] & 0xffffff00;
              if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_78[0]);
              }
              local_8 = 0xffffffff;
              local_64 = 0xf;
              local_68 = 0;
              local_78[0] = local_78[0] & 0xffffff00;
              if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_5c[0]);
              }
              local_48 = 0xf;
              local_4c = 0;
              local_5c[0] = local_5c[0] & 0xffffff00;
            }
            iVar6 = FUN_007aee70(local_18);
            ExceptionList = local_10;
            return iVar6;
          }
          iVar11 = iVar11 + 1;
          iVar9 = local_20;
          in_ECX = local_18;
          iVar6 = local_24;
        } while (iVar11 < iVar10);
      }
    }
    local_1c = local_1c + 1;
    local_20 = iVar9 + 0x24;
    if (iVar6 <= local_1c) {
      ExceptionList = local_10;
      return local_1c;
    }
  } while( true );
}

