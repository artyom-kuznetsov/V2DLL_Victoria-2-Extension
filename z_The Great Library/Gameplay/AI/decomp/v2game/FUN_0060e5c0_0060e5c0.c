// FUN_0060e5c0 @ 0060e5c0 body=[[0060e5c0, 0060e61c] [0060e620, 0060e63c] [0060e640, 0060e7dd]]


undefined4 * FUN_0060e5c0(undefined4 *param_1,uint *param_2,uint *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *local_8;
  
  local_8 = param_2 + (((int)param_3 - (int)param_2 >> 4) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1) * 4;
  FUN_00610660(local_8,param_3 + -4,param_4);
  puVar10 = local_8 + 4;
  for (; ((param_2 < local_8 &&
          (uVar3 = local_8[-4], uVar4 = *local_8, uVar3 > uVar4 || uVar4 == uVar3)) &&
         (uVar3 <= uVar4)); local_8 = local_8 + -4) {
  }
  puVar11 = puVar10;
  puVar9 = local_8;
  puVar5 = local_8;
  if (puVar10 < param_3) {
    uVar3 = *local_8;
    do {
      uVar4 = *puVar10;
      puVar11 = puVar10;
      if ((uVar3 >= uVar4 && uVar3 != uVar4) || (uVar3 < uVar4)) break;
      puVar10 = puVar10 + 4;
      puVar11 = puVar10;
    } while (puVar10 < param_3);
  }
joined_r0x0060e639:
  do {
    puVar7 = puVar9;
    if (param_3 <= puVar10) {
joined_r0x0060e680:
      while (param_2 < puVar9) {
        puVar8 = puVar7 + -4;
        puVar6 = puVar5;
        if (*puVar5 <= *puVar8) {
          puVar9 = local_8;
          if (*puVar5 < *puVar8) break;
          uVar1 = *(undefined8 *)(puVar5 + -4);
          uVar2 = *(undefined8 *)(puVar5 + -2);
          puVar6 = puVar5 + -4;
          *(undefined8 *)puVar6 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar5 + -2) = *(undefined8 *)(puVar7 + -2);
          *(undefined8 *)puVar8 = uVar1;
          *(undefined8 *)(puVar7 + -2) = uVar2;
        }
        puVar9 = local_8 + -4;
        puVar5 = puVar6;
        puVar7 = puVar8;
        local_8 = puVar9;
      }
      if (puVar9 == param_2) {
        if (puVar10 == param_3) {
          param_1[1] = puVar11;
          *param_1 = puVar5;
          return param_1;
        }
        if (puVar11 != puVar10) {
          uVar1 = *(undefined8 *)puVar5;
          uVar2 = *(undefined8 *)(puVar5 + 2);
          *(undefined8 *)puVar5 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar11 + 2);
          *(undefined8 *)puVar11 = uVar1;
          *(undefined8 *)(puVar11 + 2) = uVar2;
        }
        uVar1 = *(undefined8 *)puVar5;
        uVar2 = *(undefined8 *)(puVar5 + 2);
        *(undefined8 *)puVar5 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar10 + 2);
        *(undefined8 *)puVar10 = uVar1;
        *(undefined8 *)(puVar10 + 2) = uVar2;
        puVar10 = puVar10 + 4;
        puVar11 = puVar11 + 4;
        puVar5 = puVar5 + 4;
      }
      else {
        local_8 = puVar9 + -4;
        if (puVar10 == param_3) {
          puVar7 = puVar5 + -4;
          if (local_8 != puVar7) {
            uVar1 = *(undefined8 *)local_8;
            uVar2 = *(undefined8 *)(puVar9 + -2);
            *(undefined8 *)local_8 = *(undefined8 *)puVar7;
            *(undefined8 *)(puVar9 + -2) = *(undefined8 *)(puVar5 + -2);
            *(undefined8 *)puVar7 = uVar1;
            *(undefined8 *)(puVar5 + -2) = uVar2;
          }
          uVar1 = *(undefined8 *)puVar7;
          uVar2 = *(undefined8 *)(puVar5 + -2);
          *(undefined8 *)puVar7 = *(undefined8 *)(puVar11 + -4);
          *(undefined8 *)(puVar5 + -2) = *(undefined8 *)(puVar11 + -2);
          *(undefined8 *)(puVar11 + -4) = uVar1;
          *(undefined8 *)(puVar11 + -2) = uVar2;
          puVar11 = puVar11 + -4;
          puVar9 = local_8;
          puVar5 = puVar7;
        }
        else {
          uVar1 = *(undefined8 *)puVar10;
          uVar2 = *(undefined8 *)(puVar10 + 2);
          *(undefined8 *)puVar10 = *(undefined8 *)local_8;
          *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar9 + -2);
          *(undefined8 *)local_8 = uVar1;
          *(undefined8 *)(puVar9 + -2) = uVar2;
          puVar10 = puVar10 + 4;
          puVar9 = local_8;
        }
      }
      goto joined_r0x0060e639;
    }
    if (*puVar10 <= *puVar5) {
      if (*puVar10 < *puVar5) goto joined_r0x0060e680;
      uVar1 = *(undefined8 *)puVar11;
      uVar2 = *(undefined8 *)(puVar11 + 2);
      *(undefined8 *)puVar11 = *(undefined8 *)puVar10;
      *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar10 + 2);
      *(undefined8 *)puVar10 = uVar1;
      puVar11 = puVar11 + 4;
      *(undefined8 *)(puVar10 + 2) = uVar2;
    }
    puVar10 = puVar10 + 4;
  } while( true );
}

