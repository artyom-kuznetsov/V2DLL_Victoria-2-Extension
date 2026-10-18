// FUN_00b16350 @ 00b16350 body=[[00b16350, 00b16409]]


undefined4 FUN_00b16350(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b39e82;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (*(code *)PTR_FUN_00f01b08)
                    (0xc,0xe,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffe4);
  uStack_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00b15960(param_1);
  }
  iVar4 = in_ECX[1];
  uVar2 = iVar4 + 1;
  uStack_4 = 0xffffffff;
  in_ECX[1] = uVar2;
  if ((uint)in_ECX[2] < uVar2) {
    FUN_00aeb6c0(iVar4 + 2);
  }
  piVar3 = (int *)(*in_ECX + -4 + in_ECX[1] * 4);
  if (piVar3 != (int *)0x0) {
    *piVar3 = iVar1;
  }
  iVar4 = in_ECX[1];
  uVar2 = 0;
  if (iVar4 != 0) {
    piVar3 = (int *)*in_ECX;
    do {
      uVar2 = uVar2 | *(uint *)(*piVar3 + 4);
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  in_ECX[4] = uVar2;
  ExceptionList = local_c;
  return *(undefined4 *)(iVar1 + 8);
}

