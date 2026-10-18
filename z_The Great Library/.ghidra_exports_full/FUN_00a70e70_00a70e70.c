// FUN_00a70e70 @ 00a70e70 body=[[00a70e70, 00a70f07] [00a70f0b, 00a70f58] [00a70f5c, 00a7117d] [00a71181, 00a7119d] [00a711a1, 00a711c0] [00a711c4, 00a711da]]


void FUN_00a70e70(void)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  undefined1 auStack_94 [4];
  int local_90;
  short sStack_8c;
  short sStack_8a;
  int *local_88;
  int local_84;
  int local_80;
  short sStack_7c;
  short sStack_7a;
  undefined4 uStack_78;
  int iStack_74;
  uint local_70;
  uint *local_6c;
  int iStack_68;
  int iStack_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 uStack_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b4dfb0;
  pvStack_14 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_c = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &pvStack_14;
  local_84 = in_ECX;
  FUN_00409350("sprites",7);
  local_c._0_1_ = 1;
  FUN_00a71320(&local_70,local_50);
  local_c._0_1_ = 0;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if ((*local_6c <= local_70) && (local_70 < local_6c[1])) {
    FUN_00a8bc80(local_70 + 0x1c);
    local_c._0_1_ = 2;
    FUN_00408ed0(local_50,0,0xffffffff);
    local_c._0_1_ = 0;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
  }
  local_c._0_1_ = 0;
  FUN_00989510(&local_60,0x3b);
  local_c = CONCAT31(local_c._1_3_,3);
  local_90 = 0;
  if (0 < ((int)local_5c - (int)local_60) / 0x1c) {
    local_80 = 0;
    do {
      piVar4 = (int *)FUN_00996520((undefined1 *)(local_80 + (int)local_60),0,&DAT_00f0ffd8);
      local_88 = piVar4;
      (**(code **)(*piVar4 + 0x74))(*(undefined4 *)(in_ECX + 0xa0));
      (**(code **)(**(int **)(in_ECX + 0xa0) + 0xd8))(&local_80);
      (**(code **)(*piVar4 + 0xd8))(auStack_94);
      if ((0 < sStack_8c) && (0 < sStack_8a)) {
        local_70 = (uint)sStack_8a;
        iVar5 = (int)sStack_7a / (int)local_70;
        uStack_78 = 0;
        iStack_74 = local_90 / iVar5;
        iStack_68 = (((int)local_5c - (int)local_60) / 0x1c) / iVar5;
        if (iStack_68 + 1 < 2) {
          iStack_68 = 0;
        }
        else {
          iStack_68 = ((int)sStack_7c - (int)sStack_8c) / iStack_68;
        }
        iStack_68 = iStack_68 * iStack_74;
        iStack_64 = local_70 * ((iVar5 - local_90 % iVar5) + -1);
        (**(code **)(*piVar4 + 0xd0))(&iStack_68);
        (**(code **)(*piVar4 + 0x34))();
        (**(code **)(*piVar4 + 0x5c))(1);
        in_ECX = local_84;
        ppiVar1 = *(int ***)(local_84 + 0x164);
        if (&local_88 < ppiVar1) {
          ppiVar2 = *(int ***)(local_84 + 0x160);
          if (&local_88 < ppiVar2) goto LAB_00a71105;
          if (ppiVar1 == *(int ***)(local_84 + 0x168)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(in_ECX + 0x164) != (undefined4 *)0x0) {
            **(undefined4 **)(in_ECX + 0x164) =
                 *(undefined4 *)
                  (*(int *)(in_ECX + 0x160) + ((int)&local_88 - (int)ppiVar2 >> 2) * 4);
          }
        }
        else {
LAB_00a71105:
          if (ppiVar1 == *(int ***)(local_84 + 0x168)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(in_ECX + 0x164) != (undefined4 *)0x0) {
            **(undefined4 **)(in_ECX + 0x164) = piVar4;
          }
        }
        *(int *)(in_ECX + 0x164) = *(int *)(in_ECX + 0x164) + 4;
      }
      local_90 = local_90 + 1;
      local_80 = local_80 + 0x1c;
    } while (local_90 < ((int)local_5c - (int)local_60) / 0x1c);
  }
  puVar3 = local_60;
  if (local_60 == (undefined4 *)0x0) {
    local_60 = (undefined4 *)0x0;
    local_5c = (undefined4 *)0x0;
    uStack_58 = 0;
    if (local_20 < 0x10) {
      ExceptionList = pvStack_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  while( true ) {
    if (puVar3 == local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60);
    }
    if (0xf < (uint)puVar3[5]) break;
    puVar3[5] = 0xf;
    puVar3[4] = 0;
    *(undefined1 *)puVar3 = 0;
    puVar3 = puVar3 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar3);
}

