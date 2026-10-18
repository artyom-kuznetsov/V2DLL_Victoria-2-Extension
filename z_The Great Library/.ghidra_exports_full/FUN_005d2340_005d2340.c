// FUN_005d2340 @ 005d2340 body=[[005d2340, 005d2399] [005d23a0, 005d2494]]


int * FUN_005d2340(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 local_c [4];
  int local_8;
  
  piVar5 = param_2;
  if (*(int *)(param_1 + 0xec) == 1) {
    FUN_005d24a0(param_2);
    return piVar5;
  }
  local_8 = *(int *)(DAT_012588e8 + 0xb0c);
  if (1 < *(int *)(param_1 + 0xec)) {
    piVar5 = *(int **)(param_1 + 0xe4);
    iVar7 = 0;
    uVar2 = *(undefined4 *)(param_1 + 0xdc);
    iVar3 = param_1;
    while (param_1 = iVar3, piVar5 != (int *)0x0) {
      uVar1 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar5 * 4);
      piVar5 = (int *)piVar5[2];
      piVar4 = (int *)FUN_005d1790(local_c,uVar2);
      iVar7 = iVar7 + *piVar4;
      uVar2 = uVar1;
      iVar3 = param_1;
    }
    if (0 < iVar7) {
      iVar7 = iVar7 - *(int *)(iVar3 + 0xf8);
      piVar5 = (int *)FUN_005d1570(iVar3,&param_1);
      iVar6 = *piVar5;
      if (iVar6 == 0) {
        iVar6 = -1;
      }
      else if (iVar7 + 0x189373U < 0x39580e) {
        iVar6 = (iVar7 * 1000) / iVar6;
      }
      else {
        uVar8 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
        iVar6 = __alldiv(uVar8,iVar6,iVar6 >> 0x1f);
      }
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      iVar7 = (int)((float)iVar6 / 1000.0);
      if ((float)iVar7 < (float)iVar6 / 1000.0) {
        iVar7 = iVar7 + 1;
      }
      local_8 = local_8 + iVar7 * 0x18;
      if (local_8 < *(int *)(iVar3 + 0xac)) {
        *param_2 = *(int *)(iVar3 + 0xac);
        return param_2;
      }
    }
  }
  *param_2 = local_8;
  return param_2;
}

