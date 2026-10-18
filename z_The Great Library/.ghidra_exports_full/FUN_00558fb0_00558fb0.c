// FUN_00558fb0 @ 00558fb0 body=[[00558fb0, 005590fe]]


void FUN_00558fb0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if ((param_1 != param_2) && (puVar7 = param_1 + 2, puVar7 != param_2)) {
    local_c = param_1;
    do {
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      iVar4 = FUN_00445060(param_3);
      iVar5 = FUN_00445060(param_3);
      puVar3 = puVar7;
      if (iVar4 < iVar5) {
        for (; param_1 != puVar3; puVar3 = puVar3 + -2) {
          *puVar3 = puVar3[-2];
          puVar3[1] = puVar3[-1];
        }
        *param_1 = uVar1;
        param_1[1] = uVar2;
      }
      else {
        iVar4 = FUN_00445060(param_3);
        iVar5 = FUN_00445060(param_3);
        puVar3 = local_c;
        local_8 = puVar7;
        if (iVar5 < iVar4) {
          do {
            puVar6 = puVar3;
            *local_8 = *puVar6;
            local_8[1] = puVar6[1];
            iVar4 = FUN_00445060(param_3);
            iVar5 = FUN_00445060(param_3);
            puVar3 = puVar6 + -2;
            local_8 = puVar6;
          } while (iVar5 < iVar4);
        }
        *local_8 = uVar1;
        local_8[1] = uVar2;
      }
      local_c = local_c + 2;
      puVar7 = puVar7 + 2;
    } while (puVar7 != param_2);
  }
  return;
}

