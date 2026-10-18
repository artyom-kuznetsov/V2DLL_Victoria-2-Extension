// FUN_00586cc0 @ 00586cc0 body=[[00586cc0, 00586df5] [00586df9, 00586e17] [00586e1b, 00586e31] [00586e35, 00586e4c] [00586e50, 00586e5f]]


void FUN_00586cc0(void)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 local_88;
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
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cc23;
  local_10 = ExceptionList;
  local_18 = *(undefined4 *)(in_ECX + 0x3c);
  ExceptionList = &local_10;
  *(undefined4 *)
   (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4) + 0x13f0) +
   *(int *)(in_ECX + 0x48) * 4) = *(undefined4 *)(in_ECX + 0x4c);
  if (*(int *)(in_ECX + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(6);
  }
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 1;
    piVar2 = *(int **)(DAT_012588e8 + 0xb24);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    pcVar3 = (char *)(in_ECX + 0x44);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x44),(int)pcVar3 - (in_ECX + 0x45));
    local_8._0_1_ = 2;
    uVar4 = FUN_00988fa0(local_34);
    local_8 = CONCAT31(local_8._1_3_,3);
    (**(code **)(*piVar2 + 0x120))(uVar4,local_50,local_6c,0);
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
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
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

