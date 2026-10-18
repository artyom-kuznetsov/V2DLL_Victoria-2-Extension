// FUN_00a150e4 @ 00a150e4 body=[[00a150e4, 00a1526f]]


void FUN_00a150e4(void)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int *unaff_ESI;
  float fVar6;
  
  FUN_00a15530(unaff_ESI);
  if (*(char *)(unaff_ESI[0x23] + 0x34) != '\0') goto LAB_00a1525f;
  iVar4 = (**(code **)(*DAT_01258b30 + 0x20))();
  if (iVar4 == unaff_ESI[0x20]) goto LAB_00a1525f;
  unaff_ESI[0x20] = iVar4;
  if (0.01 < (float)iVar4 / (float)unaff_ESI[0x1f] - (float)unaff_ESI[0x3b] / (float)unaff_ESI[0x1f]
     ) {
LAB_00a1517e:
    iVar4 = FUN_00aae9af(0x48);
    *(int *)(unaff_EBP + -0x18) = iVar4;
    *(undefined4 *)(unaff_EBP + -4) = 9;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      if (unaff_ESI[0x1f] < 1) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = (float)unaff_ESI[0x20] / (float)unaff_ESI[0x1f];
      }
      uVar5 = *(undefined4 *)(unaff_ESI[0x23] + 0x6c);
      pcVar1 = *(code **)(*unaff_ESI + 0x2c);
      *(float *)(unaff_EBP + -0x14) = fVar6;
      uVar3 = (*pcVar1)();
      uVar5 = FUN_00a13d50(iVar4,uVar5,*(undefined4 *)(unaff_EBP + -0x14),uVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    (**(code **)(**(int **)(unaff_ESI[0x23] + 0x38) + 0x18))(uVar5);
    unaff_ESI[0x3b] = unaff_ESI[0x20];
  }
  else {
    cVar2 = (**(code **)(*unaff_ESI + 0x2c))();
    if (cVar2 != '\0') goto LAB_00a1517e;
  }
  cVar2 = (**(code **)(*unaff_ESI + 0x2c))();
  if (cVar2 != '\0') {
    uVar5 = (**(code **)(*DAT_01258b30 + 0x1c))();
    iVar4 = FUN_00aae9af(0x3c);
    *(int *)(unaff_EBP + -0x18) = iVar4;
    *(undefined4 *)(unaff_EBP + -4) = 10;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_009d6e30(iVar4,uVar5);
    }
    unaff_ESI[0x3c] = iVar4;
  }
LAB_00a1525f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

