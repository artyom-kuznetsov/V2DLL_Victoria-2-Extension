// FUN_007d2e80 @ 007d2e80 body=[[007d2e80, 007d3272]]


void FUN_007d2e80(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  int *piVar4;
  int in_EAX;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  char *pcVar12;
  undefined4 local_c;
  int local_8;
  
  fVar2 = *(float *)(in_EAX + 0x348);
  iVar9 = 0;
  iVar7 = 0;
  local_8 = 0;
  if (0 < (int)(*(int *)(DAT_0125870c + 0x44) - *(int *)(DAT_0125870c + 0x40) & 0xfffffffcU)) {
    piVar10 = *(int **)(DAT_0125870c + 0x40);
    do {
      if ((float)*piVar10 < fVar2) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 1;
      local_8 = iVar9;
    } while (iVar7 < *(int *)(DAT_0125870c + 0x44) - *(int *)(DAT_0125870c + 0x40) >> 2);
  }
  piVar10 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar10 + 0x15c))(piVar10,*(undefined4 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x2c) == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x6bd00) + -4 +
                       *(int *)(param_1 + 0x2c) * 4);
  }
  uVar5 = (**(code **)(*(int *)(param_3 + 0x1c) + 0x16c))();
  uVar6 = (**(code **)(*(int *)(param_3 + 0x1c) + 0x174))();
  if (local_8 == 0) {
    (**(code **)(*piVar10 + 0xe8))(piVar10,"BeachShader");
  }
  else {
    (**(code **)(*piVar10 + 0xe8))(piVar10,"BeachShaderColor");
  }
  local_c = 0;
  (**(code **)(*piVar10 + 0xfc))(piVar10,&local_c,0);
  (**(code **)(*piVar10 + 0x100))(piVar10,0);
  (**(code **)(*piVar10 + 0x98))(piVar10,"ViewMatrix",uVar5);
  (**(code **)(*piVar10 + 0x98))(piVar10,"ProjectionMatrix",uVar6);
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((uVar3 == 0xffffffff) || (9999 < uVar3)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(uVar3 * 0x2c + 0x15c + *(int *)(param_1 + 4));
  }
  (**(code **)(*piVar10 + 0xd0))(piVar10,&DAT_00e0bce4,uVar5);
  if (local_8 == 0) {
    uVar3 = *(uint *)(param_1 + 0x34);
    if ((uVar3 == 0xffffffff) || (9999 < uVar3)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(uVar3 * 0x2c + 0x15c + *(int *)(param_1 + 4));
    }
    (**(code **)(*piVar10 + 0xd0))(piVar10,&DAT_00e19384,uVar5);
    pcVar8 = *(code **)(*piVar10 + 0x78);
    pcVar12 = "vWaterHeight";
    uVar5 = DAT_00f176e0;
  }
  else {
    (**(code **)(*piVar10 + 0x78))(piVar10,"vWaterHeight",DAT_00f17a20);
    uVar3 = *(uint *)(param_1 + 0x3c);
    if ((uVar3 == 0xffffffff) || (9999 < uVar3)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(uVar3 * 0x2c + 0x15c + *(int *)(param_1 + 4));
    }
    pcVar8 = *(code **)(*piVar10 + 0xd0);
    pcVar12 = "tex1";
  }
  (*pcVar8)(piVar10,pcVar12,uVar5);
  uVar3 = *(uint *)(param_1 + 0x38);
  if ((uVar3 == 0xffffffff) || (9999 < uVar3)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(uVar3 * 0x2c + 0x15c + *(int *)(param_1 + 4));
  }
  (**(code **)(*piVar10 + 0xd0))(piVar10,&DAT_00e1939c,uVar5);
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  fVar11 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  (**(code **)(*piVar10 + 0x78))(piVar10,"vTime",(float)fVar11);
  (**(code **)(*piVar10 + 0x78))(piVar10,"vCameraHeight",fVar2);
  iVar7 = *param_4;
  param_3 = 0;
  if (0 < (int)(param_4[1] - iVar7 & 0xfffffffcU)) {
    do {
      iVar7 = *(int *)(iVar7 + param_3 * 4);
      iVar9 = iVar7 * 0x24;
      if ((*(int *)(*(int *)(param_1 + 0x24) + 0xc + iVar9) != 0) ||
         (*(int *)(*(int *)(param_1 + 0x24) + 0x10 + iVar9) != 0)) {
        iVar7 = iVar7 * 0x3c0;
        (**(code **)(*piVar10 + 0x98))
                  (piVar10,"WorldMatrix",iVar7 + 0x17c + *(int *)(param_2 + 0x19c));
        (**(code **)(*piVar10 + 0x98))
                  (piVar10,"AbsoluteWorldMatrix",iVar7 + 0x13c + *(int *)(param_2 + 0x19c));
        (**(code **)(*piVar10 + 0x104))(piVar10);
        local_8 = *(int *)(iVar9 + 0xc + *(int *)(param_1 + 0x24));
        puVar1 = (undefined4 *)(iVar9 + *(int *)(param_1 + 0x24));
        piVar4 = *(int **)(*(int *)(param_1 + 4) + 100);
        iVar7 = *(int *)(param_1 + 0x20);
        if (puVar1[7] != 0) {
          (**(code **)(*piVar4 + 0x164))(piVar4,puVar1[7]);
        }
        (**(code **)(*piVar4 + 400))(piVar4,0,*puVar1,0,puVar1[6]);
        (**(code **)(*piVar4 + 0x1a0))(piVar4,*(undefined4 *)(iVar7 + 4));
        (**(code **)(*piVar4 + 0x148))
                  (piVar4,4,0,0,puVar1[3],0,(((int)(local_8 + (local_8 >> 0x1f & 3U)) >> 2) * 6) / 3
                  );
      }
      iVar7 = *param_4;
      param_3 = param_3 + 1;
    } while (param_3 < param_4[1] - iVar7 >> 2);
  }
  (**(code **)(*piVar10 + 0x108))(piVar10);
  (**(code **)(*piVar10 + 0x10c))(piVar10);
  return;
}

