// FUN_00ae62c0 @ 00ae62c0 body=[[00ae62c0, 00ae6359]]


void FUN_00ae62c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b37d62;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  FUN_00ae50d0(local_1c,param_1,param_2,param_3,param_4);
  uVar1 = *(uint *)(param_4 + 4);
  uVar3 = 0;
  local_4 = 0;
  if (uVar1 != 0) {
    do {
      FUN_00ad7e90(*(undefined4 *)(local_1c[0] + uVar3 * 4),1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  local_4 = 0xffffffff;
  if (local_1c[0] != 0) {
    (*(code *)PTR__free_00f01b10)(local_1c[0],uVar2);
  }
  ExceptionList = local_c;
  return;
}

