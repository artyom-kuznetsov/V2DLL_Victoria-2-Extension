// FUN_009c1bd0 @ 009c1bd0 body=[[009c1bd0, 009c1c61]]


/* WARNING: Removing unreachable block (ram,0x009c1c12) */

undefined4 FUN_009c1bd0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *DAT_01258aa0;
  uVar6 = uVar1;
  while( true ) {
    if ((uVar6 < uVar1) || (DAT_01258aa0[1] <= uVar6)) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar3 = *(uint *)(uVar6 + 0x10);
    uVar4 = uVar3;
    if (uVar2 <= uVar3) {
      uVar4 = uVar2;
    }
    iVar5 = FUN_00414bd0(uVar4);
    if (((iVar5 == 0) && (uVar2 <= uVar3)) && (uVar3 == uVar2)) break;
    uVar6 = uVar6 + 0x20;
  }
  return *(undefined4 *)(uVar6 + 0x1c);
}

