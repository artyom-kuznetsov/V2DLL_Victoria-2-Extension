// FUN_0042d320 @ 0042d320 body=[[0042d320, 0042d443]]


void FUN_0042d320(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 2, puVar4 != param_2)) {
    local_c = param_1;
    do {
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      FUN_00425f80(&local_18);
      FUN_00425f80(&local_1c);
      puVar3 = local_c;
      puVar6 = puVar4;
      if (local_1c < local_18) {
        for (; param_1 != puVar6; puVar6 = puVar6 + -2) {
          *puVar6 = puVar6[-2];
          puVar6[1] = puVar6[-1];
        }
        *param_1 = uVar1;
        param_1[1] = uVar2;
      }
      else {
        FUN_00425f80(&local_10);
        FUN_00425f80(&local_14);
        puVar5 = puVar4;
        if (local_14 < local_10) {
          do {
            puVar6 = puVar3;
            *puVar5 = *puVar6;
            puVar5[1] = puVar6[1];
            FUN_00425f80(&local_10);
            FUN_00425f80(&local_14);
            puVar3 = puVar6 + -2;
            puVar5 = puVar6;
          } while (local_14 < local_10);
        }
        *puVar6 = uVar1;
        puVar6[1] = uVar2;
      }
      local_c = local_c + 2;
      puVar4 = puVar4 + 2;
    } while (puVar4 != param_2);
  }
  return;
}

