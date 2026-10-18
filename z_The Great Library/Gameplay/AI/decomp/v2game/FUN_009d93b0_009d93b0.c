// FUN_009d93b0 @ 009d93b0 body=[[009d93b0, 009d9502]]


void FUN_009d93b0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int local_8;
  
  piVar5 = param_2;
  FUN_009d9510();
  iVar7 = *param_2;
  piVar1 = param_2 + 1;
  iVar8 = 0;
  param_2 = (int *)0x0;
  if (*piVar1 - iVar7 >> 5 != 0) {
    local_8 = 0;
    do {
      uVar2 = *(undefined4 *)(iVar8 + 0xc + iVar7);
      uVar3 = *(undefined4 *)(iVar8 + 0x10 + iVar7);
      uVar4 = *(undefined4 *)(iVar8 + 0x14 + iVar7);
      FUN_00401000((*(float *)(param_1 + 0x178) + 0.0005) * 1000.0);
      iVar6 = FUN_00b31c00();
      if (iVar6 == 0) {
        iVar6 = -1;
      }
      else {
        iVar7 = *(int *)(iVar8 + iVar7);
        if ((iVar7 < -0x189373) || (0x20c49a < iVar7)) {
          uVar9 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
          iVar6 = __alldiv(uVar9,iVar6,iVar6 >> 0x1f);
        }
        else {
          iVar6 = (iVar7 * 1000) / iVar6;
        }
      }
      iVar7 = *(int *)(param_1 + 0x150);
      *(ulonglong *)(iVar7 + local_8) = CONCAT44(uVar3,uVar2);
      *(ulonglong *)(iVar7 + 8 + local_8) = CONCAT44((float)iVar6 / 1000.0,uVar4);
      iVar7 = *piVar5;
      param_2 = (int *)((int)param_2 + 1);
      local_8 = local_8 + 0x10;
      iVar8 = iVar8 + 0x20;
    } while (param_2 < (uint)(piVar5[1] - iVar7 >> 5));
  }
  return;
}

