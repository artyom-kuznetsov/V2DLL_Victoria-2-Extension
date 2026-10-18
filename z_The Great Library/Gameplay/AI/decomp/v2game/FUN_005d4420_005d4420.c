// FUN_005d4420 @ 005d4420  (requested 005D4420, first bytes: 55 8B EC 8B 86 DC 00 00)


void FUN_005d4420(void)

{
  int iVar1;
  uint uVar2;
  int *unaff_ESI;
  float10 fVar3;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  
  if (unaff_ESI[0x37] == 0) {
    return;
  }
  if (unaff_ESI[0x3b] == 0) {
    return;
  }
  (**(code **)(*unaff_ESI + 0x70))(&local_18,unaff_ESI[0x37]);
  (**(code **)(*unaff_ESI + 0x70))
            (&local_10,
             *(undefined4 *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)unaff_ESI[0x39] * 4));
  iVar1 = *(int *)(DAT_0125870c + 0x2abc);
  uVar2 = local_18 - local_10 >> 0x1f;
  if (iVar1 + -200 < (int)((local_18 - local_10 ^ uVar2) - uVar2)) {
    if (199 < local_10) {
      if (local_10 <= iVar1 + -200) goto LAB_005d44ad;
      iVar1 = -iVar1;
    }
    local_10 = local_10 + iVar1;
  }
LAB_005d44ad:
  fVar3 = (float10)FUN_005c5c80((float)local_14 - (float)local_c,(float)local_10 - (float)local_18);
  local_8 = (float)(fVar3 - (float10)1.5707963705062866);
  unaff_ESI[0x2e] = (int)local_8;
  unaff_ESI[0x2d] = (int)local_8;
  if ((int *)unaff_ESI[0x43] != (int *)0x0) {
    (**(code **)(*(int *)unaff_ESI[0x43] + 0x94))(local_8);
  }
  return;
}

