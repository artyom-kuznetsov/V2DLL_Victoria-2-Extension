// FUN_009d16c0 @ 009d16c0 body=[[009d16c0, 009d173a]]


undefined1 FUN_009d16c0(uint param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  int unaff_EDI;
  uint local_8;
  
  uVar2 = param_1;
  param_1 = FUN_009d3f70(param_1);
  if (param_1 != *(uint *)(unaff_EDI + 0x94)) {
    cVar3 = FUN_0098ab20();
    if (cVar3 == '\0') {
      puVar4 = &param_1;
      goto LAB_009d16ff;
    }
  }
  local_8 = *(uint *)(unaff_EDI + 0x94);
  puVar4 = &local_8;
LAB_009d16ff:
  param_1 = *puVar4;
  if (param_1 != *(uint *)(unaff_EDI + 0x94)) {
    iVar1 = *(int *)(unaff_EDI + 0x3c);
    iVar5 = FUN_0045c080(iVar1,uVar2);
    if (iVar5 == iVar1) {
      return *(undefined1 *)(param_1 + 0x124);
    }
  }
  return 0;
}

