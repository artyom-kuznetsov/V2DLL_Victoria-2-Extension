// FUN_00a2c610 @ 00a2c610 body=[[00a2c610, 00a2c656] [00a2c660, 00a2c6cb] [00a2c6cf, 00a2c70a] [00a2c70e, 00a2c820]]


void FUN_00a2c610(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  int *unaff_ESI;
  char local_70 [32];
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e568;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = (**(code **)(*unaff_ESI + 0x34))();
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  local_18 = (undefined4 *)(param_1 + 0x8c);
  local_14 = 0;
  do {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8 = 0;
    pcVar3 = __itoa(local_14,local_70,10);
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    local_8 = 1;
    FUN_00988fa0(local_34);
    local_8 = CONCAT31(local_8._1_3_,3);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    uVar2 = (**(code **)(*unaff_ESI + 0x24))();
    local_8 = 0xffffffff;
    *local_18 = uVar2;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
  } while (local_14 < 4);
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x28))();
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  uVar2 = (**(code **)(*unaff_ESI + 0x24))();
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  ExceptionList = local_10;
  return;
}

