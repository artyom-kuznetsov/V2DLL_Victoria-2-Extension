// FUN_00a28990 @ 00a28990 body=[[00a28990, 00a28ba5]]


void FUN_00a28990(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 ushort param_5,int param_6,int param_7)

{
  code *pcVar1;
  int *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  int *piStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  undefined4 *puStack_c8;
  int *piStack_c4;
  undefined1 auStack_9c [12];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  undefined4 auStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  
  if ((float)param_3[0xf] != (float)in_ECX[0x44]) {
    pcVar1 = *(code **)(*in_ECX + 0x6c);
    in_ECX[0x44] = param_3[0xf];
    piStack_c4 = (int *)0xa289d0;
    (*pcVar1)();
  }
  in_ECX[0x58] = (param_5 - 1) % (uint)in_ECX[0x25];
  if (param_7 == 0) {
    in_ECX[0x58] = 0;
  }
  else if (0 < param_7) {
    in_ECX[0x58] = param_7 + -1;
  }
  puVar3 = auStack_50;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  piStack_14 = DAT_00f092fc;
  uStack_90 = auStack_50[0];
  uStack_8c = auStack_50[1];
  uStack_88 = auStack_50[2];
  uStack_84 = auStack_50[3];
  piStack_c4 = in_ECX + 0x48;
  piStack_cc = &uStack_90;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  piStack_54 = DAT_00f092fc;
  piStack_d0 = (int *)0xa28a65;
  puStack_c8 = piStack_cc;
  D3DXMatrixMultiply();
  piStack_d0 = (int *)auStack_9c;
  piStack_d4 = (int *)in_ECX[0x36];
  (**(code **)(*(int *)in_ECX[0x34] + 0x98))((int *)in_ECX[0x34]);
  if ((param_6 != 0) || (param_6 = in_ECX[0x5a], param_6 != 0)) {
    (**(code **)(*(int *)in_ECX[0x34] + 0xd0))((int *)in_ECX[0x34],in_ECX[0x35],param_6);
    piStack_d4 = DAT_00f092fc;
    piStack_d0 = DAT_00f092fc;
    piStack_cc = DAT_00f092fc;
    puStack_c8 = (undefined4 *)in_ECX[0x5d];
    if ((char)in_ECX[0x33] == '\0') {
      piStack_d4 = (int *)in_ECX[0x2f];
      piStack_d0 = (int *)in_ECX[0x30];
      piStack_cc = (int *)in_ECX[0x31];
      puStack_c8 = (undefined4 *)in_ECX[0x32];
      piStack_c4 = piStack_d4;
    }
    (**(code **)(*(int *)in_ECX[0x34] + 0x88))((int *)in_ECX[0x34],"Color",&piStack_d4);
    (**(code **)(*(int *)in_ECX[0x34] + 0x78))
              ((int *)in_ECX[0x34],"vXOffset",(float)in_ECX[0x59] * (float)in_ECX[0x58]);
    (**(code **)(*(int *)in_ECX[0x34] + 0x104))((int *)in_ECX[0x34]);
    FUN_009f9d50();
  }
  return;
}

