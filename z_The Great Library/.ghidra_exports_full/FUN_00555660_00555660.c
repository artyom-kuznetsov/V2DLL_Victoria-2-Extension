// FUN_00555660 @ 00555660 body=[[00555660, 00555960]]


uint * FUN_00555660(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_005578e0(puVar5,param_3 + -2,param_4);
  puVar7 = puVar5 + 2;
  if (param_2 < puVar5) {
    iVar1 = *(int *)(DAT_012587e4 + 4);
    do {
      if ((*(int *)(*(int *)(iVar1 + puVar5[-1] * 4) + 0x1410) <
           *(int *)(*(int *)(iVar1 + puVar5[1] * 4) + 0x1410)) ||
         (*(int *)(*(int *)(iVar1 + puVar5[1] * 4) + 0x1410) <
          *(int *)(*(int *)(iVar1 + puVar5[-1] * 4) + 0x1410))) break;
      puVar5 = puVar5 + -2;
    } while (param_2 < puVar5);
  }
  puVar8 = puVar7;
  local_8 = puVar7;
  local_c = puVar5;
  puVar4 = puVar5;
  if (puVar7 < param_3) {
    iVar1 = *(int *)(DAT_012587e4 + 4);
    do {
      puVar8 = puVar7;
      local_8 = puVar7;
      if ((*(int *)(*(int *)(iVar1 + puVar7[1] * 4) + 0x1410) <
           *(int *)(*(int *)(iVar1 + puVar5[1] * 4) + 0x1410)) ||
         (*(int *)(*(int *)(iVar1 + puVar5[1] * 4) + 0x1410) <
          *(int *)(*(int *)(iVar1 + puVar7[1] * 4) + 0x1410))) break;
      puVar7 = puVar7 + 2;
      puVar8 = puVar7;
      local_8 = puVar7;
    } while (puVar7 < param_3);
  }
joined_r0x00555764:
  do {
    puVar6 = puVar5;
    if (param_3 <= puVar7) {
joined_r0x005557e7:
      while (puVar10 = puVar8, puVar11 = puVar5, param_2 < puVar5) {
        puVar9 = puVar6 + -2;
        iVar1 = *(int *)(DAT_012587e4 + 4);
        puVar5 = puVar4;
        if (*(int *)(*(int *)(iVar1 + puVar4[1] * 4) + 0x1410) <=
            *(int *)(*(int *)(iVar1 + puVar6[-1] * 4) + 0x1410)) {
          puVar10 = local_8;
          puVar11 = local_c;
          if (*(int *)(*(int *)(iVar1 + puVar4[1] * 4) + 0x1410) <
              *(int *)(*(int *)(iVar1 + puVar6[-1] * 4) + 0x1410)) break;
          uVar2 = puVar4[-2];
          uVar3 = puVar4[-1];
          puVar5 = puVar4 + -2;
          *puVar5 = *puVar9;
          puVar4[-1] = puVar6[-1];
          *puVar9 = uVar2;
          puVar6[-1] = uVar3;
        }
        local_c = local_c + -2;
        puVar4 = puVar5;
        puVar8 = local_8;
        puVar6 = puVar9;
        puVar5 = local_c;
      }
      if (puVar11 == param_2) {
        if (puVar7 == param_3) {
          *param_1 = (uint)puVar4;
          param_1[1] = (uint)puVar10;
          return param_1;
        }
        if (puVar10 != puVar7) {
          uVar2 = puVar4[1];
          uVar3 = *puVar4;
          *puVar4 = *puVar10;
          puVar4[1] = puVar10[1];
          *puVar10 = uVar3;
          puVar10[1] = uVar2;
        }
        uVar2 = *puVar4;
        uVar3 = puVar4[1];
        *puVar4 = *puVar7;
        puVar4[1] = puVar7[1];
        *puVar7 = uVar2;
        puVar7[1] = uVar3;
        puVar7 = puVar7 + 2;
        puVar8 = puVar10 + 2;
        puVar5 = puVar11;
        local_8 = puVar10 + 2;
        puVar4 = puVar4 + 2;
      }
      else {
        puVar5 = puVar11 + -2;
        local_c = puVar5;
        if (puVar7 == param_3) {
          puVar6 = puVar4 + -2;
          if (puVar5 != puVar6) {
            uVar2 = puVar11[-1];
            uVar3 = *puVar5;
            *puVar5 = *puVar6;
            puVar11[-1] = puVar4[-1];
            *puVar6 = uVar3;
            puVar4[-1] = uVar2;
          }
          uVar2 = puVar4[-1];
          uVar3 = *puVar6;
          puVar8 = puVar10 + -2;
          *puVar6 = *puVar8;
          puVar4[-1] = puVar10[-1];
          *puVar8 = uVar3;
          puVar10[-1] = uVar2;
          local_8 = puVar8;
          puVar4 = puVar6;
        }
        else {
          uVar2 = puVar7[1];
          uVar3 = *puVar7;
          *puVar7 = *puVar5;
          puVar7[1] = puVar11[-1];
          *puVar5 = uVar3;
          puVar11[-1] = uVar2;
          puVar7 = puVar7 + 2;
          puVar8 = puVar10;
        }
      }
      goto joined_r0x00555764;
    }
    iVar1 = *(int *)(DAT_012587e4 + 4);
    puVar5 = local_c;
    if (*(int *)(*(int *)(iVar1 + puVar7[1] * 4) + 0x1410) <=
        *(int *)(*(int *)(iVar1 + puVar4[1] * 4) + 0x1410)) {
      puVar6 = local_c;
      local_8 = puVar8;
      if (*(int *)(*(int *)(iVar1 + puVar7[1] * 4) + 0x1410) <
          *(int *)(*(int *)(iVar1 + puVar4[1] * 4) + 0x1410)) goto joined_r0x005557e7;
      uVar2 = puVar8[1];
      uVar3 = *puVar8;
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      puVar8 = puVar8 + 2;
      *puVar7 = uVar3;
      puVar7[1] = uVar2;
    }
    puVar7 = puVar7 + 2;
    local_8 = puVar8;
  } while( true );
}

