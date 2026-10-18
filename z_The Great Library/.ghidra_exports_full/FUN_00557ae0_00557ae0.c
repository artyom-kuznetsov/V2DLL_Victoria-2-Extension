// FUN_00557ae0 @ 00557ae0 body=[[00557ae0, 00557be6]]


void FUN_00557ae0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_8;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 2, puVar5 != param_2)) {
    local_8 = param_1;
    do {
      uVar1 = *puVar5;
      iVar2 = puVar5[1];
      iVar3 = *(int *)(DAT_012587e4 + 4);
      puVar4 = puVar5;
      if (*(int *)(*(int *)(iVar3 + puVar5[1] * 4) + 0x1410) <
          *(int *)(*(int *)(iVar3 + param_1[1] * 4) + 0x1410)) {
        for (; param_1 != puVar4; puVar4 = puVar4 + -2) {
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
        }
        *param_1 = uVar1;
        param_1[1] = iVar2;
      }
      else {
        puVar4 = local_8;
        puVar6 = puVar5;
        puVar7 = puVar5;
        if (*(int *)(*(int *)(iVar3 + puVar5[1] * 4) + 0x1410) <
            *(int *)(*(int *)(iVar3 + local_8[1] * 4) + 0x1410)) {
          do {
            puVar7 = puVar4;
            *puVar6 = *puVar7;
            puVar6[1] = puVar7[1];
            puVar4 = puVar7 + -2;
            puVar6 = puVar7;
          } while (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4) + 0x1410) <
                   *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar7[-1] * 4) + 0x1410));
        }
        *puVar7 = uVar1;
        puVar7[1] = iVar2;
      }
      local_8 = local_8 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar5 != param_2);
  }
  return;
}

