// FUN_00a76f70 @ 00a76f70 body=[[00a76f70, 00a77252]]


void FUN_00a76f70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *in_ECX;
  float10 fVar8;
  float10 extraout_ST0;
  int iStack_58;
  float fStack_54;
  int *piStack_50;
  int *piStack_4c;
  
  piStack_4c = (int *)0xa76f85;
  (**(code **)(*in_ECX + 0x6c))();
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    piStack_4c = (int *)0x4;
    piStack_50 = (int *)0xa76f95;
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  piStack_4c = (int *)0xa76fc0;
  fVar8 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  piVar3 = (int *)in_ECX[0x3e];
  in_ECX[0x68] = (int)(((float)fVar8 - (float)in_ECX[0x69]) / (float)in_ECX[0x6a]);
  piStack_4c = (int *)0xa77011;
  FUN_00a77520();
  piVar1 = in_ECX + 100;
  iVar4 = in_ECX[0x65] - in_ECX[100] >> 0x1f;
  if ((in_ECX[0x65] - in_ECX[100]) / 0x34 + iVar4 != iVar4) {
    piStack_50 = (int *)0xa77040;
    piStack_4c = piVar1;
    FUN_00a443f0();
    piStack_4c = (int *)in_ECX[0x50];
    fStack_54 = (float)in_ECX[0x5c];
    iStack_58 = param_5;
    piStack_50 = piVar1;
    (**(code **)(*piVar3 + 0x7c))(param_1,param_2,param_3,param_4);
    if (((in_ECX[0x51] == 5) || (in_ECX[0x51] == 6)) && (0.0 < (float)in_ECX[0x6a])) {
      if ((float)in_ECX[0x6a] * 0.6 < fStack_54) {
        piStack_50 = (int *)((in_ECX[0x65] - *piVar1) / 0x34);
        iStack_58 = 0;
        if (0 < (int)piStack_50) {
          do {
            uVar5 = FUN_00a78530(&iStack_58);
            FUN_004a34d0(in_ECX + 0x6b,uVar5);
            iVar4 = *piVar1;
            iVar6 = iStack_58 * 0x34;
            *(undefined8 *)(iVar4 + iVar6) = 0xc47a000000000000;
            *(undefined4 *)(iVar4 + 8 + iVar6) = 0;
            puVar2 = (undefined8 *)(*piVar1 + 0x10 + iVar6);
            iStack_58 = iStack_58 + 1;
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 1) = 0;
          } while (iStack_58 < (int)piStack_50);
        }
      }
      if ((float)in_ECX[0x6a] < fStack_54) {
        if (DAT_00f20c18 == (undefined4 *)0x0) {
          DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
          if (DAT_00f20c18 == (undefined4 *)0x0) {
            DAT_00f20c18 = (undefined4 *)0x0;
          }
          else {
            *DAT_00f20c18 = &PTR_FUN_00e38b28;
          }
        }
        (**(code **)(*DAT_01258a8c + 0x14))();
        uVar7 = FUN_009b7610();
        piStack_50 = (int *)((float)(uVar7 & 0x7fffffff) * 4.656613e-10);
        in_ECX[0x69] = (int)(float)((float10)(float)piStack_50 * (float10)1.5 + extraout_ST0);
        if ((in_ECX[0x51] == 5) || (in_ECX[0x51] == 6)) {
          fStack_54 = *(float *)in_ECX[0x6c];
          if ((int *)fStack_54 != (int *)in_ECX[0x6c]) {
            do {
              FUN_00a780a0();
              FUN_004a2a40();
            } while (fStack_54 != (float)in_ECX[0x6c]);
          }
          FUN_004a2e00();
        }
      }
    }
  }
  return;
}

