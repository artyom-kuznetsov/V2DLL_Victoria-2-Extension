// FUN_0097e5f0 @ 0097e5f0 body=[[0097e5f0, 0097e6e6]]


void FUN_0097e5f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 in_EAX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  uint *unaff_EDI;
  int local_c;
  
  bVar5 = false;
  switch(in_EAX) {
  case 2:
    bVar5 = true;
  case 1:
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00984480(*unaff_EDI,unaff_EDI[1],(int)(unaff_EDI[1] - *unaff_EDI) >> 2,local_c);
    break;
  case 4:
    bVar5 = true;
  case 3:
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00724600(*unaff_EDI,unaff_EDI[1],(int)(unaff_EDI[1] - *unaff_EDI) >> 2,local_c);
    break;
  default:
    goto switchD_0097e603_default;
  }
  if (bVar5) {
    puVar7 = (undefined4 *)unaff_EDI[1];
    puVar6 = (undefined4 *)*unaff_EDI;
    if (puVar6 != puVar7) {
      do {
        puVar7 = puVar7 + -1;
        if (puVar6 == puVar7) break;
        uVar1 = *puVar6;
        *puVar6 = *puVar7;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar1;
      } while (puVar6 != puVar7);
    }
  }
switchD_0097e603_default:
  (**(code **)(*param_1 + 0x24))();
  piVar9 = (int *)*unaff_EDI;
  do {
    while( true ) {
      if ((piVar9 < (int *)*unaff_EDI) || ((int *)unaff_EDI[1] <= piVar9)) {
        return;
      }
      iVar2 = *piVar9;
      piVar9 = piVar9 + 1;
      if (*(char *)(iVar2 + 0x38) == '\0') break;
LAB_0097e6d4:
      (**(code **)(*(int *)(iVar2 + 0x1c) + 0x30))();
    }
    uVar8 = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x28) + 8) + 0x3a4 +
                           *(int *)(DAT_012588e8 + 0xbcc));
    iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3e4);
    iVar4 = *(int *)(iVar3 + 4 + uVar8 * 8);
    if ((iVar4 < 0) || ((iVar4 < 1 && (*(int *)(iVar3 + uVar8 * 8) == 0)))) goto LAB_0097e6d4;
    (**(code **)(*param_1 + 0x10))(iVar2,1);
  } while( true );
}

