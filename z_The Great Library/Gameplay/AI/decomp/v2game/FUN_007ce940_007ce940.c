// FUN_007ce940 @ 007ce940 body=[[007ce940, 007ce9cb] [007ce9d0, 007cea36]]


void FUN_007ce940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int local_14;
  undefined4 *local_10;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 1;
    if (puVar5 != param_2) {
      local_14 = (int)puVar5 - (int)param_1;
      do {
        uVar1 = *puVar5;
        puVar3 = (uint *)FUN_007c7d90();
        puVar4 = (uint *)FUN_007c7d90();
        local_10 = puVar5;
        if (((int)puVar3[1] < (int)puVar4[1]) ||
           (((int)puVar3[1] <= (int)puVar4[1] && (*puVar3 <= *puVar4)))) {
          while( true ) {
            uVar2 = local_10[-1];
            puVar3 = (uint *)FUN_007c7d90();
            puVar4 = (uint *)FUN_007c7d90();
            if (((int)puVar3[1] < (int)puVar4[1]) ||
               (((int)puVar3[1] <= (int)puVar4[1] && (*puVar3 <= *puVar4)))) break;
            *local_10 = uVar2;
            local_10 = local_10 + -1;
          }
          *local_10 = uVar1;
        }
        else {
          FID_conflict__memcpy(puVar5 + (1 - (local_14 >> 2)),param_1,(local_14 >> 2) * 4);
          *param_1 = uVar1;
        }
        local_14 = local_14 + 4;
        puVar5 = puVar5 + 1;
      } while (puVar5 != param_2);
    }
  }
  return;
}

