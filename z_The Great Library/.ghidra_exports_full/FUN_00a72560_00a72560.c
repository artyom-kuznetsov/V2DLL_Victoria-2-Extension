// FUN_00a72560 @ 00a72560 body=[[00a72560, 00a725e8]]


/* WARNING: Removing unreachable block (ram,0x00a7259a) */

undefined4 FUN_00a72560(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  uVar6 = uVar1;
  while( true ) {
    if ((uVar6 < uVar1) || (param_1[1] <= uVar6)) {
      return 0;
    }
    uVar2 = *(uint *)(param_2 + 0x10);
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

