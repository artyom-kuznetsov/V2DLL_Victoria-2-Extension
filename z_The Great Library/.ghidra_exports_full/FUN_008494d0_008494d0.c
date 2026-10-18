// FUN_008494d0 @ 008494d0 body=[[008494d0, 008494fc] [00849500, 0084967d]]


void FUN_008494d0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 2, puVar6 != param_2)) {
    local_10 = param_1;
    do {
      local_1c = *puVar6;
      iVar7 = puVar6[1];
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4) + 0xbe8);
      local_c = *(undefined4 *)(*(int *)(iVar1 + iVar7 * 4) + 0x34);
      local_18 = iVar7;
      local_8 = puVar6;
      uVar3 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + param_1[1] * 4) + 0x34),&param_3,param_1
                           ,0);
      uVar4 = FUN_00936fc0(local_c,&param_3,&local_1c,0);
      puVar2 = local_10;
      puVar5 = local_8;
      if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) <
          (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
        for (; param_1 != puVar5; puVar5 = puVar5 + -2) {
          *puVar5 = puVar5[-2];
          puVar5[1] = puVar5[-1];
        }
        *param_1 = local_1c;
        param_1[1] = iVar7;
      }
      else {
        iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4) + 0xbe8);
        local_c = *(undefined4 *)(*(int *)(iVar1 + iVar7 * 4) + 0x34);
        uVar3 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + local_10[1] * 4) + 0x34),&param_3,
                             local_10,0);
        local_14 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
        uVar3 = FUN_00936fc0(local_c,&param_3,&local_1c,0);
        puVar5 = puVar6;
        if (local_14 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
          do {
            puVar6 = puVar2;
            iVar1 = DAT_012587e4;
            *puVar5 = *puVar6;
            puVar5[1] = puVar6[1];
            iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 4) + param_4 * 4) + 0xbe8);
            local_c = *(undefined4 *)(*(int *)(iVar1 + iVar7 * 4) + 0x34);
            uVar3 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + puVar6[-1] * 4) + 0x34),&param_3,
                                 puVar6 + -2,0);
            uVar4 = FUN_00936fc0(local_c,&param_3,&local_1c,0);
            puVar5 = puVar6;
            puVar2 = puVar6 + -2;
            iVar7 = local_18;
          } while ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) <
                   (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)));
        }
        *puVar6 = local_1c;
        puVar6[1] = iVar7;
      }
      local_10 = local_10 + 2;
      puVar6 = local_8 + 2;
    } while (puVar6 != param_2);
  }
  return;
}

