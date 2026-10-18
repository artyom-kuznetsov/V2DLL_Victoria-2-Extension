// FUN_00849310 @ 00849310 body=[[00849310, 0084933d] [00849340, 00849389] [00849390, 0084945c]]


void FUN_00849310(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = in_ECX - param_1 >> 3;
  iVar4 = local_10 - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar4) {
    local_18 = iVar4 * 2 + 2;
    local_14 = param_1 + iVar4 * 8;
    do {
      local_34 = *(undefined4 *)(local_14 + -8);
      iVar1 = local_14 + -8;
      local_30 = *(undefined4 *)(local_14 + -4);
      iVar5 = iVar4 + -1;
      iVar4 = local_18 + -2;
      local_2c = param_2;
      local_28 = param_3;
      bVar6 = iVar4 == local_10;
      local_24 = iVar5;
      local_18 = iVar4;
      local_14 = iVar1;
      if (iVar4 < local_10) {
        local_1c = param_3 * 4;
        local_c = iVar5;
        do {
          iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_1c) + 0xbe8);
          local_20 = *(undefined4 *)(*(int *)(iVar1 + *(int *)(param_1 + 4 + iVar4 * 8) * 4) + 0x34)
          ;
          iVar5 = param_1 + iVar4 * 8;
          uVar2 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + *(int *)(iVar5 + -4) * 4) + 0x34),
                               &local_2c,iVar5 + -8,0);
          uVar3 = FUN_00936fc0(local_20,&local_2c,iVar5,0);
          iVar5 = iVar4;
          if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) <
              (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
            iVar5 = iVar4 + -1;
          }
          *(undefined4 *)(param_1 + local_c * 8) = *(undefined4 *)(param_1 + iVar5 * 8);
          iVar4 = iVar5 * 2 + 2;
          *(undefined4 *)(param_1 + 4 + local_c * 8) = *(undefined4 *)(param_1 + 4 + iVar5 * 8);
          local_c = iVar5;
        } while (iVar4 < local_10);
        bVar6 = iVar4 == local_10;
      }
      iVar4 = local_24;
      local_c = iVar5;
      if (bVar6) {
        *(undefined4 *)(param_1 + iVar5 * 8) = *(undefined4 *)(param_1 + -8 + local_10 * 8);
        local_c = local_10 + -1;
        *(undefined4 *)(param_1 + 4 + iVar5 * 8) = *(undefined4 *)(param_1 + -4 + local_10 * 8);
      }
      FUN_00849c20(param_1,local_c,local_24,&local_34,local_2c,local_28);
    } while (0 < iVar4);
  }
  return;
}

