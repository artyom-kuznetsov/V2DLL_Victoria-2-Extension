// FUN_009f9250 @ 009f9250 body=[[009f9250, 009f92a6]]


void FUN_009f9250(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(in_ECX + 0xe4) != 0) {
    puVar2 = (undefined4 *)FUN_007eb4f0(in_ECX + 0x54);
    iVar1 = *(int *)(in_ECX + 0xdc);
    puVar4 = (undefined4 *)(in_ECX + 0x94);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    if (iVar1 != 0) {
      FUN_009f87b0(iVar1,(undefined4 *)(in_ECX + 0x94));
    }
  }
  return;
}

