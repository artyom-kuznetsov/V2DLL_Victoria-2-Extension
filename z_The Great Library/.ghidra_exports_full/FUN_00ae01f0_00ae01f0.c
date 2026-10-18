// FUN_00ae01f0 @ 00ae01f0 body=[[00ae01f0, 00ae0260]]


void FUN_00ae01f0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1ac) + 0x84);
  if (iVar1 != in_ECX[1]) {
    FUN_00ae0140(iVar1);
  }
  uVar2 = (uint)*(ushort *)(param_1 + 400);
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(ushort *)(param_1 + 400) != 0) {
    iVar4 = 0;
    do {
      iVar3 = (uint)*(ushort *)(iVar4 + *(int *)(param_1 + 0x18c)) * 0x40;
      FID_conflict__memcpy((void *)(*in_ECX + iVar3),(void *)(iVar3 + iVar1),0x40);
      iVar4 = iVar4 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

