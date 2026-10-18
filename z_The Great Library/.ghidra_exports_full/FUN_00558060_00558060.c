// FUN_00558060 @ 00558060 body=[[00558060, 00558154]]


void FUN_00558060(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 1;
    if (puVar5 != param_2) {
      local_10 = 4 - (int)param_1;
      do {
        uVar1 = *puVar5;
        local_c = puVar5;
        local_8 = (int *)FUN_004468a0(local_1c);
        piVar2 = (int *)FUN_004468a0(local_20);
        if (*local_8 < *piVar2) {
          iVar3 = local_10 + -4 + (int)puVar5 >> 2;
          FID_conflict__memcpy(puVar5 + (1 - iVar3),param_1,iVar3 * 4);
          *param_1 = uVar1;
          local_c = puVar5;
        }
        else {
          local_8 = (int *)FUN_004468a0(local_14);
          piVar2 = (int *)FUN_004468a0(local_18);
          puVar4 = puVar5;
          if (*local_8 < *piVar2) {
            do {
              puVar5 = puVar4 + -1;
              *puVar4 = *puVar5;
              local_8 = (int *)FUN_004468a0(local_14);
              piVar2 = (int *)FUN_004468a0(local_18);
              puVar4 = puVar5;
            } while (*local_8 < *piVar2);
          }
          *puVar5 = uVar1;
        }
        puVar5 = local_c + 1;
      } while (puVar5 != param_2);
    }
  }
  return;
}

