// FUN_0051f0e0 @ 0051f0e0 body=[[0051f0e0, 0051f29c] [0051f2a0, 0051f2ba] [0051f2be, 0051f2d2]]


undefined1 * FUN_0051f0e0(int param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  char local_7c [32];
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
  puStack_c = &LAB_00b746f0;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_3 + 0x188);
  local_24 = 0;
  ExceptionList = &local_10;
  if (iVar3 != 0) {
    piVar8 = *(int **)(iVar3 + 0x48);
    iVar3 = *(int *)(iVar3 + 0x4c) - (int)piVar8 >> 2;
    local_18 = -1;
    local_20 = 0;
    ExceptionList = &local_10;
    if (0 < iVar3) {
      local_24 = *(int *)(DAT_012588e8 + 0xacc);
      local_1c = iVar3;
      do {
        iVar3 = *(int *)(local_24 + *piVar8 * 4);
        if (*(int *)(iVar3 + 0x158) != 0) {
          iVar2 = *(int *)(*(int *)(iVar3 + 0x118) + DAT_01258720 * 4);
          iVar4 = 0;
          if (0 < *(int *)(iVar2 + 0x20)) {
            iVar4 = *(int *)(iVar2 + 0x24) / 1000;
          }
          if (local_18 < iVar4) {
            local_20 = iVar3;
            local_18 = iVar4;
          }
        }
        piVar8 = piVar8 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      ExceptionList = &local_10;
      if ((local_20 != 0) && (ExceptionList = &local_10, local_20 == param_3)) {
        ExceptionList = &local_10;
        uVar5 = FUN_0050e450();
        iVar3 = FUN_0051f2e0(param_1,uVar5);
        if (iVar3 != 0) {
          local_48 = 0xf;
          local_4c = 0;
          local_5c[0] = local_5c[0] & 0xffffff00;
          local_8 = 0;
          pcVar6 = __itoa(*(int *)(param_1 + 0x160),local_7c,10);
          pcVar7 = pcVar6;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar6,(int)pcVar7 - (int)(pcVar6 + 1));
          local_2c = 0xf;
          local_30 = 0;
          local_40[0] = local_40[0] & 0xffffff00;
          local_8._0_1_ = 2;
          local_8._1_3_ = 0;
          pcVar6 = __itoa(iVar3,local_7c,10);
          pcVar7 = pcVar6;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar6,(int)pcVar7 - (int)(pcVar6 + 1));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_0043ec10(param_2,&DAT_00dfea88,local_40,&DAT_00df8254,local_5c);
          if (local_2c < 0x10) {
            local_2c = 0xf;
            local_30 = 0;
            local_40[0] = local_40[0] & 0xffffff00;
            if (local_48 < 0x10) {
              ExceptionList = local_10;
              return param_2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_5c[0]);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return param_2;
}

