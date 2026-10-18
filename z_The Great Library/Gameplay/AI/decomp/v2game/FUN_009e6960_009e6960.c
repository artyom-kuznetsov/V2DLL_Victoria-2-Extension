// FUN_009e6960 @ 009e6960 body=[[009e6960, 009e6a4d] [009e6a51, 009e6a72]]


/* WARNING: Removing unreachable block (ram,0x009e69b8) */
/* WARNING: Removing unreachable block (ram,0x009e6a44) */

int FUN_009e6960(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3d728;
  local_14 = ExceptionList;
  uVar1 = *param_1;
  uVar6 = uVar1;
  ExceptionList = &local_14;
  while( true ) {
    if ((uVar6 < uVar1) || (param_1[1] <= uVar6)) {
      FUN_00408ed0(param_2,0,0xffffffff);
      local_c = 0;
      FUN_00a72850();
      ExceptionList = local_14;
      return ((param_1[1] - *param_1 & 0xffffffe0) - 4) + *param_1;
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
  ExceptionList = local_14;
  return uVar6 + 0x1c;
}

