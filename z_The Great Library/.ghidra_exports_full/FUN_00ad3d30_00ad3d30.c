// FUN_00ad3d30 @ 00ad3d30 body=[[00ad3d30, 00ad3df1]]


undefined4 FUN_00ad3d30(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b36e3b;
  local_c = ExceptionList;
  uVar2 = 0;
  if (*(uint *)(in_ECX + 0x14) != 0) {
    puVar6 = *(undefined4 **)(in_ECX + 0x10);
    do {
      if (*(int *)*puVar6 == param_1) {
        if (uVar2 == 0xffffffff) {
          return 0;
        }
        uVar1 = (*(undefined4 **)(in_ECX + 0x10))[uVar2 * 4 + 1];
        ExceptionList = &local_c;
        uVar3 = FUN_00ab047b(DAT_00ef259c ^ (uint)&stack0xffffffe4);
        iVar4 = (*(code *)PTR_FUN_00f01b08)(0x1f0,0x192,4,0,0,0xffffffff);
        uStack_4 = 0;
        if (iVar4 == 0) {
          ExceptionList = local_c;
          return 0;
        }
        uVar5 = FUN_00ad17e0(*(undefined4 *)
                              (*(int *)(*(int *)(in_ECX + 0x10) + uVar2 * 0x10) +
                              (uVar3 % uVar1) * 4),param_2,param_3);
        ExceptionList = local_c;
        return uVar5;
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 4;
    } while (uVar2 < *(uint *)(in_ECX + 0x14));
  }
  return 0;
}

