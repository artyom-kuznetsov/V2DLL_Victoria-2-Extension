// FUN_00475f40 @ 00475f40 body=[[00475f40, 00475fbc] [00475fc0, 0047608b]]


undefined4 FUN_00475f40(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  uint *unaff_EDI;
  float10 fVar6;
  double dVar7;
  double local_1c;
  undefined8 local_14;
  int *local_8;
  
  local_8 = (int *)FUN_009c7290();
  iVar1 = FUN_009c7870(1);
  if (iVar1 < 0) {
    return 0;
  }
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  fVar6 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  dVar7 = (double)fVar6;
  pdVar5 = (double *)*unaff_EDI;
  iVar2 = (int)(unaff_EDI[1] - (int)pdVar5) >> 4;
  iVar4 = 0;
  if (0 < iVar2) {
    pdVar3 = pdVar5 + 1;
    do {
      if (*(int *)pdVar3 == iVar1) {
        pdVar3 = pdVar5 + iVar4 * 2;
        if (pdVar3 != (double *)0x0) {
          if (dVar7 < (double)((float)param_2 / 1000.0) + *pdVar3) {
            return 1;
          }
          *pdVar3 = dVar7;
          local_14 = dVar7;
          goto LAB_00476077;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      pdVar3 = pdVar3 + 2;
    } while (iVar4 < iVar2);
  }
  pdVar3 = (double *)unaff_EDI[1];
  local_14 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),iVar1);
  local_1c = dVar7;
  if ((&local_1c < pdVar3) && (pdVar5 <= &local_1c)) {
    if (pdVar3 == (double *)unaff_EDI[2]) {
      FUN_00815de0();
    }
    pdVar3 = (double *)unaff_EDI[1];
    pdVar5 = (double *)(((int)&local_1c - (int)pdVar5 & 0xfffffff0U) + *unaff_EDI);
    if (pdVar3 == (double *)0x0) goto LAB_00476073;
    *pdVar3 = *pdVar5;
    dVar7 = pdVar5[1];
  }
  else {
    if (pdVar3 == (double *)unaff_EDI[2]) {
      FUN_00815de0();
    }
    pdVar3 = (double *)unaff_EDI[1];
    if (pdVar3 == (double *)0x0) goto LAB_00476073;
    *pdVar3 = local_1c;
    dVar7 = local_14;
  }
  pdVar3[1] = dVar7;
LAB_00476073:
  unaff_EDI[1] = unaff_EDI[1] + 0x10;
LAB_00476077:
  (**(code **)(*local_8 + 100))(iVar1);
  return 1;
}

