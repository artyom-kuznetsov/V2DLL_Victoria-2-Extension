// FUN_00b291c0 @ 00b291c0 body=[[00b291c0, 00b292aa]]


undefined4 FUN_00b291c0(void)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  short *psVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined4 local_8;
  
  local_8 = 0;
  psVar2 = (short *)(*DAT_013f3aac)(0,0x80,0);
  psVar6 = (short *)0x0;
  uVar1 = 0x40;
  while( true ) {
    if (psVar2 == (short *)0x0) {
      (*DAT_013f3ab0)(psVar6);
      FUN_00b1f840("Out of memory");
      return 0;
    }
    uVar3 = (*DAT_00f20bc0)(0,psVar2,uVar1);
    if (uVar3 == 0) {
      (*DAT_013f3ab0)(psVar2);
      uVar5 = FUN_00b29110();
      FUN_00b1f840(uVar5);
      return 0;
    }
    if (uVar3 < uVar1) break;
    psVar4 = (short *)(*DAT_013f3aac)(psVar2,uVar1 << 2,0);
    psVar6 = psVar2;
    uVar1 = uVar1 * 2;
    psVar2 = psVar4;
  }
  if (uVar3 != 0) {
    for (psVar6 = psVar2 + (uVar3 - 1); psVar6 != psVar2; psVar6 = psVar6 + -1) {
      if (*psVar6 == 0x5c) {
        if (psVar6 != psVar2) goto LAB_00b29285;
        break;
      }
    }
    if (*psVar6 == 0x5c) {
LAB_00b29285:
      psVar6[1] = 0;
      local_8 = FUN_00b28840(psVar2);
    }
    else {
      FUN_00b1f840("GetModuleFileName() had no dir");
    }
  }
  (*DAT_013f3ab0)(psVar2);
  return local_8;
}

