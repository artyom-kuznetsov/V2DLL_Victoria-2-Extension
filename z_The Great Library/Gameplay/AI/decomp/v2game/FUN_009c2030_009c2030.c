// FUN_009c2030 @ 009c2030 body=[[009c2030, 009c262f]]


void FUN_009c2030(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  short *unaff_EDI;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 uStack_20;
  short sStack_1c;
  short sStack_1a;
  undefined1 local_18 [4];
  short sStack_14;
  short sStack_12;
  
  (**(code **)(*(int *)**(undefined4 **)(in_EAX + 0x34) + 0xf4))(local_18);
  iVar4 = (int)sStack_1c;
  fVar2 = (float)iVar4;
  iVar5 = (int)sStack_1a;
  fVar1 = (float)iVar5;
  sStack_12 = (short)(int)(fVar1 * 0.5);
  sStack_14 = (short)(int)(fVar2 * 0.5);
  switch(*(undefined4 *)(in_EAX + 0x2c)) {
  case 0:
    fVar1 = *(float *)(in_EAX + 0x5c);
    fVar3 = *(float *)(in_EAX + 0x58);
    unaff_EDI[1] = -sStack_12;
    *unaff_EDI = (short)(int)(((fVar1 + fVar2) * (float)(int)param_1 + fVar2) * fVar3) - sStack_14;
    return;
  case 1:
    fVar2 = *(float *)(in_EAX + 0x5c);
    fVar3 = *(float *)(in_EAX + 0x58);
    *unaff_EDI = -sStack_14;
    unaff_EDI[1] = (short)(int)(((fVar2 + fVar1) * (float)(int)param_1 + fVar1) * fVar3) - sStack_12
    ;
    return;
  case 2:
    if (*(int *)(in_EAX + 0x3c) == 1) {
      *unaff_EDI = -sStack_14;
      unaff_EDI[1] = -sStack_12;
      return;
    }
    sVar7 = (short)(int)(-*(float *)(in_EAX + 0x5c) * *(float *)(in_EAX + 0x58));
    sVar8 = 0;
    if ((int)param_1 < 1) goto LAB_009c226f;
    fVar10 = (float10)FUN_00414c70((float)(int)param_1 *
                                   (6.2831855 / (float)*(int *)(in_EAX + 0x3c)));
    fVar11 = (float10)FUN_00b35410();
    fVar2 = (float)fVar11 * 0.0;
    fVar1 = (float)fVar10 * (float)(int)sVar7;
    fVar3 = (float)fVar11 * (float)(int)sVar7 + (float)fVar10 * 0.0;
    break;
  case 3:
    iVar4 = *(int *)(in_EAX + 0x3c);
    if (iVar4 == 1) {
      unaff_EDI[1] = -sStack_12;
      *unaff_EDI = -sStack_14;
      return;
    }
    sVar8 = (short)(int)(-*(float *)(in_EAX + 0x5c) * *(float *)(in_EAX + 0x58));
    sVar7 = 0;
    if (((int)param_1 < 1) || (sVar7 = 0, iVar4 < 2)) goto LAB_009c226f;
    fVar10 = (float10)FUN_00414c70((float)(int)param_1 * (-3.1415927 / (float)(iVar4 + -1)));
    fVar11 = (float10)FUN_00b35410();
    fVar1 = (float)fVar10 * 0.0;
    fVar2 = (float)fVar11 * (float)(int)sVar8;
    fVar3 = (float)fVar10 * (float)(int)sVar8 + (float)fVar11 * 0.0;
    break;
  case 4:
    uVar6 = param_1 & 0x80000001;
    bVar9 = uVar6 == 0;
    if ((int)uVar6 < 0) {
      bVar9 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar9) {
      *(uint *)unaff_EDI =
           CONCAT22((sStack_1a + -5) - sStack_12,
                    (short)(int)((float)(int)((float)(((int)param_1 / 2 + 1) * iVar4) *
                                             *(float *)(in_EAX + 0x58)) + *(float *)(in_EAX + 0x5c))
                    - sStack_14);
      return;
    }
    fVar2 = (float)(int)((float)(((int)(param_1 - 1) / 2 + 1) * iVar4 + (int)sStack_14) *
                        *(float *)(in_EAX + 0x58)) + *(float *)(in_EAX + 0x5c);
    goto LAB_009c2449;
  case 5:
    uVar6 = param_1 & 0x80000001;
    bVar9 = uVar6 == 0;
    if ((int)uVar6 < 0) {
      bVar9 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar9) {
      *(uint *)unaff_EDI =
           CONCAT22((sStack_1a + -5) - sStack_12,
                    (short)(int)-((float)(int)((float)(((int)param_1 / 2 + 1) * iVar4) *
                                              *(float *)(in_EAX + 0x58)) + *(float *)(in_EAX + 0x5c)
                                 ) - sStack_14);
      return;
    }
    fVar2 = -((float)(int)((float)(((int)(param_1 - 1) / 2 + 1) * iVar4 + (int)sStack_14) *
                          *(float *)(in_EAX + 0x58)) + *(float *)(in_EAX + 0x5c));
LAB_009c2449:
    *(uint *)unaff_EDI = CONCAT22(-sStack_12,(short)(int)fVar2 - sStack_14);
    return;
  case 6:
    uVar6 = param_1 & 0x80000001;
    bVar9 = uVar6 == 0;
    if ((int)uVar6 < 0) {
      bVar9 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar9) {
      uStack_20 = CONCAT22((short)(int)((float)(int)((float)(((int)(param_1 - 1) / 2 + 1) * iVar5 +
                                                            (int)sStack_12) *
                                                    *(float *)(in_EAX + 0x58)) +
                                       *(float *)(in_EAX + 0x5c)) - sStack_12,-sStack_14);
      *(undefined4 *)unaff_EDI = uStack_20;
      return;
    }
    *(uint *)unaff_EDI =
         CONCAT22((short)(int)((float)(int)((float)(((int)param_1 / 2 + 1) * iVar5) *
                                           *(float *)(in_EAX + 0x58)) + *(float *)(in_EAX + 0x5c)) -
                  sStack_12,(sStack_1c + -5) - sStack_14);
    return;
  default:
    unaff_EDI[1] = -sStack_12;
    *unaff_EDI = -sStack_14;
    return;
  }
  sVar8 = (short)(int)(fVar2 - fVar1);
  sVar7 = (short)(int)fVar3;
LAB_009c226f:
  *(uint *)unaff_EDI = CONCAT22(sVar7 - sStack_12,sVar8 - sStack_14);
  return;
}

