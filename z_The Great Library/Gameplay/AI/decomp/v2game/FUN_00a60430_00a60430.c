// FUN_00a60430 @ 00a60430 body=[[00a60430, 00a6048b]]


int FUN_00a60430(int param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  ushort *puVar5;
  
  iVar2 = *(int *)(in_ECX + 0x18);
  uVar3 = *(uint *)(iVar2 + 0x20);
  iVar4 = 0;
  if (uVar3 < (uint)(*(int *)(iVar2 + 0x24) * 0xe8 + *(int *)(iVar2 + 0x20))) {
    puVar5 = (ushort *)(uVar3 + 0x10);
    do {
      if (((*(int *)(puVar5 + -2) == param_1) && (*puVar5 == param_2)) &&
         (*(int *)(puVar5 + 4) == 4)) {
        return iVar4;
      }
      puVar1 = puVar5 + 0x6c;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x74;
    } while (puVar1 < (ushort *)(*(int *)(iVar2 + 0x24) * 0xe8 + uVar3));
  }
  return -1;
}

