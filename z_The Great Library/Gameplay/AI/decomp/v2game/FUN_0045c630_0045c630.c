// FUN_0045c630 @ 0045c630 body=[[0045c630, 0045c67c] [0045c680, 0045c8e7]]


undefined4 *
FUN_0045c630(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_8;
  
  local_8 = (undefined8 *)((int)param_2 + (((int)param_3 - (int)param_2) / 0x28) * 0x14);
  FUN_0045ccd0(local_8,(int)param_3 + -0x14,param_4);
  puVar8 = (undefined8 *)((int)local_8 + 0x14);
  for (; param_2 < local_8; local_8 = (undefined8 *)((int)local_8 + -0x14)) {
    if ((*(int *)(local_8 + 1) < *(int *)((int)local_8 + -0xc)) ||
       (*(int *)((int)local_8 + -0xc) < *(int *)(local_8 + 1))) break;
  }
  puVar9 = puVar8;
  puVar10 = local_8;
  puVar4 = local_8;
  if (puVar8 < param_3) {
    do {
      puVar9 = puVar8;
      if ((*(int *)(local_8 + 1) < *(int *)(puVar8 + 1)) ||
         (*(int *)(puVar8 + 1) < *(int *)(local_8 + 1))) break;
      puVar8 = (undefined8 *)((int)puVar8 + 0x14);
      puVar9 = puVar8;
    } while (puVar8 < param_3);
  }
joined_r0x0045c6ba:
  do {
    puVar6 = puVar10;
    if (param_3 <= puVar8) {
joined_r0x0045c714:
      while (param_2 < puVar10) {
        puVar7 = (undefined8 *)((int)puVar6 + -0x14);
        puVar5 = puVar4;
        if (*(int *)((int)puVar6 + -0xc) <= *(int *)(puVar4 + 1)) {
          puVar10 = local_8;
          if (*(int *)((int)puVar6 + -0xc) < *(int *)(puVar4 + 1)) break;
          uVar1 = *(undefined8 *)((int)puVar4 + -0x14);
          uVar2 = *(undefined8 *)((int)puVar4 + -0xc);
          uVar3 = *(undefined4 *)((int)puVar4 + -4);
          puVar5 = (undefined8 *)((int)puVar4 + -0x14);
          *puVar5 = *puVar7;
          *(undefined8 *)((int)puVar4 + -0xc) = *(undefined8 *)((int)puVar6 + -0xc);
          *(undefined4 *)((int)puVar4 + -4) = *(undefined4 *)((int)puVar6 + -4);
          *puVar7 = uVar1;
          *(undefined8 *)((int)puVar6 + -0xc) = uVar2;
          *(undefined4 *)((int)puVar6 + -4) = uVar3;
        }
        puVar10 = (undefined8 *)((int)local_8 + -0x14);
        puVar4 = puVar5;
        puVar6 = puVar7;
        local_8 = puVar10;
      }
      if (puVar10 == param_2) {
        if (puVar8 == param_3) {
          param_1[1] = puVar9;
          *param_1 = puVar4;
          return param_1;
        }
        if (puVar9 != puVar8) {
          uVar1 = *puVar4;
          uVar2 = puVar4[1];
          uVar3 = *(undefined4 *)(puVar4 + 2);
          *puVar4 = *puVar9;
          puVar4[1] = puVar9[1];
          *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar9 + 2);
          *puVar9 = uVar1;
          puVar9[1] = uVar2;
          *(undefined4 *)(puVar9 + 2) = uVar3;
        }
        uVar3 = *(undefined4 *)(puVar4 + 2);
        uVar1 = *puVar4;
        uVar2 = puVar4[1];
        *puVar4 = *puVar8;
        puVar4[1] = puVar8[1];
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar8 + 2);
        *puVar8 = uVar1;
        puVar8[1] = uVar2;
        *(undefined4 *)(puVar8 + 2) = uVar3;
        puVar8 = (undefined8 *)((int)puVar8 + 0x14);
        puVar9 = (undefined8 *)((int)puVar9 + 0x14);
        puVar4 = (undefined8 *)((int)puVar4 + 0x14);
      }
      else {
        local_8 = (undefined8 *)((int)puVar10 + -0x14);
        if (puVar8 == param_3) {
          puVar6 = (undefined8 *)((int)puVar4 + -0x14);
          if (local_8 != puVar6) {
            uVar3 = *(undefined4 *)((int)puVar10 + -4);
            uVar1 = *local_8;
            uVar2 = *(undefined8 *)((int)puVar10 + -0xc);
            *local_8 = *puVar6;
            *(undefined8 *)((int)puVar10 + -0xc) = *(undefined8 *)((int)puVar4 + -0xc);
            *(undefined4 *)((int)puVar10 + -4) = *(undefined4 *)((int)puVar4 + -4);
            *puVar6 = uVar1;
            *(undefined8 *)((int)puVar4 + -0xc) = uVar2;
            *(undefined4 *)((int)puVar4 + -4) = uVar3;
          }
          uVar3 = *(undefined4 *)((int)puVar4 + -4);
          uVar1 = *puVar6;
          uVar2 = *(undefined8 *)((int)puVar4 + -0xc);
          *puVar6 = *(undefined8 *)((int)puVar9 - 0x14);
          *(undefined8 *)((int)puVar4 + -0xc) = *(undefined8 *)((int)puVar9 - 0xc);
          *(undefined4 *)((int)puVar4 + -4) = *(undefined4 *)((int)puVar9 - 4);
          *(undefined8 *)((int)puVar9 - 0x14U) = uVar1;
          *(undefined8 *)((int)puVar9 - 0xc) = uVar2;
          *(undefined4 *)((int)puVar9 - 4) = uVar3;
          puVar9 = (undefined8 *)((int)puVar9 - 0x14U);
          puVar10 = local_8;
          puVar4 = puVar6;
        }
        else {
          uVar3 = *(undefined4 *)(puVar8 + 2);
          uVar1 = *puVar8;
          uVar2 = puVar8[1];
          *puVar8 = *local_8;
          puVar8[1] = *(undefined8 *)((int)puVar10 + -0xc);
          *(undefined4 *)(puVar8 + 2) = *(undefined4 *)((int)puVar10 + -4);
          *local_8 = uVar1;
          *(undefined8 *)((int)puVar10 + -0xc) = uVar2;
          *(undefined4 *)((int)puVar10 + -4) = uVar3;
          puVar8 = (undefined8 *)((int)puVar8 + 0x14);
          puVar10 = local_8;
        }
      }
      goto joined_r0x0045c6ba;
    }
    if (*(int *)(puVar4 + 1) <= *(int *)(puVar8 + 1)) {
      if (*(int *)(puVar4 + 1) < *(int *)(puVar8 + 1)) goto joined_r0x0045c714;
      uVar3 = *(undefined4 *)(puVar9 + 2);
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      *puVar9 = *puVar8;
      puVar9[1] = puVar8[1];
      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar8 + 2);
      *puVar8 = uVar1;
      puVar8[1] = uVar2;
      puVar9 = (undefined8 *)((int)puVar9 + 0x14);
      *(undefined4 *)(puVar8 + 2) = uVar3;
    }
    puVar8 = (undefined8 *)((int)puVar8 + 0x14);
  } while( true );
}

