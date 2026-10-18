// FUN_004ded50 @ 004ded50 body=[[004ded50, 004dee2b] [004dee2f, 004dee63]]


void FUN_004ded50(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *unaff_ESI;
  
  piVar3 = param_1;
  if (unaff_ESI != param_1) {
    iVar6 = *param_1;
    uVar8 = param_1[1] - iVar6 >> 5;
    if (uVar8 == 0) {
      FUN_004def70(unaff_ESI,&param_1,*unaff_ESI,unaff_ESI[1]);
      return;
    }
    iVar1 = *unaff_ESI;
    uVar7 = unaff_ESI[1] - iVar1 >> 5;
    if (uVar8 <= uVar7) {
      puVar5 = (undefined4 *)FUN_004df740(iVar6,param_1);
      puVar2 = (undefined4 *)unaff_ESI[1];
      for (; puVar5 != puVar2; puVar5 = puVar5 + 8) {
        (**(code **)*puVar5)(0);
      }
      unaff_ESI[1] = (param_1[1] - *param_1 & 0xffffffe0U) + *unaff_ESI;
      return;
    }
    if (uVar8 <= (uint)(unaff_ESI[2] - iVar1 >> 5)) {
      FUN_004df740(iVar6,param_1);
      iVar6 = FUN_004e0750(iVar6 + uVar7 * 0x20,param_1);
      unaff_ESI[1] = iVar6;
      return;
    }
    if (iVar1 != 0) {
      FUN_004dee70();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*unaff_ESI);
    }
    cVar4 = FUN_00463f20();
    if (cVar4 != '\0') {
      iVar6 = FUN_004e0750(*piVar3,param_1);
      unaff_ESI[1] = iVar6;
    }
  }
  return;
}

