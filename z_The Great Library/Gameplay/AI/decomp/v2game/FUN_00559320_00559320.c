// FUN_00559320 @ 00559320 body=[[00559320, 00559476]]


void FUN_00559320(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if ((param_1 != param_2) && (puVar8 = param_1 + 2, puVar8 != param_2)) {
    local_c = param_1;
    do {
      uVar1 = puVar8[1];
      uVar2 = *puVar8;
      iVar5 = FUN_00445060(param_1[1]);
      iVar6 = FUN_00445060(puVar8[1]);
      puVar4 = puVar8;
      if (iVar5 < iVar6) {
        for (; param_1 != puVar4; puVar4 = puVar4 + -2) {
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
        }
        *param_1 = uVar2;
        param_1[1] = uVar1;
      }
      else {
        uVar3 = local_c[1];
        iVar5 = FUN_00445060(puVar8[1]);
        iVar6 = FUN_00445060(uVar3);
        puVar4 = local_c;
        local_8 = puVar8;
        if (iVar6 < iVar5) {
          do {
            puVar7 = puVar4;
            *local_8 = *puVar7;
            local_8[1] = puVar7[1];
            uVar3 = puVar7[-1];
            iVar5 = FUN_00445060(uVar1);
            iVar6 = FUN_00445060(uVar3);
            puVar4 = puVar7 + -2;
            local_8 = puVar7;
          } while (iVar6 < iVar5);
        }
        *local_8 = uVar2;
        local_8[1] = uVar1;
      }
      local_c = local_c + 2;
      puVar8 = puVar8 + 2;
    } while (puVar8 != param_2);
  }
  return;
}

