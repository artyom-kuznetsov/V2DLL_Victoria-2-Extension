// FUN_0046e720 @ 0046e720 body=[[0046e720, 0046e841] [0046e845, 0046e860] [0046e864, 0046e87d] [0046e881, 0046e890]]


void FUN_0046e720(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  char local_88 [32];
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46be0;
  local_10 = ExceptionList;
  iVar2 = *(int *)(DAT_012588e8 + 0xcf4);
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2;
  local_14 = 0;
  if (0 < iVar3) {
    piVar6 = *(int **)(iVar2 + 0x18);
    do {
      if (*(char *)(*piVar6 + 0x90) == '\0') {
        local_14 = local_14 + 1;
      }
      piVar6 = piVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_14 < 100) {
    pcVar7 = "";
  }
  else {
    local_14 = 99;
    pcVar7 = "+";
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  pcVar4 = pcVar7;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(pcVar7,(int)pcVar4 - (int)(pcVar7 + 1));
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  pcVar4 = __itoa(local_14,local_88,10);
  pcVar7 = pcVar4;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar4,(int)pcVar7 - (int)(pcVar4 + 1));
  local_8._0_1_ = 2;
  uVar5 = FUN_00988f20(local_4c);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00408ed0(uVar5,0,0xffffffff);
  FUN_00a5ecc0(uVar5,0);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  ExceptionList = local_10;
  return;
}

