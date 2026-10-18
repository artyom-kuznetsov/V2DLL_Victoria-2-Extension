// FUN_00a6ad70 @ 00a6ad70 body=[[00a6ad70, 00a6adf2]]


void FUN_00a6ad70(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_ESI;
  
  while( true ) {
    puVar1 = (uint *)*unaff_ESI;
    uVar4 = *puVar1;
    uVar5 = *(int *)(*(int *)(puVar1[1] + 4) + 0x100) - 1;
    if ((uVar4 >> 3 & uVar5) == uVar5) {
      puVar1[(uVar4 * 3 & 7) + 2] = *(uint *)puVar1[(uVar4 * 3 & 7) + 2];
    }
    uVar4 = uVar4 + 1;
    *(uint *)*unaff_ESI = uVar4;
    iVar2 = *unaff_ESI;
    if (uVar4 == *(uint *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 0x80)) break;
    iVar3 = *(int *)(iVar2 + 8 + (uVar4 * 3 & 7) * 4);
    uVar4 = *(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 0x100) - 1U & uVar4 >> 3;
    unaff_ESI[1] = iVar3 + 8 + uVar4 * 4;
    if ((*(uint *)(iVar3 + 4) & 1 << ((byte)uVar4 & 0x1f)) != 0) {
      return;
    }
  }
  unaff_ESI[1] = 0;
  return;
}

