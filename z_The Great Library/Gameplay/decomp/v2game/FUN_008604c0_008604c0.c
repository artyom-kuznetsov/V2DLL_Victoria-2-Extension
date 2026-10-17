// FUN_008604c0 @ 008604c0  (requested 008604C0, first bytes: 55 8B EC 6A FF 68 98 29)


uint * FUN_008604c0(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                   int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 local_7c [72];
  int local_34;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b42998;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0047db00();
  local_8 = 0;
  if ((param_5 != 0x8000) || (param_6 != 0)) {
    FUN_0047de60(local_7c);
  }
  FUN_0047df00();
  FUN_0047dca0();
  FUN_0047dca0();
  local_24 = *(uint *)(param_1 + 0xb8);
  iVar2 = *(int *)(param_1 + 0xbc);
  local_20 = iVar2;
  FUN_0047e3e0();
  if ((iVar2 < local_18) || ((iVar2 <= local_18 && (local_24 <= local_1c)))) {
    puVar5 = &local_24;
  }
  else {
    puVar5 = &local_1c;
  }
  uVar3 = *puVar5;
  uVar4 = puVar5[1];
  puVar5 = (uint *)(param_1 + 0xb8);
  uVar1 = *puVar5;
  *puVar5 = *puVar5 - uVar3;
  *param_2 = uVar3;
  *(int *)(param_1 + 0xbc) = (*(int *)(param_1 + 0xbc) - uVar4) - (uint)(uVar1 < uVar3);
  param_2[1] = uVar4;
  if (local_34 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

