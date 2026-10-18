// FUN_007c6bb0 @ 007c6bb0 body=[[007c6bb0, 007c6cbe]]


uint FUN_007c6bb0(int param_1)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_00967f50();
  if (iVar1 != 0) {
    iVar1 = FUN_00967f50();
    uVar2 = 0;
    if (iVar1 == 0) goto LAB_007c6bde;
  }
  iVar1 = FUN_00967f50();
  if (iVar1 == 0) {
    uVar2 = FUN_00967f50();
    if (uVar2 != 0) goto LAB_007c6c03;
  }
  iVar1 = FUN_00967f50();
  if (iVar1 != 0) {
LAB_007c6c70:
    iVar1 = FUN_00967f50();
    uVar2 = *(uint *)(iVar1 + 0xb8);
    iVar1 = *(int *)(iVar1 + 0xbc);
    iVar3 = FUN_00967f50();
    if ((*(int *)(iVar3 + 0xbc) <= iVar1) &&
       ((*(int *)(iVar3 + 0xbc) < iVar1 || (*(uint *)(iVar3 + 0xb8) < uVar2)))) {
      return 1;
    }
    return 0;
  }
  iVar1 = FUN_00967f50();
  if (iVar1 != 0) goto LAB_007c6c70;
  uVar2 = *(uint *)(param_1 + 0x274);
  if (uVar2 != 0) {
    if (*(int *)(in_EAX + 0x274) == 0) {
LAB_007c6bde:
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    if (uVar2 != 0) goto LAB_007c6c57;
  }
  if ((*(int *)(in_EAX + 0x274) != 0) || ((uVar2 == 0 && (*(int *)(in_EAX + 0x274) == 0)))) {
LAB_007c6c03:
    return uVar2 & 0xffffff00;
  }
LAB_007c6c57:
  return (uint)(*(uint *)(uVar2 + 0x28) < *(uint *)(*(int *)(in_EAX + 0x274) + 0x28));
}

