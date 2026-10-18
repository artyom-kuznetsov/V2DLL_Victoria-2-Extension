// FUN_00ad0780 @ 00ad0780 body=[[00ad0780, 00ad089a]]


void FUN_00ad0780(void)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  void *unaff_EBX;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b36b91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = 0;
  iVar3 = in_ECX;
  if (*(int *)(in_ECX + 0x1b0) != 0) {
    iVar3 = FUN_00ace350(DAT_00ef259c ^ (uint)&stack0xffffffe0);
  }
  (**(code **)(**(int **)(*(int *)(DAT_00f209e0 + 0x30) + 0x34) + 0x28))(iVar3,0);
  iVar4 = (*(code *)PTR_FUN_00f01b08)(0x20,0x25d,4,0,0,0xffffffff);
  local_c = (void *)0x0;
  if (iVar4 != 0) {
    iVar6 = FUN_00adfbd0(in_ECX,uStack_4);
  }
  iVar4 = *(int *)(in_ECX + 0x140);
  uVar5 = iVar4 + 1;
  local_c = (void *)0xffffffff;
  *(uint *)(in_ECX + 0x140) = uVar5;
  if (*(uint *)(in_ECX + 0x144) < uVar5) {
    FUN_00aeb6c0(iVar4 + 2);
  }
  piVar2 = (int *)(*(int *)(in_ECX + 0x13c) + -4 + *(int *)(in_ECX + 0x140) * 4);
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar6;
  }
  pcVar1 = (char *)(*(int *)(iVar6 + 0x10) + 0x1ec);
  *pcVar1 = *pcVar1 + '\x01';
  *(int *)(*(int *)(iVar6 + 0x10) + 0x1b0) = in_ECX;
  FUN_00ad3e00(*(undefined4 *)(iVar6 + 0x10));
  if ((*(byte *)(iVar3 + 0x1ed) & 2) != 0) {
    (**(code **)(**(int **)(*(int *)(DAT_00f209e0 + 0x30) + 0x34) + 0x24))(iVar3,0);
  }
  ExceptionList = unaff_EBX;
  return;
}

