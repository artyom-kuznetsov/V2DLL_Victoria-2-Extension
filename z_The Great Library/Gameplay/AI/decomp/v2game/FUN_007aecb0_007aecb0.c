// FUN_007aecb0 @ 007aecb0 body=[[007aecb0, 007aeddd] [007aede1, 007aedff] [007aee03, 007aee19] [007aee1d, 007aee3a] [007aee3e, 007aee62]]


void FUN_007aecb0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int in_ECX;
  char *pcVar6;
  char local_a8 [32];
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7a64b;
  local_10 = ExceptionList;
  puVar3 = (undefined4 *)(param_1 + 0x14);
  if (0xf < *(uint *)(param_1 + 0x28)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  ExceptionList = &local_10;
  local_18 = in_ECX;
  uVar4 = FUN_00aaf0c5((int)puVar3 + 0xf);
  *(undefined4 *)(in_ECX + 0xe4) = uVar4;
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    piVar2 = *(int **)(DAT_012588e8 + 0xb24);
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    local_8._0_1_ = 2;
    pcVar5 = __itoa(*(int *)(in_ECX + 0xe4),local_a8,10);
    pcVar6 = pcVar5;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
    local_8._0_1_ = 3;
    uVar4 = FUN_00988fa0(local_6c);
    local_8 = CONCAT31(local_8._1_3_,4);
    (**(code **)(*piVar2 + 0x120))(uVar4,local_34,local_50,0);
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    in_ECX = local_18;
  }
  FUN_007ad210(in_ECX);
  ExceptionList = local_10;
  return;
}

