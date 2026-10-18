// FUN_0046f520 @ 0046f520 body=[[0046f520, 0046f5d1] [0046f5d5, 0046f65b] [0046f65f, 0046f668] [0046f670, 0046f6ef] [0046f6f3, 0046f712] [0046f716, 0046f74d]]


undefined4 * FUN_0046f520(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *in_ECX;
  char *pcVar6;
  char local_8c [32];
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b93871;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("news_list_entry",0xf);
  local_8 = 0;
  local_14 = (char *)(**(code **)(*in_ECX + 0x3c))();
  piVar2 = (int *)(**(code **)(*in_ECX + 0x34))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar3 = (**(code **)(*piVar2 + 0x2c))(local_34,local_14);
  param_1[8] = uVar3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  *param_1 = CNewsManagerListEntry::vftable;
  param_1[7] = CNewsManagerListEntry::vftable;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0046f950(&LAB_0046f930,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  param_1[0x24] = param_2;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("label",5);
  local_8 = CONCAT31(local_8._1_3_,8);
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_34);
  param_1[0xb] = uVar3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  param_2 = param_1 + 0xc;
  local_18 = 0;
  do {
    piVar2 = (int *)param_1[8];
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_18 = local_18 + 1;
    local_8._0_1_ = 9;
    pcVar4 = __itoa(local_18,local_8c,10);
    local_14 = pcVar4 + 1;
    pcVar6 = pcVar4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar4,(int)pcVar6 - (int)local_14);
    local_8._0_1_ = 10;
    uVar3 = FUN_00988fa0(local_50);
    local_8._0_1_ = 0xb;
    iVar5 = (**(code **)(*piVar2 + 0x34))(uVar3);
    *param_2 = iVar5;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c);
    }
    local_8 = CONCAT31(local_8._1_3_,7);
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    (**(code **)(*(int *)(*param_2 + 0x54) + 4))(param_1 + 0x10);
    param_2 = param_2 + 1;
  } while (local_18 < 3);
  ExceptionList = local_10;
  return param_1;
}

