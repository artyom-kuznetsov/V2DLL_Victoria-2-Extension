// FUN_00815120 @ 00815120 body=[[00815120, 0081573a]]


void FUN_00815120(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *unaff_EDI;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 uStack_44;
  float local_40;
  float local_3c;
  undefined4 uStack_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  undefined4 uStack_20;
  float local_1c;
  float local_18;
  undefined4 uStack_14;
  float local_10;
  undefined4 local_c [2];
  
  if (DAT_013f08bc != '\0') {
    FUN_00811590();
    DAT_013f08bc = '\0';
  }
  (**(code **)(**(int **)(*unaff_EDI + 100) + 0xe4))(*(int **)(*unaff_EDI + 100),0xe,0);
  uVar2 = (**(code **)(*(int *)(param_2 + 0x1c) + 0x16c))();
  uVar3 = (**(code **)(*(int *)(param_2 + 0x1c) + 0x174))();
  local_28 = *(float *)(param_1 + 0x340);
  local_30 = *(float *)(param_1 + 0x33c);
  D3DXMatrixTranslation(&local_88,-local_30,0,-local_28);
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0xe8))((int *)unaff_EDI[0x1c],"RiverShader");
  local_c[0] = 0;
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0xfc))((int *)unaff_EDI[0x1c],local_c,0);
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x100))((int *)unaff_EDI[0x1c],0);
  if ((uint)unaff_EDI[0x1f] < 10000) {
    iVar5 = unaff_EDI[0x1f] * 0x2c;
    uStack_14 = *(undefined4 *)(iVar5 + 0x17c + *unaff_EDI);
    iVar5 = *(int *)(iVar5 + 0x180 + *unaff_EDI);
  }
  else {
    iVar5 = 0;
  }
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x78))((int *)unaff_EDI[0x1c],unaff_EDI[0x25],(float)iVar5)
  ;
  if ((uint)unaff_EDI[0x1f] < 10000) {
    iVar6 = unaff_EDI[0x1f] * 0x2c;
    iVar5 = *(int *)(iVar6 + 0x17c + *unaff_EDI);
    local_10 = *(float *)(iVar6 + 0x180 + *unaff_EDI);
  }
  else {
    iVar5 = 0;
  }
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x78))((int *)unaff_EDI[0x1c],unaff_EDI[0x26],(float)iVar5)
  ;
  if ((uint)unaff_EDI[0x1f] < 10000) {
    iVar5 = unaff_EDI[0x1f] * 0x2c;
    uStack_14 = *(undefined4 *)(iVar5 + 0x17c + *unaff_EDI);
    uVar9 = *(uint *)(iVar5 + 0x180 + *unaff_EDI);
  }
  else {
    uVar9 = 0;
  }
  uVar7 = 1;
  uVar8 = uVar7;
  if (1 < uVar9) {
    do {
      uVar8 = 0;
      if (uVar7 == 0) break;
      uVar7 = uVar7 * 2;
      uVar8 = uVar7;
    } while (uVar7 < uVar9);
  }
  fVar1 = (float)(int)uVar8;
  if ((int)uVar8 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x78))((int *)unaff_EDI[0x1c],unaff_EDI[0x27],fVar1);
  if ((uint)unaff_EDI[0x1f] < 10000) {
    iVar5 = unaff_EDI[0x1f] * 0x2c;
    uVar9 = *(uint *)(iVar5 + 0x17c + *unaff_EDI);
    local_10 = *(float *)(iVar5 + 0x180 + *unaff_EDI);
  }
  else {
    uVar9 = 0;
  }
  uVar7 = 1;
  uVar8 = uVar7;
  if (1 < uVar9) {
    do {
      uVar7 = 0;
      if (uVar8 == 0) break;
      uVar7 = uVar8 * 2;
      uVar8 = uVar7;
    } while (uVar7 < uVar9);
  }
  fVar1 = (float)(int)uVar7;
  if ((int)uVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x78))((int *)unaff_EDI[0x1c],unaff_EDI[0x28],fVar1);
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x78))
            ((int *)unaff_EDI[0x1c],unaff_EDI[0x29],(float)*(int *)(unaff_EDI[0x2b] + 0x2abc));
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x78))
            ((int *)unaff_EDI[0x1c],unaff_EDI[0x2a],(float)*(int *)(unaff_EDI[0x2b] + 0x2ac0));
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x98))((int *)unaff_EDI[0x1c],"WorldMatrix",&local_88);
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x98))((int *)unaff_EDI[0x1c],"ViewMatrix",uVar2);
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x98))((int *)unaff_EDI[0x1c],"ProjectionMatrix",uVar3);
  uVar9 = unaff_EDI[0x20];
  if ((uVar9 == 0xffffffff) || (9999 < uVar9)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar9 * 0x2c + 0x15c + *unaff_EDI);
  }
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0xd0))((int *)unaff_EDI[0x1c],&DAT_00e0bce4,uVar2);
  uVar9 = unaff_EDI[0x21];
  if ((uVar9 == 0xffffffff) || (9999 < uVar9)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar9 * 0x2c + 0x15c + *unaff_EDI);
  }
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0xd0))((int *)unaff_EDI[0x1c],&DAT_00e19384,uVar2);
  uVar9 = unaff_EDI[0x1f];
  if ((uVar9 == 0xffffffff) || (9999 < uVar9)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar9 * 0x2c + 0x15c + *unaff_EDI);
  }
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0xd0))((int *)unaff_EDI[0x1c],&DAT_00e1a710,uVar2);
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_4c = DAT_00f092fc;
  local_60 = DAT_00f092fc;
  local_74 = DAT_00f092fc;
  local_88 = DAT_00f092fc;
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x98))
            ((int *)unaff_EDI[0x1c],"AbsoluteWorldMatrix",&local_88);
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x78))((int *)unaff_EDI[0x1c],"vTime",param_3);
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x104))((int *)unaff_EDI[0x1c]);
  uVar9 = 0;
  unaff_EDI[0x2c] = 0;
  if (unaff_EDI[0x11] - unaff_EDI[0x10] >> 2 != 0) {
    uStack_14 = 0xc1200000;
    uStack_20 = 0x42480000;
    param_2 = 0;
    do {
      piVar4 = (int *)(param_2 + unaff_EDI[0x18]);
      local_10 = (float)piVar4[1];
      local_18 = (float)*piVar4;
      local_24 = (float)(piVar4[2] + *piVar4);
      local_1c = (float)(piVar4[3] + piVar4[1]);
      _local_3c = CONCAT44(uStack_20,(float)(piVar4[2] + *piVar4) - local_30);
      _local_48 = CONCAT44(uStack_14,(float)*piVar4 - local_30);
      local_40 = local_10 - local_28;
      local_34 = local_1c - local_28;
      iVar5 = FUN_009ec900(&local_48);
      if (iVar5 != 1) {
        FUN_009f9d50();
        *(uint *)(unaff_EDI[0x2d] + unaff_EDI[0x2c] * 4) = uVar9;
        unaff_EDI[0x2c] = unaff_EDI[0x2c] + 1;
      }
      uVar9 = uVar9 + 1;
      param_2 = param_2 + 0x10;
    } while (uVar9 < (uint)(unaff_EDI[0x11] - unaff_EDI[0x10] >> 2));
  }
  uVar9 = unaff_EDI[0x22];
  if ((uVar9 == 0xffffffff) || (9999 < uVar9)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar9 * 0x2c + 0x15c + *unaff_EDI);
  }
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0xd0))((int *)unaff_EDI[0x1c],&DAT_00e0bce4,uVar2);
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x104))((int *)unaff_EDI[0x1c]);
  iVar5 = 0;
  if (0 < unaff_EDI[0x2c]) {
    do {
      if (*(int *)(unaff_EDI[0x14] + *(int *)(unaff_EDI[0x2d] + iVar5 * 4) * 4) != 0) {
        FUN_009f9d50();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < unaff_EDI[0x2c]);
  }
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x108))((int *)unaff_EDI[0x1c]);
  (**(code **)(*(int *)unaff_EDI[0x1c] + 0x10c))((int *)unaff_EDI[0x1c]);
  (**(code **)(**(int **)(*unaff_EDI + 100) + 0xe4))(*(int **)(*unaff_EDI + 100),7,1);
  (**(code **)(**(int **)(*unaff_EDI + 100) + 0xe4))(*(int **)(*unaff_EDI + 100),0xe,1);
  return;
}

