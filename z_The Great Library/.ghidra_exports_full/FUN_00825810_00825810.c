// FUN_00825810 @ 00825810 body=[[00825810, 00825958] [00825960, 00825a49]]


int FUN_00825810(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *unaff_EDI;
  int local_c;
  int local_8;
  
  piVar6 = (int *)unaff_EDI[0x1a];
  local_c = 0;
  local_8 = in_EAX;
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  do {
    if (in_EAX < 1) {
      return local_c;
    }
    iVar5 = *piVar6;
    piVar6 = (int *)piVar6[2];
    if ((*(int *)(iVar5 + 0x74) == 0) && (*(int *)(iVar5 + 0x1ac) < 1)) {
      iVar9 = 0;
      for (piVar2 = *(int **)(iVar5 + 0x90); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        iVar9 = iVar9 + *(int *)(*(int *)(*piVar2 + 0x38) + 600) / 1000;
        in_EAX = local_8;
      }
      if (iVar9 != 0) {
        if (iVar9 < in_EAX) {
          in_EAX = iVar9;
        }
        iVar4 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0xb4) *
                         (longlong)(in_EAX * 1000),1000,0);
        iVar4 = iVar4 / 2000;
        DAT_0131ca68 = FUN_009c12d0();
        uVar10 = (uint)DAT_01258a90;
        iVar7 = DAT_01258a9c + 1;
        DAT_01258a9c = iVar7;
        (**(code **)(*unaff_EDI + 0xe8))();
        FUN_0084fbb0();
        piVar2 = *(int **)(iVar5 + 0x90);
        iVar1 = iVar4;
        while (piVar2 != (int *)0x0) {
          iVar8 = *piVar2;
          piVar2 = (int *)piVar2[2];
          iVar3 = *(int *)(*(int *)(iVar8 + 0x38) + 0x34);
          if (iVar3 == 6) {
            if (local_8 < iVar9) {
              (**(code **)(*unaff_EDI + 0xe8))(uVar10 + 0x1268,iVar7);
              FUN_0084fd10();
              iVar8 = (int)((ulonglong)
                            ((longlong)*(int *)(*(int *)(iVar8 + 0x38) + 600) * -0x10624dd3) >> 0x20
                           );
              iVar9 = iVar9 + ((iVar8 >> 6) - (iVar8 >> 0x1f));
            }
          }
          else if (iVar3 == 5) {
            if (iVar1 < 1) {
LAB_00825985:
              (**(code **)(*unaff_EDI + 0xe8))(uVar10 + 0x1268,iVar7);
              FUN_0084fd10();
            }
            else {
              iVar1 = iVar1 + -1;
            }
          }
          else {
            if ((iVar3 != 4) || (iVar4 < 1)) goto LAB_00825985;
            iVar4 = iVar4 + -1;
          }
        }
        (**(code **)(*param_1 + 0x1b8))(iVar5);
        iVar5 = FUN_005d0610();
        in_EAX = local_8 - iVar5;
        iVar5 = FUN_005d0610();
        local_c = local_c + iVar5;
        local_8 = in_EAX;
      }
    }
    if (piVar6 == (int *)0x0) {
      return local_c;
    }
  } while( true );
}

