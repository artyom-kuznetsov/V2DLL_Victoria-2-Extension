// FUN_004d6ac0 @ 004d6ac0 body=[[004d6ac0, 004d6bff]]


void FUN_004d6ac0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_c;
  
  iVar6 = DAT_012587e4;
  puVar3 = param_1;
  if (param_1 != param_2) {
    while (puVar3 = puVar3 + 2, puVar3 != param_2) {
      uVar1 = *puVar3;
      iVar2 = puVar3[1];
      local_c = -1;
      if (iVar2 != 0) {
        local_c = *(int *)(*(int *)(param_3 + 0x48) +
                          *(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + iVar2 * 4) + 0xe64) + 8)
                          * 4);
      }
      iVar7 = -1;
      if (param_1[1] != 0) {
        iVar7 = *(int *)(*(int *)(param_3 + 0x48) +
                        *(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + param_1[1] * 4) + 0xe64) +
                                8) * 4);
      }
      puVar4 = puVar3;
      if (iVar7 < local_c) {
        for (; param_1 != puVar4; puVar4 = puVar4 + -2) {
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
        }
        *param_1 = uVar1;
        param_1[1] = iVar2;
      }
      else {
        while( true ) {
          iVar7 = -1;
          iVar5 = -1;
          if (iVar2 != 0) {
            iVar7 = *(int *)(*(int *)(param_3 + 0x48) +
                            *(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + iVar2 * 4) + 0xe64) + 8
                                    ) * 4);
            iVar6 = DAT_012587e4;
          }
          if (puVar4[-1] != 0) {
            iVar5 = *(int *)(*(int *)(param_3 + 0x48) +
                            *(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + puVar4[-1] * 4) + 0xe64
                                             ) + 8) * 4);
            iVar6 = DAT_012587e4;
          }
          if (iVar7 <= iVar5) break;
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
          puVar4 = puVar4 + -2;
        }
        *puVar4 = uVar1;
        puVar4[1] = iVar2;
      }
    }
  }
  return;
}

