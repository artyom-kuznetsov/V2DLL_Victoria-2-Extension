// FUN_00b0b8a0 @ 00b0b8a0 body=[[00b0b8a0, 00b0b961]]


undefined4 * FUN_00b0b8a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b393cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)
           (*(code *)PTR_FUN_00f01b08)
                     (0x14,0xcd,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    iVar1 = in_ECX[1];
    uVar3 = in_ECX[2];
    puVar2[1] = iVar1;
    puVar2[2] = uVar3;
    uVar3 = (*(code *)PTR_FUN_00f01b08)(iVar1 << 4,0xcd,4,0x65,0,0);
    puVar2[3] = 0xc1200000;
    *puVar2 = uVar3;
    puVar2[4] = 0x41200000;
  }
  puVar2[3] = in_ECX[3];
  puVar2[4] = in_ECX[4];
  FID_conflict__memcpy((void *)*puVar2,(void *)*in_ECX,in_ECX[1] << 4);
  ExceptionList = local_c;
  return puVar2;
}

