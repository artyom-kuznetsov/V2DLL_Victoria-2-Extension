// FUN_0098b7b0 @ 0098b7b0 body=[[0098b7b0, 0098b810]]


void FUN_0098b7b0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  cVar1 = FUN_0098bb20();
  if (cVar1 == '\0') {
    *(undefined1 *)(in_ECX + 0x134) = 1;
  }
  uVar2 = FUN_005da1e0(in_ECX + 0x2c);
  FUN_0098ac80(uVar2);
  puVar4 = (undefined4 *)(in_ECX + 0x80);
  puVar5 = (undefined4 *)(in_ECX + 0x138);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(in_ECX + 0x134) = 0;
  return;
}

