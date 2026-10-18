// FUN_005d24a0 @ 005d24a0  (requested 005D24A0, first bytes: 55 8B EC 83 EC 10 53 56)


void FUN_005d24a0(int *param_1)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  local_c = *(int *)(DAT_012588e8 + 0xb0c);
  if ((in_EAX == 0) && (*(int *)(in_ECX + 0xec) == 0)) {
    local_c = *(int *)(in_ECX + 0xac);
  }
  else {
    FUN_005d1790(&local_8,*(undefined4 *)(in_ECX + 0xdc));
    iVar3 = local_8 - *(int *)(in_ECX + 0xf8);
    piVar1 = (int *)FUN_005d1570(in_ECX,local_10);
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      iVar2 = -1;
    }
    else if ((iVar3 < -0x189373) || (0x20c49a < iVar3)) {
      uVar4 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
      iVar2 = __alldiv(uVar4,iVar2,iVar2 >> 0x1f);
    }
    else {
      iVar2 = (iVar3 * 1000) / iVar2;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    iVar3 = (int)((float)iVar2 / 1000.0);
    if ((float)iVar3 < (float)iVar2 / 1000.0) {
      iVar3 = iVar3 + 1;
    }
    local_c = local_c + iVar3 * 0x18;
    if (local_c < *(int *)(in_ECX + 0xac)) {
      *param_1 = *(int *)(in_ECX + 0xac);
      return;
    }
  }
  *param_1 = local_c;
  return;
}

