// FUN_005d2210 @ 005d2210 body=[[005d2210, 005d2238] [005d2240, 005d2338]]


uint FUN_005d2210(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 local_8 [4];
  
  piVar5 = *(int **)(param_1 + 0xe4);
  iVar7 = 0;
  uVar3 = *(uint *)(param_1 + 0xdc);
  if (piVar5 == (int *)0x0) {
    return *(uint *)(param_1 + 0xdc) & 0xffffff00;
  }
  while( true ) {
    uVar1 = *(uint *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar5 * 4);
    piVar5 = (int *)piVar5[2];
    piVar4 = (int *)FUN_005d1790(local_8,uVar3);
    iVar2 = param_1;
    iVar7 = iVar7 + *piVar4;
    if ((uVar1 == param_2) && (0 < iVar7)) break;
    uVar3 = uVar1;
    if (piVar5 == (int *)0x0) {
      return uVar1 & 0xffffff00;
    }
  }
  iVar7 = iVar7 - *(int *)(param_1 + 0xf8);
  piVar5 = (int *)FUN_005d1570(param_1,&param_1);
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
  iVar7 = *(int *)(DAT_012588e8 + 0xb0c) + iVar7 * 0x18;
  *param_3 = iVar7;
  if (iVar7 < *(int *)(iVar2 + 0xac)) {
    *param_3 = *(int *)(iVar2 + 0xac);
  }
  return CONCAT31((int3)((uint)iVar7 >> 8),1);
}

